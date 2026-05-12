#!/usr/bin/env python3

"""RTOR (right-turn-on-red) hazard node.

Subscribes to /comms/inbound_binary_msg, decodes incoming UPER frames
with the j2735_202409 module, and produces alerts when:
  * the ego vehicle (identified by BSM TemporaryID) is approaching an
    equipped intersection in a right-turn-allowed lane,
  * the SPAT signal-group governing that lane is in a stop state
    (stop-And-Remain or stop-Then-Proceed),
  * the ego right-turn signal is on (optional, default required), and
  * one or more remote vehicles or VRUs are in conflicting positions.

Hazards are emitted as JSON on /v2x/rtor_alerts (std_msgs/String) and
visualised via /v2x/rtor_markers and /v2x/rtor_overlay_text.
"""

import contextlib
import importlib
import io
import json
import math
import sys
import time
from dataclasses import dataclass, field
from pathlib import Path
from typing import Dict, List, Optional, Tuple

import rclpy
from carma_driver_msgs.msg import ByteArray
from geometry_msgs.msg import Point
from raptor_dbw_msgs.msg import OtherActuatorsReport, TurnSignal
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from std_msgs.msg import String
from visualization_msgs.msg import Marker, MarkerArray

OVERLAY_MSG_AVAILABLE = False
try:
    from rviz_2d_overlay_msgs.msg import OverlayText  # type: ignore

    OVERLAY_MSG_AVAILABLE = True
except ImportError:
    try:
        from jsk_rviz_plugins.msg import OverlayText  # type: ignore

        OVERLAY_MSG_AVAILABLE = True
    except ImportError:
        OverlayText = None


VALID_FRAME_IDS = {0x12, 0x13, 0x14, 0x1D, 0x1E, 0x1F, 0x20, 0x29}
SDSM_MESSAGE_IDS = {28, 41}
EARTH_RADIUS_M = 6378137.0
RED_EVENT_STATES = {"stop-And-Remain", "stop-Then-Proceed", "stopAndRemain", "stopThenProceed"}

LIGHT_NAME_ALIASES = {
    "leftturnsignalon": "left_turn",
    "leftturnsignal": "left_turn",
    "leftturn": "left_turn",
    "rightturnsignalon": "right_turn",
    "rightturnsignal": "right_turn",
    "rightturn": "right_turn",
    "hazardsignalon": "hazard",
    "hazard": "hazard",
    "lowbeamheadlightson": "low_beam",
    "highbeamheadlightson": "high_beam",
}

LIGHT_HINT_TOKENS = (
    "light",
    "lamp",
    "turn",
    "signal",
    "indicator",
    "exterior",
    "safety",
)


# ---------- decoder bootstrap (mirrors v2x_inbound_marker_visualizer.py) ----------


def _try_load_j2735_decoder_module():
    try:
        return importlib.import_module("j2735_202409")
    except ImportError:
        pass

    current = Path(__file__).resolve()
    roots = [current.parent]
    roots.extend(current.parents)
    for root in roots:
        venv_lib = root / ".venv" / "lib"
        if not venv_lib.is_dir():
            continue
        for py_dir in sorted(venv_lib.glob("python*")):
            site_packages = py_dir / "site-packages"
            if not site_packages.is_dir():
                continue
            site_packages_str = str(site_packages)
            if site_packages_str not in sys.path:
                sys.path.insert(0, site_packages_str)
            try:
                return importlib.import_module("j2735_202409")
            except ImportError:
                continue

    raise ImportError("No module named 'j2735_202409'")


def extract_framed_candidates(data: bytes) -> List[bytes]:
    candidates: List[bytes] = []
    for idx in range(len(data) - 3):
        if data[idx] != 0x00:
            continue
        msg_id = data[idx + 1]
        msg_len = data[idx + 2]
        if msg_id in VALID_FRAME_IDS and msg_len > 0:
            end = idx + 3 + msg_len
            if end <= len(data):
                candidates.append(data[idx:end])
    for idx in range(len(data) - 2):
        msg_id = data[idx]
        msg_len = data[idx + 1]
        if msg_id in VALID_FRAME_IDS and msg_len > 0:
            end = idx + 2 + msg_len
            if end <= len(data):
                candidates.append(data[idx:end])

    # Some feeds include message-id prefixes without explicit short length bytes.
    for msg_id in (
        b"\x00\x12",
        b"\x00\x13",
        b"\x00\x14",
        b"\x00\x1d",
        b"\x00\x1e",
        b"\x00\x1f",
        b"\x00\x20",
        b"\x00\x29",
    ):
        idx = data.find(msg_id)
        if idx != -1:
            candidates.append(data[idx:])

    return candidates


def try_decode(payload: bytes, message_frame) -> Optional[dict]:
    try:
        with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
            message_frame.from_uper(payload)
            decoded_json = message_frame.to_jer()
        parsed = json.loads(decoded_json)
    except Exception:
        return None
    value = parsed.get("value")
    if not isinstance(value, (dict, list)):
        return None
    return parsed


def deep_scan_for_decode(data: bytes, message_frame) -> Optional[dict]:
    max_scan_len = min(260, len(data))
    for start in range(len(data)):
        max_end = min(len(data), start + max_scan_len)
        for end in range(start + 18, max_end + 1):
            decoded = try_decode(data[start:end], message_frame)
            if decoded:
                return decoded
    return None


# ---------- math helpers ----------


def latlon_distance_m(lat1: float, lon1: float, lat2: float, lon2: float) -> float:
    """Equirectangular approximation; accurate to <0.1% at intersection scale."""
    cos_mid = math.cos(math.radians(0.5 * (lat1 + lat2)))
    dx = math.radians(lon2 - lon1) * cos_mid * EARTH_RADIUS_M
    dy = math.radians(lat2 - lat1) * EARTH_RADIUS_M
    return math.hypot(dx, dy)


def latlon_to_local_xy(lat: float, lon: float, ref_lat: float, ref_lon: float) -> Tuple[float, float]:
    cos_ref = math.cos(math.radians(ref_lat))
    x = math.radians(lon - ref_lon) * cos_ref * EARTH_RADIUS_M
    y = math.radians(lat - ref_lat) * EARTH_RADIUS_M
    return x, y


def heading_diff_deg(lhs: float, rhs: float) -> float:
    delta = math.fmod(540.0 + lhs - rhs, 360.0) - 180.0
    return abs(delta)


def normalize_id(value) -> str:
    if isinstance(value, int):
        return f"{value:08x}"
    if isinstance(value, str):
        return value.lower().replace("0x", "").strip()
    return "unknown"


# ---------- field extractors (tolerant to schema variation) ----------


def _read_lat_lon(obj: dict) -> Optional[Tuple[float, float]]:
    if not isinstance(obj, dict):
        return None
    lat_raw = obj.get("lat")
    lon_raw = obj.get("long")
    if not isinstance(lon_raw, int):
        lon_raw = obj.get("lon")
    if not isinstance(lat_raw, int) or not isinstance(lon_raw, int):
        return None
    return lat_raw * 1e-7, lon_raw * 1e-7


def _read_int(obj: dict, *keys, scale: float = 1.0, sentinel: Optional[int] = None) -> Optional[float]:
    for key in keys:
        if not isinstance(obj, dict):
            return None
        if key in obj:
            v = obj[key]
            if isinstance(v, int):
                if sentinel is not None and v == sentinel:
                    return None
                return v * scale
    return None


def _extract_bsm_lights_flags(value: dict) -> Dict[str, bool]:
    """Find any field whose name contains 'lights' and parse its value.

    j2735 ExteriorLights is a BIT STRING with bit indices:
        0=lowBeam 1=highBeam 2=leftTurn 3=rightTurn 4=hazard
        5=autoLight 6=drl 7=fog 8=parking
    Decoders may render this as:
      * a list of named flags (["rightTurnSignalOn"])
      * a string of "0"/"1" bits
      * a hex string
      * a dict with named bool keys
    Return a normalised flag map keyed on the canonical names we care about.
    """
    flags: Dict[str, bool] = {}

    def visit(node, candidate_path: bool = False) -> None:
        if isinstance(node, dict):
            for key, sub in node.items():
                lower_key = key.lower() if isinstance(key, str) else ""
                normalised = _normalise_light_token(lower_key)
                next_candidate_path = candidate_path or any(token in lower_key for token in LIGHT_HINT_TOKENS)
                mapped = LIGHT_NAME_ALIASES.get(normalised)
                if mapped and isinstance(sub, (bool, int)):
                    flags[mapped] = bool(sub) or flags.get(mapped, False)
                if next_candidate_path:
                    _absorb_lights_value(sub, flags)
                visit(sub, next_candidate_path)
        elif isinstance(node, list):
            for item in node:
                if candidate_path:
                    _absorb_lights_value(item, flags)
                visit(item, candidate_path)
        elif candidate_path:
            _absorb_lights_value(node, flags)

    visit(value)
    return flags


def _absorb_lights_value(node, flags: Dict[str, bool]) -> None:
    if isinstance(node, dict):
        for key, sub in node.items():
            normalised = _normalise_light_token(key) if isinstance(key, str) else ""
            mapped = LIGHT_NAME_ALIASES.get(normalised)
            if mapped and isinstance(sub, (bool, int)):
                flags[mapped] = bool(sub) or flags.get(mapped, False)
            if isinstance(key, str) and normalised in {"value", "buf", "bytes", "bitstring", "bits"}:
                _absorb_lights_value(sub, flags)
    elif isinstance(node, list):
        for item in node:
            if isinstance(item, str):
                normalised = _normalise_light_token(item)
                mapped = LIGHT_NAME_ALIASES.get(normalised)
                if mapped:
                    flags[mapped] = True
            elif isinstance(item, int) and 0 <= item <= 255:
                _absorb_lights_value(format(item, "08b"), flags)
    elif isinstance(node, str):
        clean = node.strip()
        if clean and all(c in "01" for c in clean):
            for idx, ch in enumerate(clean):
                if ch != "1":
                    continue
                if idx == 2:
                    flags["left_turn"] = True
                elif idx == 3:
                    flags["right_turn"] = True
                elif idx == 4:
                    flags["hazard"] = True
        else:
            mapped = LIGHT_NAME_ALIASES.get(_normalise_light_token(clean))
            if mapped:
                flags[mapped] = True
    elif isinstance(node, int) and 0 <= node <= 0x1FF:
        _absorb_lights_value(format(node, "09b"), flags)


def _normalise_light_token(value: str) -> str:
    return value.lower().replace("_", "").replace("-", "").replace(" ", "")


def _find_bsm_light_candidate_paths(node, path: tuple[str, ...] = ()) -> List[str]:
    paths: List[str] = []
    if isinstance(node, dict):
        for key, sub in node.items():
            key_text = str(key)
            lower_key = key_text.lower()
            next_path = path + (key_text,)
            if any(token in lower_key for token in LIGHT_HINT_TOKENS):
                paths.append(".".join(next_path))
            paths.extend(_find_bsm_light_candidate_paths(sub, next_path))
    elif isinstance(node, list):
        for index, item in enumerate(node):
            paths.extend(_find_bsm_light_candidate_paths(item, path + (f"[{index}]",)))
    return paths


def _is_crosswalk_lane(lane_raw: dict) -> bool:
    """Return True if the MAP lane has laneType=crosswalk (or pedestrian)."""
    attrs = lane_raw.get("laneAttributes", {})
    if not isinstance(attrs, dict):
        return False
    lane_type = attrs.get("laneType")
    if isinstance(lane_type, dict):
        return any("crosswalk" in k.lower() or "pedestrian" in k.lower() for k in lane_type)
    if isinstance(lane_type, str):
        return "crosswalk" in lane_type.lower() or "pedestrian" in lane_type.lower()
    return False


def _maneuver_right_allowed(connecting_lane: dict) -> Optional[bool]:
    if not isinstance(connecting_lane, dict):
        return None
    maneuver = connecting_lane.get("maneuver")
    if maneuver is None:
        return None
    if isinstance(maneuver, dict):
        for key, val in maneuver.items():
            if isinstance(key, str) and "right" in key.lower() and isinstance(val, bool) and val:
                return True
        return False
    if isinstance(maneuver, list):
        return any(isinstance(item, str) and "right" in item.lower() for item in maneuver)
    if isinstance(maneuver, str):
        # Bit string; bit index 4 (maneuverRightAllowed) per j2735 AllowedManeuvers.
        clean = maneuver.strip()
        if clean and all(c in "01" for c in clean):
            return len(clean) > 4 and clean[4] == "1"
        return "right" in clean.lower()
    return None


# ---------- domain types ----------


@dataclass
class EgoState:
    last_update_ns: int = 0
    lat: float = 0.0
    lon: float = 0.0
    heading_deg: Optional[float] = None
    speed_mps: float = 0.0
    right_turn_signal: Optional[bool] = None  # None == unknown
    left_turn_signal: Optional[bool] = None


@dataclass
class RemoteVehicle:
    last_update_ns: int = 0
    lat: float = 0.0
    lon: float = 0.0
    heading_deg: Optional[float] = None
    speed_mps: float = 0.0


@dataclass
class VruTrack:
    last_update_ns: int = 0
    lat: float = 0.0
    lon: float = 0.0
    heading_deg: Optional[float] = None
    speed_mps: float = 0.0
    user_type: str = "unknown"


@dataclass
class LaneInfo:
    lane_id: int
    points_latlon: List[Tuple[float, float]] = field(default_factory=list)
    signal_group: Optional[int] = None
    right_turn_allowed: Optional[bool] = None  # None == unknown
    is_crosswalk: bool = False


@dataclass
class IntersectionMap:
    region: int
    intersection_id: int
    ref_lat: float
    ref_lon: float
    lanes: List[LaneInfo] = field(default_factory=list)


@dataclass
class IntersectionSpat:
    last_update_ns: int = 0
    signal_group_state: Dict[int, str] = field(default_factory=dict)


@dataclass
class HazardAssessment:
    object_id: str
    object_class: str
    severity: str  # "warning" | "caution"
    reason: str
    distance_m: float
    ttc_sec: Optional[float] = None
    lat: float = 0.0
    lon: float = 0.0


# ---------- core node ----------


class V2XRtorNode(Node):
    def __init__(self) -> None:
        super().__init__("v2x_rtor_node")

        self.inbound_topic = self.declare_parameter("inbound_topic", "/comms/inbound_binary_msg").value
        self.alerts_topic = self.declare_parameter("alerts_topic", "/v2x/rtor_alerts").value
        self.markers_topic = self.declare_parameter("markers_topic", "/v2x/rtor_markers").value
        self.overlay_topic = self.declare_parameter("overlay_topic", "/v2x/rtor_overlay_text").value
        self.vru_stats_overlay_topic = self.declare_parameter(
            "vru_stats_overlay_topic", "/v2x/rtor_vru_overlay_text"
        ).value
        self.frame_id = self.declare_parameter("frame_id", "world").value

        self.obu_reference_bsm_id = normalize_id(
            self.declare_parameter("obu_reference_bsm_id", "e153df70").value
        )
        self.require_right_turn_signal = bool(
            self.declare_parameter("require_right_turn_signal", False).value
        )
        self.allow_alerts_without_map_right_turn = bool(
            self.declare_parameter("allow_alerts_without_map_right_turn", True).value
        )
        self.intersection_radius_m = float(
            self.declare_parameter("intersection_radius_m", 80.0).value
        )
        self.lane_match_max_distance_m = float(
            self.declare_parameter("lane_match_max_distance_m", 4.5).value
        )
        self.vehicle_warning_distance_m = float(
            self.declare_parameter("vehicle_warning_distance_m", 12.0).value
        )
        self.vehicle_caution_distance_m = float(
            self.declare_parameter("vehicle_caution_distance_m", 30.0).value
        )
        self.vehicle_warning_ttc_sec = float(
            self.declare_parameter("vehicle_warning_ttc_sec", 2.5).value
        )
        self.vehicle_caution_ttc_sec = float(
            self.declare_parameter("vehicle_caution_ttc_sec", 5.0).value
        )
        self.vru_warning_distance_m = float(
            self.declare_parameter("vru_warning_distance_m", 2.0).value
        )
        self.vru_caution_distance_m = float(
            self.declare_parameter("vru_caution_distance_m", 10.0).value
        )
        self.heading_conflict_min_deg = float(
            self.declare_parameter("heading_conflict_min_deg", 65.0).value
        )
        self.remote_track_timeout_sec = float(
            self.declare_parameter("remote_track_timeout_sec", 2.5).value
        )
        self.spat_timeout_sec = float(
            self.declare_parameter("spat_timeout_sec", 3.0).value
        )
        self.evaluator_rate_hz = float(
            self.declare_parameter("evaluator_rate_hz", 10.0).value
        )
        self.dedupe_window_sec = float(
            self.declare_parameter("dedupe_window_sec", 1.0).value
        )
        self.enable_deep_scan = bool(self.declare_parameter("enable_deep_scan", True).value)
        self.log_unknown_lights = bool(
            self.declare_parameter("log_unknown_lights", True).value
        )
        self.dbw_actuators_topic = self.declare_parameter(
            "dbw_actuators_topic", "/raptor_dbw_interface/other_actuators_report"
        ).value
        self.log_ego_partii_once = bool(
            self.declare_parameter("log_ego_partii_once", False).value
        )
        self.log_ego_partii_max_chars = int(
            self.declare_parameter("log_ego_partii_max_chars", 6000).value
        )
        self.debug_status_enable = bool(
            self.declare_parameter("debug_status_enable", True).value
        )
        self.debug_status_period_sec = float(
            self.declare_parameter("debug_status_period_sec", 1.0).value
        )
        self.debug_turn_signal_changes = bool(
            self.declare_parameter("debug_turn_signal_changes", True).value
        )
        self.debug_rx_counters_enable = bool(
            self.declare_parameter("debug_rx_counters_enable", True).value
        )
        self.debug_rx_counter_period_sec = float(
            self.declare_parameter("debug_rx_counter_period_sec", 5.0).value
        )
        self.debug_lane_match_enable = bool(
            self.declare_parameter("debug_lane_match_enable", True).value
        )
        self.debug_lane_match_period_sec = float(
            self.declare_parameter("debug_lane_match_period_sec", 2.0).value
        )
        self.turn_signal_latch_sec = float(
            self.declare_parameter("turn_signal_latch_sec", 1.2).value
        )
        self.enable_map_cache = bool(
            self.declare_parameter("enable_map_cache", True).value
        )
        self.map_cache_file = str(
            self.declare_parameter("map_cache_file", "/tmp/v2x_rtor_map_cache.json").value
        )

        try:
            j2735 = _try_load_j2735_decoder_module()
        except ImportError:
            self.get_logger().error(
                "Missing 'j2735_202409' Python decoder module. Install with: "
                "pip3 install https://raw.githubusercontent.com/usdot-fhwa-stol/"
                "j2735decoder/develop/wheels/j2735_202409-0.1.0-py3-none-any.whl"
            )
            raise
        self._message_frame = j2735.MessageFrame.MessageFrame

        self._ego = EgoState()
        self._remote_vehicles: Dict[str, RemoteVehicle] = {}
        self._vrus: Dict[str, VruTrack] = {}
        self._maps: Dict[str, IntersectionMap] = {}
        self._spats: Dict[str, IntersectionSpat] = {}
        self._last_emitted_signature: Dict[str, Tuple[str, int]] = {}
        self._lights_logged_once = False
        self._ego_partii_logged_once = False
        self._dbw_turn_signal_available = False
        self._last_dbw_turn_signal_state: Optional[int] = None
        self._last_right_signal_on_ns = 0
        self._last_debug_status_ns = 0
        self._last_rx_counter_log_ns = 0
        self._last_lane_debug_log_ns = 0
        self._last_lane_allowance_status: Optional[Tuple[str, int, Optional[bool]]] = None
        self._rx_bsm_count = 0
        self._rx_sdsm_count = 0
        self._rx_psm_count = 0
        self._rx_map_count = 0
        self._rx_spat_count = 0
        self._rx_other_count = 0
        self._rx_decode_fail_count = 0

        if self.enable_map_cache:
            self._load_map_cache()

        self._sub = self.create_subscription(ByteArray, self.inbound_topic, self._on_inbound, 200)
        self._dbw_sub = self.create_subscription(
            OtherActuatorsReport, self.dbw_actuators_topic, self._on_dbw_actuators, 10
        )
        self._alert_pub = self.create_publisher(String, self.alerts_topic, 20)
        self._marker_pub = self.create_publisher(MarkerArray, self.markers_topic, 10)
        self._overlay_pub = (
            self.create_publisher(OverlayText, self.overlay_topic, 10)
            if OVERLAY_MSG_AVAILABLE
            else None
        )
        self._vru_overlay_pub = (
            self.create_publisher(OverlayText, self.vru_stats_overlay_topic, 10)
            if OVERLAY_MSG_AVAILABLE
            else None
        )

        evaluator_period = max(0.05, 1.0 / max(1.0, self.evaluator_rate_hz))
        self._timer = self.create_timer(evaluator_period, self._evaluate)

        self.get_logger().info(
            f"v2x_rtor_node ready — inbound={self.inbound_topic}, "
            f"obu_id={self.obu_reference_bsm_id}, "
            f"require_right_turn_signal={self.require_right_turn_signal}, "
            f"allow_alerts_without_map_right_turn={self.allow_alerts_without_map_right_turn}, "
            f"overlay={'enabled' if OVERLAY_MSG_AVAILABLE else 'disabled (no msg pkg)'}"
        )

    # --- inbound binary handler ---

    def _on_inbound(self, msg: ByteArray) -> None:
        payload = bytes(msg.content)
        decoded = self._decode_payload(payload)
        if decoded is None:
            self._rx_decode_fail_count += 1
            self._maybe_log_rx_counters()
            return

        driver_type = (msg.message_type or "").strip().upper()
        msg_id_field = decoded.get("messageId")
        value = decoded.get("value")
        if not isinstance(value, dict):
            self._rx_other_count += 1
            self._maybe_log_rx_counters()
            return

        msg_kind = self._classify_driver_type(driver_type)
        if msg_kind == "other":
            msg_kind = self._classify_decoded(msg_id_field, value)
        elif msg_kind == "psm":
            # Driver message labels can be ambiguous; verify payload shape before classifying as VRU.
            structural_kind = self._classify_decoded(msg_id_field, value)
            if structural_kind in {"bsm", "sdsm"}:
                self.get_logger().debug(
                    "PSM driver_type overridden by structure: "
                    f"msg_id={msg_id_field} psm->{structural_kind}"
                )
                msg_kind = structural_kind

        self.get_logger().debug(f"Message routing: driver_type={driver_type} msg_id={msg_id_field} -> kind={msg_kind}")

        if msg_kind == "bsm":
            self._rx_bsm_count += 1
            self._handle_bsm(value)
        elif msg_kind == "sdsm":
            self._rx_sdsm_count += 1
        elif msg_kind == "psm":
            self._rx_psm_count += 1
            self._handle_psm(value)
        elif msg_kind == "map":
            self._rx_map_count += 1
            self._handle_map(value)
        elif msg_kind == "spat":
            self._rx_spat_count += 1
            self._handle_spat(value)
        else:
            self._rx_other_count += 1

        self._maybe_log_rx_counters()

    def _classify_driver_type(self, driver_type: str) -> str:
        if not driver_type:
            return "other"

        # Driver type labels vary by source; normalize to alphanumeric for robust matching.
        norm = "".join(ch for ch in driver_type.upper() if ch.isalnum())

        if norm in {"MAP", "ROADGEOMETRYANDATTRIBUTES", "MAPDATA"}:
            return "map"
        if norm in {"SPAT", "SIGNALPHASEANDTIMINGMESSAGE"}:
            return "spat"
        if norm in {"BSM", "BASICSAFETYMESSAGE"}:
            return "bsm"
        if norm in {"PSM", "PERSONALSAFETYMESSAGE"}:
            return "psm"
        if norm in {"SDSM", "SENSORDATASHARINGMESSAGE"}:
            return "sdsm"
        return "other"

    def _maybe_log_rx_counters(self) -> None:
        if not self.debug_rx_counters_enable:
            return
        now_ns = self.get_clock().now().nanoseconds
        period_ns = int(max(0.5, self.debug_rx_counter_period_sec) * 1e9)
        if now_ns - self._last_rx_counter_log_ns < period_ns:
            return
        self._last_rx_counter_log_ns = now_ns
        self.get_logger().info(
            "RTOR rx counters: "
            f"bsm={self._rx_bsm_count} "
            f"sdsm={self._rx_sdsm_count} "
            f"spat={self._rx_spat_count} "
            f"map={self._rx_map_count} "
            f"psm={self._rx_psm_count} "
            f"other={self._rx_other_count} "
            f"decode_fail={self._rx_decode_fail_count}"
        )

    def _on_dbw_actuators(self, msg: OtherActuatorsReport) -> None:
        self._dbw_turn_signal_available = True
        turn_signal_state = msg.turn_signal_state.value
        now_ns = self.get_clock().now().nanoseconds
        if self.debug_turn_signal_changes and turn_signal_state != self._last_dbw_turn_signal_state:
            self.get_logger().info(
                f"DBW turn signal changed: raw={turn_signal_state}"
            )
            self._last_dbw_turn_signal_state = turn_signal_state
        right_raw = turn_signal_state in (TurnSignal.RIGHT, TurnSignal.HAZARDS)
        left_raw = turn_signal_state in (TurnSignal.LEFT, TurnSignal.HAZARDS)

        if right_raw:
            self._last_right_signal_on_ns = now_ns

        self._ego.right_turn_signal = right_raw or self._is_right_turn_latched(now_ns)
        self._ego.left_turn_signal = left_raw

    def _is_right_turn_latched(self, now_ns: Optional[int] = None) -> bool:
        if self.turn_signal_latch_sec <= 0.0:
            return False
        if self._last_right_signal_on_ns <= 0:
            return False
        if now_ns is None:
            now_ns = self.get_clock().now().nanoseconds
        return now_ns - self._last_right_signal_on_ns <= int(self.turn_signal_latch_sec * 1e9)

    def _decode_payload(self, payload: bytes) -> Optional[dict]:
        for candidate in extract_framed_candidates(payload):
            decoded = try_decode(candidate, self._message_frame)
            if decoded is not None:
                return decoded
        if self.enable_deep_scan:
            return deep_scan_for_decode(payload, self._message_frame)
        return None

    def _classify_decoded(self, msg_id_field, value: dict) -> str:
        if isinstance(msg_id_field, int) and msg_id_field in SDSM_MESSAGE_IDS:
            self.get_logger().debug(f"Classified as SDSM (messageId={msg_id_field})")
            return "sdsm"
        if isinstance(value, dict):
            if "coreData" in value and isinstance(value.get("coreData"), dict):
                self.get_logger().debug("Classified as BSM (has coreData)")
                return "bsm"
            if "intersections" in value:
                states = None
                for inter in value.get("intersections", []) or []:
                    if isinstance(inter, dict) and "states" in inter:
                        states = inter["states"]
                        break
                result = "spat" if states is not None else "map"
                self.get_logger().debug(f"Classified as {result} (has intersections)")
                return result
            if "objects" in value and "refPos" in value:
                self.get_logger().debug("Classified as SDSM (has objects + refPos)")
                return "sdsm"
            if "basicType" in value or "pathHistory" in value or value.get("id") and "secMark" in value:
                self.get_logger().debug("Classified as PSM (has basicType/pathHistory/secMark)")
                return "psm"
        self.get_logger().debug("Classified as OTHER")
        return "other"

    # --- per-message handlers ---

    def _handle_bsm(self, value: dict) -> None:
        core = value.get("coreData", {})
        latlon = _read_lat_lon(core)
        if latlon is None:
            return
        lat, lon = latlon
        speed = _read_int(core, "speed", scale=0.02, sentinel=8191) or 0.0
        heading = _read_int(core, "heading", scale=0.0125)

        bsm_id = normalize_id(core.get("id", "unknown"))
        now_ns = self.get_clock().now().nanoseconds

        if bsm_id == self.obu_reference_bsm_id:
            if self.log_ego_partii_once and not self._ego_partii_logged_once:
                partii = value.get("partII", [])
                try:
                    partii_dump = json.dumps(partii, indent=2, sort_keys=True, default=str)
                except Exception:
                    partii_dump = str(partii)
                if self.log_ego_partii_max_chars > 0 and len(partii_dump) > self.log_ego_partii_max_chars:
                    partii_dump = partii_dump[: self.log_ego_partii_max_chars] + "...<truncated>"
                self.get_logger().info(f"Ego BSM partII dump: {partii_dump}")
                self._ego_partii_logged_once = True

            flags = _extract_bsm_lights_flags(value)
            if (
                not self._dbw_turn_signal_available
                and not flags
                and self.log_unknown_lights
                and not self._lights_logged_once
            ):
                candidate_paths = _find_bsm_light_candidate_paths(value.get("partII", []))
                self.get_logger().warn(
                    "Could not extract turn-signal flags from ego BSM partII; "
                    "set require_right_turn_signal=False to bypass the gate. "
                    f"Top-level BSM keys: {list(value.keys())}; "
                    f"partII candidate paths: {candidate_paths[:8]}"
                )
                self._lights_logged_once = True
            self._ego.last_update_ns = now_ns
            self._ego.lat = lat
            self._ego.lon = lon
            self._ego.heading_deg = heading
            self._ego.speed_mps = speed
            if not self._dbw_turn_signal_available:
                right_raw = flags.get("right_turn") if flags else None
                if right_raw is True:
                    self._last_right_signal_on_ns = now_ns
                    self._ego.right_turn_signal = True
                elif self._is_right_turn_latched(now_ns):
                    self._ego.right_turn_signal = True
                else:
                    self._ego.right_turn_signal = right_raw
                self._ego.left_turn_signal = flags.get("left_turn") if flags else None
            return

        track = self._remote_vehicles.setdefault(bsm_id, RemoteVehicle())
        track.last_update_ns = now_ns
        track.lat = lat
        track.lon = lon
        track.heading_deg = heading
        track.speed_mps = speed

    def _handle_psm(self, value: dict) -> None:
        latlon = _read_lat_lon(value.get("position", {}) if isinstance(value, dict) else {})
        if latlon is None:
            latlon = _read_lat_lon(value.get("coreData", {}) if isinstance(value, dict) else {})
        if latlon is None:
            return
        lat, lon = latlon

        speed = _read_int(value, "speed", scale=0.02, sentinel=8191) or 0.0
        if speed == 0.0:
            speed = _read_int(value.get("coreData", {}), "speed", scale=0.02, sentinel=8191) or 0.0
        heading = _read_int(value, "heading", scale=0.0125)
        if heading is None:
            heading = _read_int(value.get("coreData", {}), "heading", scale=0.0125)

        user_type = "unknown"
        bt = value.get("basicType") if isinstance(value, dict) else None
        if isinstance(bt, str):
            user_type = bt
        elif isinstance(bt, dict):
            for key in ("value", "type", "name"):
                cand = bt.get(key)
                if isinstance(cand, str):
                    user_type = cand
                    break

        psm_id = normalize_id(value.get("id", value.get("coreData", {}).get("id", "unknown")))
        self.get_logger().debug(f"PSM/VRU received: id={psm_id} lat={lat:.7f} lon={lon:.7f} type={user_type} speed={speed:.2f}")
        
        track = self._vrus.setdefault(psm_id, VruTrack())
        track.last_update_ns = self.get_clock().now().nanoseconds
        track.lat = lat
        track.lon = lon
        track.heading_deg = heading
        track.speed_mps = speed
        track.user_type = user_type

    def _handle_map(self, value: dict) -> None:
        intersections = value.get("intersections")
        if not isinstance(intersections, list):
            return
        map_updated = False
        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            inter_id = inter.get("id", {})
            if not isinstance(inter_id, dict):
                continue
            ref_latlon = _read_lat_lon(inter.get("refPoint", {}))
            if ref_latlon is None:
                continue
            ref_lat, ref_lon = ref_latlon
            region = inter_id.get("region", 0) if isinstance(inter_id.get("region"), int) else 0
            intersection_id = inter_id.get("id", 0) if isinstance(inter_id.get("id"), int) else 0
            key = f"{region}:{intersection_id}"

            lanes: List[LaneInfo] = []
            for lane_raw in inter.get("laneSet", []) or []:
                if not isinstance(lane_raw, dict):
                    continue
                lane_id = lane_raw.get("laneID")
                if not isinstance(lane_id, int):
                    continue
                points = self._lane_points_latlon(lane_raw, ref_lat, ref_lon)

                signal_group: Optional[int] = None
                right_turn: Optional[bool] = None
                for connection in lane_raw.get("connectsTo", []) or []:
                    if not isinstance(connection, dict):
                        continue
                    if signal_group is None and isinstance(connection.get("signalGroup"), int):
                        signal_group = connection["signalGroup"]
                    cl = connection.get("connectingLane")
                    if isinstance(cl, dict):
                        man = _maneuver_right_allowed(cl)
                        if man is True:
                            right_turn = True
                        elif right_turn is None and man is False:
                            right_turn = False
                is_crosswalk = _is_crosswalk_lane(lane_raw)
                lanes.append(LaneInfo(lane_id=lane_id, points_latlon=points,
                                      signal_group=signal_group, right_turn_allowed=right_turn,
                                      is_crosswalk=is_crosswalk))

            self._maps[key] = IntersectionMap(
                region=region,
                intersection_id=intersection_id,
                ref_lat=ref_lat,
                ref_lon=ref_lon,
                lanes=lanes,
            )
            map_updated = True

        if map_updated and self.enable_map_cache:
            self._persist_map_cache()

    def _persist_map_cache(self) -> None:
        entries = []
        for inter in self._maps.values():
            lanes = []
            for lane in inter.lanes:
                lanes.append({
                    "lane_id": lane.lane_id,
                    "points_latlon": lane.points_latlon,
                    "signal_group": lane.signal_group,
                    "right_turn_allowed": lane.right_turn_allowed,
                    "is_crosswalk": lane.is_crosswalk,
                })
            entries.append({
                "region": inter.region,
                "intersection_id": inter.intersection_id,
                "ref_lat": inter.ref_lat,
                "ref_lon": inter.ref_lon,
                "lanes": lanes,
            })

        payload = {
            "saved_at_unix_sec": time.time(),
            "intersections": entries,
        }

        try:
            cache_path = Path(self.map_cache_file)
            cache_path.parent.mkdir(parents=True, exist_ok=True)
            cache_path.write_text(json.dumps(payload), encoding="utf-8")
        except Exception as exc:
            self.get_logger().warn(f"Failed to persist MAP cache to {self.map_cache_file}: {exc}")

    def _load_map_cache(self) -> None:
        cache_path = Path(self.map_cache_file)
        if not cache_path.is_file():
            return

        try:
            raw = json.loads(cache_path.read_text(encoding="utf-8"))
        except Exception as exc:
            self.get_logger().warn(f"Failed to read MAP cache {self.map_cache_file}: {exc}")
            return

        intersections = raw.get("intersections")
        if not isinstance(intersections, list):
            return

        loaded = 0
        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            region = inter.get("region")
            intersection_id = inter.get("intersection_id")
            ref_lat = inter.get("ref_lat")
            ref_lon = inter.get("ref_lon")
            if not isinstance(region, int) or not isinstance(intersection_id, int):
                continue
            if not isinstance(ref_lat, (int, float)) or not isinstance(ref_lon, (int, float)):
                continue

            lanes_raw = inter.get("lanes", [])
            lanes: List[LaneInfo] = []
            if isinstance(lanes_raw, list):
                for lane_raw in lanes_raw:
                    if not isinstance(lane_raw, dict):
                        continue
                    lane_id = lane_raw.get("lane_id")
                    if not isinstance(lane_id, int):
                        continue

                    points_latlon: List[Tuple[float, float]] = []
                    points_raw = lane_raw.get("points_latlon", [])
                    if isinstance(points_raw, list):
                        for point in points_raw:
                            if (
                                isinstance(point, (list, tuple))
                                and len(point) == 2
                                and isinstance(point[0], (int, float))
                                and isinstance(point[1], (int, float))
                            ):
                                points_latlon.append((float(point[0]), float(point[1])))

                    signal_group = lane_raw.get("signal_group")
                    if not isinstance(signal_group, int):
                        signal_group = None

                    right_turn_allowed = lane_raw.get("right_turn_allowed")
                    if not isinstance(right_turn_allowed, bool):
                        right_turn_allowed = None

                    is_crosswalk = lane_raw.get("is_crosswalk")
                    if not isinstance(is_crosswalk, bool):
                        is_crosswalk = False

                    lanes.append(
                        LaneInfo(
                            lane_id=lane_id,
                            points_latlon=points_latlon,
                            signal_group=signal_group,
                            right_turn_allowed=right_turn_allowed,
                            is_crosswalk=is_crosswalk,
                        )
                    )

            key = f"{region}:{intersection_id}"
            self._maps[key] = IntersectionMap(
                region=region,
                intersection_id=intersection_id,
                ref_lat=float(ref_lat),
                ref_lon=float(ref_lon),
                lanes=lanes,
            )
            loaded += 1

        if loaded > 0:
            saved_at = raw.get("saved_at_unix_sec")
            age_info = "unknown"
            if isinstance(saved_at, (int, float)):
                age_info = f"{max(0.0, time.time() - float(saved_at)):.1f}s"
            self.get_logger().info(
                f"Loaded {loaded} cached MAP intersection(s) from {self.map_cache_file} (age={age_info})"
            )

    def _lane_points_latlon(self, lane: dict, ref_lat: float, ref_lon: float) -> List[Tuple[float, float]]:
        node_list = lane.get("nodeList", {})
        if not isinstance(node_list, dict):
            return []
        nodes = node_list.get("nodes", [])
        if not isinstance(nodes, list):
            return []

        points: List[Tuple[float, float]] = []
        ref_x = 0.0
        ref_y = 0.0
        cos_ref = math.cos(math.radians(ref_lat))
        cur_x, cur_y = ref_x, ref_y

        for node in nodes:
            if not isinstance(node, dict):
                continue
            delta = node.get("delta", {})
            if not isinstance(delta, dict):
                continue

            node_latlon = delta.get("node-LatLon")
            if isinstance(node_latlon, dict):
                latlon = _read_lat_lon(node_latlon)
                if latlon is not None:
                    nlat, nlon = latlon
                    cur_x = math.radians(nlon - ref_lon) * cos_ref * EARTH_RADIUS_M
                    cur_y = math.radians(nlat - ref_lat) * EARTH_RADIUS_M
            else:
                applied = False
                for key, sub in delta.items():
                    if not isinstance(sub, dict):
                        continue
                    x_val = sub.get("x")
                    y_val = sub.get("y")
                    if isinstance(x_val, int) and isinstance(y_val, int):
                        # j2735 default node delta is centimetres.
                        cur_x += x_val * 0.01
                        cur_y += y_val * 0.01
                        applied = True
                        break
                if not applied:
                    continue

            # Convert local XY back to lat/lon for storage.
            nlat = ref_lat + math.degrees(cur_y / EARTH_RADIUS_M)
            nlon = ref_lon + math.degrees(cur_x / (cos_ref * EARTH_RADIUS_M))
            points.append((nlat, nlon))

        return points

    def _handle_spat(self, value: dict) -> None:
        intersections = value.get("intersections")
        if not isinstance(intersections, list):
            return
        now_ns = self.get_clock().now().nanoseconds
        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            inter_id = inter.get("id", {})
            if not isinstance(inter_id, dict):
                continue
            region = inter_id.get("region", 0) if isinstance(inter_id.get("region"), int) else 0
            intersection_id = inter_id.get("id", 0) if isinstance(inter_id.get("id"), int) else 0
            key = f"{region}:{intersection_id}"

            sg_state: Dict[int, str] = {}
            for state in inter.get("states", []) or []:
                if not isinstance(state, dict):
                    continue
                sg = state.get("signalGroup")
                if not isinstance(sg, int):
                    continue
                sts = state.get("state-time-speed", [])
                if not isinstance(sts, list) or not sts or not isinstance(sts[0], dict):
                    continue
                event_state = sts[0].get("eventState")
                if isinstance(event_state, str):
                    sg_state[sg] = event_state

            self._spats[key] = IntersectionSpat(last_update_ns=now_ns, signal_group_state=sg_state)

    # --- evaluator ---

    def _maybe_log_debug_status(
        self,
        stage: str,
        intersection: Optional[IntersectionMap] = None,
        lane: Optional[LaneInfo] = None,
        is_red: Optional[bool] = None,
        hazards_count: int = 0,
    ) -> None:
        if not self.debug_status_enable:
            return
        now_ns = self.get_clock().now().nanoseconds
        period_ns = int(max(0.1, self.debug_status_period_sec) * 1e9)
        if now_ns - self._last_debug_status_ns < period_ns:
            return
        self._last_debug_status_ns = now_ns

        ego_age_sec = 0.0
        if self._ego.last_update_ns > 0:
            ego_age_sec = max(0.0, (now_ns - self._ego.last_update_ns) / 1e9)

        intersection_key = "none"
        if intersection is not None:
            intersection_key = f"{intersection.region}:{intersection.intersection_id}"

        lane_id = lane.lane_id if lane is not None else None
        signal_group = lane.signal_group if lane is not None else None

        self.get_logger().info(
            "RTOR debug: "
            f"stage={stage} "
            f"dbw_turn_signal_available={self._dbw_turn_signal_available} "
            f"right_turn_signal={self._ego.right_turn_signal} "
            f"left_turn_signal={self._ego.left_turn_signal} "
            f"require_right_turn_signal={self.require_right_turn_signal} "
            f"allow_alerts_without_map_right_turn={self.allow_alerts_without_map_right_turn} "
            f"ego_age_sec={ego_age_sec:.2f} "
            f"intersection={intersection_key} "
            f"lane_id={lane_id} "
            f"signal_group={signal_group} "
            f"is_red={is_red} "
            f"hazards={hazards_count}"
        )

    def _evaluate(self) -> None:
        self._prune_stale_tracks()

        if self._ego.last_update_ns == 0:
            self._maybe_log_debug_status(stage="waiting_for_ego")
            return

        intersection = self._nearest_intersection()
        if intersection is None:
            self._maybe_log_debug_status(stage="no_intersection")
            return

        vru_vicinity, vru_caution, vru_warning = self._count_psm_vru_stats(intersection)
        self._publish_vru_stats_overlay(vru_vicinity, vru_caution, vru_warning)

        ego_lane = self._match_ego_lane(intersection)
        if ego_lane is None:
            self._maybe_log_debug_status(stage="no_lane", intersection=intersection)
            return

        self._publish_lane_allowance_status(intersection, ego_lane)

        if ego_lane.right_turn_allowed is False and not self.allow_alerts_without_map_right_turn:
            self._maybe_log_debug_status(stage="lane_not_right_turn", intersection=intersection, lane=ego_lane)
            return  # known not a right-turn lane
        # right_turn_allowed == None falls through; we treat unknown-maneuver lanes as candidates.

        if self.require_right_turn_signal:
            if self._ego.right_turn_signal is None:
                self._maybe_log_debug_status(stage="turn_signal_unknown", intersection=intersection, lane=ego_lane)
                return  # unknown -> can't gate
            if not self._ego.right_turn_signal:
                self._maybe_log_debug_status(stage="right_turn_signal_off", intersection=intersection, lane=ego_lane)
                return
            if self._ego.left_turn_signal:
                self._maybe_log_debug_status(stage="left_turn_signal_on", intersection=intersection, lane=ego_lane)
                return

        is_red = self._is_signal_red(intersection, ego_lane)
        if not is_red:
            self._maybe_log_debug_status(stage="signal_not_red", intersection=intersection, lane=ego_lane, is_red=False)
            return

        hazards = self._collect_hazards(intersection, ego_lane)
        if not hazards:
            self._publish_clear()
            self._maybe_log_debug_status(stage="clear", intersection=intersection, lane=ego_lane, is_red=True, hazards_count=0)
            return

        self._publish_alert(intersection, ego_lane, hazards)
        self._maybe_log_debug_status(
            stage="alert",
            intersection=intersection,
            lane=ego_lane,
            is_red=True,
            hazards_count=len(hazards),
        )

    def _publish_lane_allowance_status(self, intersection: IntersectionMap, lane: LaneInfo) -> None:
        inter_key = f"{intersection.region}:{intersection.intersection_id}"
        state = (inter_key, lane.lane_id, lane.right_turn_allowed)
        if state == self._last_lane_allowance_status:
            return
        self._last_lane_allowance_status = state

        allowance = "unknown"
        if lane.right_turn_allowed is True:
            allowance = "allowed"
        elif lane.right_turn_allowed is False:
            allowance = "not_allowed"

        payload = {
            "source": "v2x_rtor_node",
            "stamp": self._iso_now(),
            "type": "lane_status",
            "intersection": inter_key,
            "lane_id": lane.lane_id,
            "signal_group": lane.signal_group,
            "right_turn_allowed": lane.right_turn_allowed,
            "right_turn_allowance": allowance,
            "allow_alerts_without_map_right_turn": self.allow_alerts_without_map_right_turn,
            "right_turn_signal": self._ego.right_turn_signal,
            "require_right_turn_signal": self.require_right_turn_signal,
        }
        self._alert_pub.publish(String(data=json.dumps(payload)))
        self._publish_lane_status_overlay(inter_key, lane.lane_id, lane.signal_group, allowance)

    def _count_psm_vru_stats(self, intersection: IntersectionMap) -> Tuple[int, int, int]:
        """Return (vicinity_count, caution_count, warning_count) for active VRU tracks.

        vicinity_count — VRUs within intersection_radius_m of the intersection ref point.
        caution_count  — VRUs within vru_caution_distance_m of the nearest crosswalk polyline.
        warning_count  — VRUs within vru_warning_distance_m of the nearest crosswalk polyline
                         (subset of caution; these are considered to be inside the crosswalk).
        Falls back to ego-centric distance when no crosswalk geometry is available.
        """
        crosswalk_lanes = [l for l in intersection.lanes if l.is_crosswalk and l.points_latlon]
        vicinity = 0
        caution = 0
        warning = 0
        for track in self._vrus.values():
            d_inter = latlon_distance_m(
                track.lat, track.lon, intersection.ref_lat, intersection.ref_lon
            )
            if d_inter <= self.intersection_radius_m:
                vicinity += 1
            if crosswalk_lanes:
                d_ref = min(
                    self._point_to_polyline_distance_m(track.lat, track.lon, cw.points_latlon)
                    for cw in crosswalk_lanes
                )
            else:
                d_ref = latlon_distance_m(track.lat, track.lon, self._ego.lat, self._ego.lon)
            if d_ref <= self.vru_warning_distance_m:
                warning += 1
                caution += 1
            elif d_ref <= self.vru_caution_distance_m:
                caution += 1
        return vicinity, caution, warning

    def _publish_vru_stats_overlay(
        self, vicinity_count: int, caution_count: int, warning_count: int
    ) -> None:
        if self._vru_overlay_pub is None or self._vru_overlay_pub.get_subscription_count() == 0:
            return
        msg = OverlayText()
        msg.action = OverlayText.ADD
        msg.width = 560
        msg.height = 48
        if hasattr(msg, "left") and hasattr(msg, "top"):
            msg.left = 10
            msg.top = 440
        else:
            msg.horizontal_alignment = OverlayText.LEFT
            msg.vertical_alignment = OverlayText.TOP
            msg.horizontal_distance = 10
            msg.vertical_distance = 440
        msg.text_size = 15.0
        msg.line_width = 2
        msg.font = "DejaVu Sans Mono"
        msg.bg_color.r = msg.bg_color.g = msg.bg_color.b = 0.0
        msg.bg_color.a = 0.55

        if warning_count > 0:
            # Red: VRU is inside / on the crosswalk
            msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 1.0, 0.2, 0.15, 1.0
            label = f"VRU WARNING: {warning_count} in crosswalk"
        elif caution_count > 0:
            # Amber: VRU is near the crosswalk
            msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 1.0, 0.85, 0.2, 1.0
            label = f"VRU CAUTION: {caution_count} near crosswalk"
        elif vicinity_count > 0:
            # White-blue: VRU in intersection area but not close to crosswalk
            msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 0.7, 0.9, 1.0, 1.0
            label = f"VRU: {vicinity_count} in vicinity"
        else:
            msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 0.6, 0.6, 0.6, 0.8
            label = "VRU: none"

        msg.text = label
        self._vru_overlay_pub.publish(msg)

    def _publish_lane_status_overlay(
        self,
        intersection_key: str,
        lane_id: int,
        signal_group: Optional[int],
        allowance: str,
    ) -> None:
        if self._overlay_pub is None or self._overlay_pub.get_subscription_count() == 0:
            return
        msg = OverlayText()
        msg.action = OverlayText.ADD
        msg.width = 700
        msg.height = 64
        if hasattr(msg, "left") and hasattr(msg, "top"):
            msg.left = 10
            msg.top = 500
        else:
            msg.horizontal_alignment = OverlayText.LEFT
            msg.vertical_alignment = OverlayText.TOP
            msg.horizontal_distance = 10
            msg.vertical_distance = 500
        msg.text_size = 15.0
        msg.line_width = 2
        msg.font = "DejaVu Sans Mono"
        msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 0.9, 0.95, 1.0, 1.0
        msg.bg_color.r = msg.bg_color.g = msg.bg_color.b = 0.0
        msg.bg_color.a = 0.5
        msg.text = (
            f"RTOR LANE: intersection={intersection_key} lane={lane_id} "
            f"sg={signal_group} right_turn={allowance}"
        )
        self._overlay_pub.publish(msg)

    def _prune_stale_tracks(self) -> None:
        now_ns = self.get_clock().now().nanoseconds
        timeout_ns = int(self.remote_track_timeout_sec * 1e9)
        for store in (self._remote_vehicles, self._vrus):
            stale = [k for k, v in store.items() if now_ns - v.last_update_ns > timeout_ns]
            for k in stale:
                del store[k]

    def _nearest_intersection(self) -> Optional[IntersectionMap]:
        best: Optional[IntersectionMap] = None
        best_dist = self.intersection_radius_m
        for inter in self._maps.values():
            d = latlon_distance_m(self._ego.lat, self._ego.lon, inter.ref_lat, inter.ref_lon)
            if d < best_dist:
                best = inter
                best_dist = d
        return best

    def _match_ego_lane(self, intersection: IntersectionMap) -> Optional[LaneInfo]:
        best_lane: Optional[LaneInfo] = None
        best_dist = self.lane_match_max_distance_m
        nearest_lane_id: Optional[int] = None
        nearest_dist = float("inf")
        for lane in intersection.lanes:
            if not lane.points_latlon:
                continue
            d = self._point_to_polyline_distance_m(
                self._ego.lat, self._ego.lon, lane.points_latlon
            )
            if d < nearest_dist:
                nearest_dist = d
                nearest_lane_id = lane.lane_id
            if d < best_dist:
                best_dist = d
                best_lane = lane

        if best_lane is None and self.debug_lane_match_enable:
            self._maybe_log_lane_match_debug(intersection, nearest_lane_id, nearest_dist)
        return best_lane

    def _maybe_log_lane_match_debug(
        self,
        intersection: IntersectionMap,
        nearest_lane_id: Optional[int],
        nearest_dist: float,
    ) -> None:
        now_ns = self.get_clock().now().nanoseconds
        period_ns = int(max(0.2, self.debug_lane_match_period_sec) * 1e9)
        if now_ns - self._last_lane_debug_log_ns < period_ns:
            return
        self._last_lane_debug_log_ns = now_ns

        if nearest_lane_id is None:
            self.get_logger().info(
                "RTOR lane match debug: "
                f"intersection={intersection.region}:{intersection.intersection_id} "
                "no lane geometry points available"
            )
            return

        self.get_logger().info(
            "RTOR lane match debug: "
            f"intersection={intersection.region}:{intersection.intersection_id} "
            f"nearest_lane_id={nearest_lane_id} "
            f"nearest_distance_m={nearest_dist:.2f} "
            f"threshold_m={self.lane_match_max_distance_m:.2f}"
        )

    def _point_to_polyline_distance_m(
        self, lat: float, lon: float, points: List[Tuple[float, float]]
    ) -> float:
        if not points:
            return float("inf")
        if len(points) == 1:
            return latlon_distance_m(lat, lon, points[0][0], points[0][1])

        best = float("inf")
        ref_lat, ref_lon = points[0]
        px, py = latlon_to_local_xy(lat, lon, ref_lat, ref_lon)
        prev_x, prev_y = 0.0, 0.0
        for i, (plat, plon) in enumerate(points[1:], start=1):
            cur_x, cur_y = latlon_to_local_xy(plat, plon, ref_lat, ref_lon)
            dx = cur_x - prev_x
            dy = cur_y - prev_y
            seg_len2 = dx * dx + dy * dy
            if seg_len2 < 1e-6:
                d = math.hypot(px - prev_x, py - prev_y)
            else:
                t = max(0.0, min(1.0, ((px - prev_x) * dx + (py - prev_y) * dy) / seg_len2))
                proj_x = prev_x + t * dx
                proj_y = prev_y + t * dy
                d = math.hypot(px - proj_x, py - proj_y)
            if d < best:
                best = d
            prev_x, prev_y = cur_x, cur_y
        return best

    def _is_signal_red(self, intersection: IntersectionMap, lane: LaneInfo) -> bool:
        if lane.signal_group is None:
            return False  # without a signal group we cannot verify red state
        key = f"{intersection.region}:{intersection.intersection_id}"
        spat = self._spats.get(key)
        if spat is None:
            return False
        now_ns = self.get_clock().now().nanoseconds
        if now_ns - spat.last_update_ns > int(self.spat_timeout_sec * 1e9):
            return False
        state = spat.signal_group_state.get(lane.signal_group)
        return state in RED_EVENT_STATES

    def _collect_hazards(
        self, intersection: IntersectionMap, ego_lane: LaneInfo
    ) -> List[HazardAssessment]:
        hazards: List[HazardAssessment] = []

        # Conflicting lanes: any intersection lane with a signal_group not equal
        # to the ego lane's signal_group, used as proxy for "different phase, may
        # be moving while we're red." Pedestrian crosswalks usually share their
        # own signal-group so VRUs are caught even if ego.signal_group is unknown.
        ego_sg = ego_lane.signal_group

        for vehicle_id, track in self._remote_vehicles.items():
            d_to_intersection = latlon_distance_m(
                track.lat, track.lon, intersection.ref_lat, intersection.ref_lon
            )
            if d_to_intersection > self.intersection_radius_m:
                continue
            d_to_ego = latlon_distance_m(track.lat, track.lon, self._ego.lat, self._ego.lon)
            ttc = self._compute_ttc(track)
            heading_conflict = self._is_heading_conflict(track)
            severity, reason = self._classify_vehicle(d_to_ego, ttc, heading_conflict)
            if severity is None:
                continue
            hazards.append(HazardAssessment(
                object_id=vehicle_id,
                object_class="vehicle",
                severity=severity,
                reason=reason,
                distance_m=d_to_ego,
                ttc_sec=ttc,
                lat=track.lat,
                lon=track.lon,
            ))

        crosswalk_lanes = [l for l in intersection.lanes if l.is_crosswalk and l.points_latlon]

        for vru_id, track in self._vrus.items():
            d_to_intersection = latlon_distance_m(
                track.lat, track.lon, intersection.ref_lat, intersection.ref_lon
            )
            if d_to_intersection > self.intersection_radius_m:
                continue

            # Use distance to nearest crosswalk polyline when MAP has crosswalk lanes;
            # fall back to ego-centric distance if no crosswalk geometry is available.
            if crosswalk_lanes:
                d_ref = min(
                    self._point_to_polyline_distance_m(track.lat, track.lon, cw.points_latlon)
                    for cw in crosswalk_lanes
                )
            else:
                d_ref = latlon_distance_m(track.lat, track.lon, self._ego.lat, self._ego.lon)

            severity = None
            reason = ""
            if d_ref <= self.vru_warning_distance_m:
                severity = "warning"
                reason = "vru_in_crosswalk"
            elif d_ref <= self.vru_caution_distance_m:
                severity = "caution"
                reason = "vru_near_crosswalk"
            if severity is None:
                continue
            object_class = "pedestrian" if "PEDEST" in track.user_type.upper() else "vru"
            hazards.append(HazardAssessment(
                object_id=vru_id,
                object_class=object_class,
                severity=severity,
                reason=reason,
                distance_m=d_ref,
                lat=track.lat,
                lon=track.lon,
            ))

        return hazards

    def _compute_ttc(self, track: RemoteVehicle) -> Optional[float]:
        if self._ego.heading_deg is None or track.heading_deg is None:
            return None
        d = latlon_distance_m(self._ego.lat, self._ego.lon, track.lat, track.lon)
        if d < 0.5:
            return 0.0
        # Closing speed = remote speed projected toward ego minus ego speed projected
        # away. Conservative: assume ego stationary at the stop-line (RTOR scenario).
        bearing_to_ego = self._bearing_deg(track.lat, track.lon, self._ego.lat, self._ego.lon)
        align = math.cos(math.radians(heading_diff_deg(track.heading_deg, bearing_to_ego)))
        closing = max(0.0, track.speed_mps * align)
        if closing < 0.5:
            return None
        return d / closing

    def _bearing_deg(self, lat1: float, lon1: float, lat2: float, lon2: float) -> float:
        cos_mid = math.cos(math.radians(0.5 * (lat1 + lat2)))
        dx = math.radians(lon2 - lon1) * cos_mid
        dy = math.radians(lat2 - lat1)
        return (math.degrees(math.atan2(dx, dy)) + 360.0) % 360.0

    def _is_heading_conflict(self, track: RemoteVehicle) -> bool:
        if self._ego.heading_deg is None or track.heading_deg is None:
            return True  # be conservative — treat unknown heading as a possible conflict
        return heading_diff_deg(track.heading_deg, self._ego.heading_deg) >= self.heading_conflict_min_deg

    def _classify_vehicle(
        self, distance_m: float, ttc: Optional[float], heading_conflict: bool
    ) -> Tuple[Optional[str], str]:
        if (ttc is not None and ttc <= self.vehicle_warning_ttc_sec) \
                or distance_m <= self.vehicle_warning_distance_m:
            return "warning", "vehicle_conflict_ttc" if heading_conflict else "vehicle_conflict_distance"
        if (ttc is not None and ttc <= self.vehicle_caution_ttc_sec) \
                or distance_m <= self.vehicle_caution_distance_m:
            return "caution", "vehicle_conflict_approach" if heading_conflict else "vehicle_conflict_zone"
        return None, ""

    # --- publishing ---

    def _publish_alert(
        self, intersection: IntersectionMap, lane: LaneInfo, hazards: List[HazardAssessment]
    ) -> None:
        top_severity = "warning" if any(h.severity == "warning" for h in hazards) else "caution"

        signature = (top_severity, len(hazards), tuple(sorted(h.object_id for h in hazards)))
        sig_key = f"{intersection.region}:{intersection.intersection_id}:{lane.lane_id}"
        prev = self._last_emitted_signature.get(sig_key)
        now_ns = self.get_clock().now().nanoseconds
        if prev is not None:
            prev_sig, prev_ns = prev
            if prev_sig == repr(signature) and now_ns - prev_ns < int(self.dedupe_window_sec * 1e9):
                return
        self._last_emitted_signature[sig_key] = (repr(signature), now_ns)

        payload = {
            "source": "v2x_rtor_node",
            "stamp": self._iso_now(),
            "severity": top_severity,
            "intersection": f"{intersection.region}:{intersection.intersection_id}",
            "lane_id": lane.lane_id,
            "signal_group": lane.signal_group,
            "ego": {
                "lat": self._ego.lat,
                "lon": self._ego.lon,
                "heading_deg": self._ego.heading_deg,
                "speed_mps": self._ego.speed_mps,
            },
            "hazards": [
                {
                    "object_id": h.object_id,
                    "object_class": h.object_class,
                    "severity": h.severity,
                    "reason": h.reason,
                    "distance_m": round(h.distance_m, 2),
                    "ttc_sec": round(h.ttc_sec, 2) if h.ttc_sec is not None else None,
                    "lat": h.lat,
                    "lon": h.lon,
                }
                for h in hazards
            ],
        }
        self._alert_pub.publish(String(data=json.dumps(payload)))
        self._publish_markers(hazards)
        self._publish_overlay(top_severity, hazards)

    def _publish_clear(self) -> None:
        if self._marker_pub.get_subscription_count() == 0 and (
            self._overlay_pub is None or self._overlay_pub.get_subscription_count() == 0
        ):
            return
        empty = MarkerArray()
        delete = Marker()
        delete.action = Marker.DELETEALL
        delete.header.frame_id = self.frame_id
        empty.markers.append(delete)
        self._marker_pub.publish(empty)
        if self._overlay_pub is not None:
            msg = OverlayText()
            msg.action = OverlayText.DELETE if hasattr(OverlayText, "DELETE") else OverlayText.ADD
            msg.text = ""
            self._overlay_pub.publish(msg)

    def _publish_markers(self, hazards: List[HazardAssessment]) -> None:
        if self._marker_pub.get_subscription_count() == 0:
            return
        if self._ego.lat == 0.0 and self._ego.lon == 0.0:
            return
        ref_lat, ref_lon = self._ego.lat, self._ego.lon
        msg = MarkerArray()
        delete = Marker()
        delete.action = Marker.DELETEALL
        delete.header.frame_id = self.frame_id
        msg.markers.append(delete)
        for idx, hazard in enumerate(hazards):
            x, y = latlon_to_local_xy(hazard.lat, hazard.lon, ref_lat, ref_lon)
            m = Marker()
            m.header.frame_id = self.frame_id
            m.ns = "rtor"
            m.id = idx + 1
            m.type = Marker.CYLINDER
            m.action = Marker.ADD
            m.pose.position.x = x
            m.pose.position.y = y
            m.pose.position.z = 1.0
            m.pose.orientation.w = 1.0
            m.scale.x = 1.6 if hazard.severity == "warning" else 1.2
            m.scale.y = m.scale.x
            m.scale.z = 2.0
            m.color.a = 0.85
            if hazard.severity == "warning":
                m.color.r, m.color.g, m.color.b = 1.0, 0.15, 0.1
            else:
                m.color.r, m.color.g, m.color.b = 1.0, 0.75, 0.1
            m.lifetime.sec = 1
            msg.markers.append(m)
        self._marker_pub.publish(msg)

    def _publish_overlay(self, severity: str, hazards: List[HazardAssessment]) -> None:
        if self._overlay_pub is None or self._overlay_pub.get_subscription_count() == 0:
            return
        msg = OverlayText()
        msg.action = OverlayText.ADD
        msg.width = 600
        msg.height = 60
        if hasattr(msg, "left") and hasattr(msg, "top"):
            msg.left = 10
            msg.top = 560
        else:
            msg.horizontal_alignment = OverlayText.LEFT
            msg.vertical_alignment = OverlayText.TOP
            msg.horizontal_distance = 10
            msg.vertical_distance = 560
        msg.text_size = 16.0
        msg.line_width = 2
        msg.font = "DejaVu Sans Mono"
        if severity == "warning":
            msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 1.0, 0.2, 0.15, 1.0
        else:
            msg.fg_color.r, msg.fg_color.g, msg.fg_color.b, msg.fg_color.a = 1.0, 0.85, 0.2, 1.0
        msg.bg_color.r = msg.bg_color.g = msg.bg_color.b = 0.0
        msg.bg_color.a = 0.55

        head = "RTOR WARN" if severity == "warning" else "RTOR CAUT"
        worst = min(hazards, key=lambda h: h.distance_m)
        msg.text = f"{head}: {worst.object_class} {worst.distance_m:.1f}m ({len(hazards)} hazards)"
        self._overlay_pub.publish(msg)

    def _iso_now(self) -> str:
        return time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())


def main() -> None:
    rclpy.init()
    node = V2XRtorNode()
    try:
        rclpy.spin(node)
    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        # Guard against duplicate shutdown when the ROS context is already down.
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
