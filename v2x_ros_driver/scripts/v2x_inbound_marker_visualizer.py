#!/usr/bin/env python3

import contextlib
import io
import importlib
import json
import math
import sys
from pathlib import Path
from dataclasses import dataclass
from datetime import datetime, timezone
from typing import Any, Dict, List, Optional, Tuple

import rclpy
from carma_driver_msgs.msg import ByteArray
from geometry_msgs.msg import Point
from rclpy.node import Node
from visualization_msgs.msg import Marker, MarkerArray

OVERLAY_MSG_SOURCE = "none"
try:
    from jsk_rviz_plugins.msg import OverlayText  # type: ignore

    OVERLAY_MSG_SOURCE = "jsk_rviz_plugins"
except ImportError:
    try:
        from rviz_2d_overlay_msgs.msg import OverlayText  # type: ignore

        OVERLAY_MSG_SOURCE = "rviz_2d_overlay_msgs"
    except ImportError:
        OverlayText = None


VALID_IDS = {0x12, 0x13, 0x14, 0x1D, 0x1E, 0x1F, 0x20, 0x29}
WGS84_A = 6378137.0
WGS84_F = 1.0 / 298.257223563
WGS84_E2 = WGS84_F * (2.0 - WGS84_F)
WGS84_E_PRIME2 = WGS84_E2 / (1.0 - WGS84_E2)
UTM_K0 = 0.9996


def _try_load_j2735_decoder_module():
    try:
        return importlib.import_module("j2735_202409")
    except ImportError:
        pass

    # Fall back to a nearby workspace virtualenv so ros2 run can work
    # even when the shell did not activate the expected .venv.
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


@dataclass
class BsmTrackPoint:
    lat_deg: float
    lon_deg: float
    speed_mps: float


@dataclass
class PsmTrackPoint:
    lat_deg: float
    lon_deg: float
    speed_mps: float
    heading_deg: Optional[float]
    user_type: str
    last_update_ns: int


@dataclass
class TimTrackPoint:
    text: str
    lat_deg: Optional[float]
    lon_deg: Optional[float]
    radius_m: Optional[float]
    priority: Optional[int]
    frame_type: str
    last_update_ns: int


@dataclass
class SdsmTrackPoint:
    lat_deg: float
    lon_deg: float
    speed_mps: float
    heading_deg: Optional[float]
    obj_type: str
    obj_type_enum: int
    last_update_ns: int


def extract_framed_candidates(data: bytes) -> List[Tuple[bytes, str]]:
    candidates: List[Tuple[bytes, str]] = []

    for idx in range(len(data) - 3):
        if data[idx] != 0x00:
            continue
        msg_id = data[idx + 1]
        msg_len = data[idx + 2]
        if msg_id in VALID_IDS and msg_len > 0:
            end = idx + 3 + msg_len
            if end <= len(data):
                candidates.append((data[idx:end], "zero_prefixed_len"))

    for idx in range(len(data) - 2):
        msg_id = data[idx]
        msg_len = data[idx + 1]
        if msg_id in VALID_IDS and msg_len > 0:
            end = idx + 2 + msg_len
            if end <= len(data):
                candidates.append((data[idx:end], "framed"))

    for msg_id in (b"\x00\x12", b"\x00\x13", b"\x00\x14", b"\x00\x1d", b"\x00\x1e", b"\x00\x1f", b"\x00\x20", b"\x00\x29"):
        idx = data.find(msg_id)
        if idx != -1:
            candidates.append((data[idx:], "prefixed"))

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


def latlon_to_local_xy(lat_deg: float, lon_deg: float, ref_lat_deg: float, ref_lon_deg: float) -> Tuple[float, float]:
    earth_radius_m = 6378137.0
    lat = math.radians(lat_deg)
    lon = math.radians(lon_deg)
    ref_lat = math.radians(ref_lat_deg)
    ref_lon = math.radians(ref_lon_deg)

    x = (lon - ref_lon) * math.cos(ref_lat) * earth_radius_m
    y = (lat - ref_lat) * earth_radius_m
    return x, y


def latlon_to_utm_xy(lat_deg: float, lon_deg: float, zone_override: int = 0) -> Tuple[float, float]:
    # Standard WGS84 UTM projection for metric global XY marker placement.
    lat = max(min(lat_deg, 84.0), -80.0)
    lon = ((lon_deg + 180.0) % 360.0) - 180.0

    if zone_override and 1 <= zone_override <= 60:
        zone = int(zone_override)
    else:
        zone = int((lon + 180.0) / 6.0) + 1

    lat_rad = math.radians(lat)
    lon_rad = math.radians(lon)
    lon0_rad = math.radians((zone - 1) * 6 - 180 + 3)

    sin_lat = math.sin(lat_rad)
    cos_lat = math.cos(lat_rad)
    tan_lat = math.tan(lat_rad)

    n = WGS84_A / math.sqrt(1.0 - WGS84_E2 * sin_lat * sin_lat)
    t = tan_lat * tan_lat
    c = WGS84_E_PRIME2 * cos_lat * cos_lat
    a = cos_lat * (lon_rad - lon0_rad)

    m = WGS84_A * (
        (1.0 - WGS84_E2 / 4.0 - 3.0 * WGS84_E2 * WGS84_E2 / 64.0 - 5.0 * WGS84_E2**3 / 256.0) * lat_rad
        - (3.0 * WGS84_E2 / 8.0 + 3.0 * WGS84_E2 * WGS84_E2 / 32.0 + 45.0 * WGS84_E2**3 / 1024.0)
        * math.sin(2.0 * lat_rad)
        + (15.0 * WGS84_E2 * WGS84_E2 / 256.0 + 45.0 * WGS84_E2**3 / 1024.0) * math.sin(4.0 * lat_rad)
        - (35.0 * WGS84_E2**3 / 3072.0) * math.sin(6.0 * lat_rad)
    )

    easting = UTM_K0 * n * (
        a
        + (1.0 - t + c) * (a**3) / 6.0
        + (5.0 - 18.0 * t + t * t + 72.0 * c - 58.0 * WGS84_E_PRIME2) * (a**5) / 120.0
    ) + 500000.0

    northing = UTM_K0 * (
        m
        + n
        * tan_lat
        * (
            (a * a) / 2.0
            + (5.0 - t + 9.0 * c + 4.0 * c * c) * (a**4) / 24.0
            + (61.0 - 58.0 * t + t * t + 600.0 * c - 330.0 * WGS84_E_PRIME2) * (a**6) / 720.0
        )
    )

    if lat < 0.0:
        northing += 10000000.0

    return easting, northing


def normalize_bsm_id(raw_id) -> str:
    if isinstance(raw_id, list):
        return "".join(f"{int(v) & 0xFF:02x}" for v in raw_id)
    if isinstance(raw_id, str):
        return "".join(ch for ch in raw_id.lower() if ch in "0123456789abcdef")
    return str(raw_id).lower()


def normalize_psm_id(raw_id) -> str:
    if isinstance(raw_id, list):
        return "".join(f"{int(v) & 0xFF:02x}" for v in raw_id)
    if isinstance(raw_id, dict):
        for key in ("id", "bytes", "value"):
            if key in raw_id:
                return normalize_psm_id(raw_id[key])
    if isinstance(raw_id, str):
        normalized = "".join(ch for ch in raw_id.lower() if ch in "0123456789abcdef")
        return normalized or raw_id.lower()
    return str(raw_id).lower()


def _extract_float_candidate(value, scale: float = 1.0) -> Optional[float]:
    if isinstance(value, bool):
        return None
    if isinstance(value, int):
        return float(value) * scale
    if isinstance(value, float):
        return value
    return None


def _extract_position_deg(position: dict) -> Optional[Tuple[float, float]]:
    if not isinstance(position, dict):
        return None

    lat_raw = None
    lon_raw = None
    for key in ("lat", "latitude"):
        if key in position:
            lat_raw = position[key]
            break
    for key in ("long", "lon", "longitude"):
        if key in position:
            lon_raw = position[key]
            break

    lat = _extract_float_candidate(lat_raw, 1e-7)
    lon = _extract_float_candidate(lon_raw, 1e-7)
    if lat is None or lon is None:
        return None
    return lat, lon


def _extract_psm_speed_mps(value: dict) -> float:
    speed = value.get("speed") if isinstance(value, dict) else None
    if isinstance(speed, int):
        if speed == 8191:
            return -1.0
        return speed * 0.02
    if isinstance(speed, dict):
        for key in ("speed", "value", "velocity"):
            if key in speed:
                extracted = _extract_float_candidate(speed[key], 0.02 if isinstance(speed[key], int) else 1.0)
                if extracted is not None:
                    return extracted
    return -1.0


def _extract_psm_heading_deg(value: dict) -> Optional[float]:
    heading = value.get("heading") if isinstance(value, dict) else None
    if isinstance(heading, int):
        return heading * 0.0125
    if isinstance(heading, dict):
        for key in ("heading", "value", "angle"):
            if key in heading:
                extracted = _extract_float_candidate(heading[key], 0.0125 if isinstance(heading[key], int) else 1.0)
                if extracted is not None:
                    return extracted
    return None


def _extract_psm_user_type(value: dict) -> str:
    basic_type = value.get("basicType") if isinstance(value, dict) else None
    if isinstance(basic_type, str):
        return basic_type
    if isinstance(basic_type, dict):
        for key in ("value", "type", "name"):
            candidate = basic_type.get(key)
            if isinstance(candidate, str):
                return candidate
    return "unknown"


def _extract_tim_anchor(frame: dict) -> Optional[Tuple[float, float]]:
    if not isinstance(frame, dict):
        return None

    # Common TIM roadSignage encoding: msgId.roadSignID.position
    msg_id = frame.get("msgId")
    if isinstance(msg_id, dict):
        road_sign = msg_id.get("roadSignID")
        if isinstance(road_sign, dict):
            position = road_sign.get("position")
            if isinstance(position, dict):
                lat_raw = position.get("lat")
                lon_raw = position.get("long")
                if not isinstance(lon_raw, int):
                    lon_raw = position.get("lon")
                if isinstance(lat_raw, int) and isinstance(lon_raw, int):
                    return lat_raw * 1e-7, lon_raw * 1e-7

    regions = frame.get("regions")
    if not isinstance(regions, list):
        return None
    for region in regions:
        if not isinstance(region, dict):
            continue
        anchor = region.get("anchor")
        if not isinstance(anchor, dict):
            continue
        lat_raw = anchor.get("lat")
        lon_raw = anchor.get("long")
        if not isinstance(lon_raw, int):
            lon_raw = anchor.get("lon")
        if isinstance(lat_raw, int) and isinstance(lon_raw, int):
            return lat_raw * 1e-7, lon_raw * 1e-7

        # Another common variant: regions[].description.geometry.circle.center
        description = region.get("description")
        if not isinstance(description, dict):
            continue
        geometry = description.get("geometry")
        if not isinstance(geometry, dict):
            continue
        circle = geometry.get("circle")
        if not isinstance(circle, dict):
            continue
        center = circle.get("center")
        if not isinstance(center, dict):
            continue
        lat_raw = center.get("lat")
        lon_raw = center.get("long")
        if not isinstance(lon_raw, int):
            lon_raw = center.get("lon")
        if isinstance(lat_raw, int) and isinstance(lon_raw, int):
            return lat_raw * 1e-7, lon_raw * 1e-7
    return None


def _extract_tim_text(frame: dict) -> str:
    if not isinstance(frame, dict):
        return "TIM advisory"

    parts: List[str] = []
    frame_type = frame.get("frameType")
    if isinstance(frame_type, str):
        parts.append(f"type={frame_type}")

    msg_id = frame.get("msgId")
    if isinstance(msg_id, dict):
        road_sign = msg_id.get("roadSignID")
        if isinstance(road_sign, dict):
            mutcd = road_sign.get("mutcdCode")
            if isinstance(mutcd, str):
                parts.append(f"mutcd={mutcd}")

    priority = frame.get("priority")
    if isinstance(priority, int):
        parts.append(f"priority={priority}")

    advisories = []
    work_zones = []
    content = frame.get("content")
    if isinstance(content, dict):
        advisory_entries = content.get("advisory")
        if isinstance(advisory_entries, list):
            for entry in advisory_entries:
                if not isinstance(entry, dict):
                    continue
                item = entry.get("item")
                if not isinstance(item, dict):
                    continue
                itis = item.get("itis")
                if isinstance(itis, int):
                    advisories.append(str(itis))
                elif isinstance(itis, str):
                    advisories.append(itis)

        workzone_entries = content.get("workZone")
        if isinstance(workzone_entries, list):
            for entry in workzone_entries:
                if not isinstance(entry, dict):
                    continue
                item = entry.get("item")
                if not isinstance(item, dict):
                    continue
                itis = item.get("itis")
                if isinstance(itis, int):
                    work_zones.append(str(itis))
                elif isinstance(itis, str):
                    work_zones.append(itis)

    if advisories:
        parts.append("itis=" + ",".join(advisories[:12]))
    if work_zones:
        parts.append("workzone_itis=" + ",".join(work_zones[:12]))

    if not parts:
        return "TIM advisory"
    return " | ".join(parts)


def _extract_tim_radius_m(frame: dict) -> Optional[float]:
    if not isinstance(frame, dict):
        return None

    regions = frame.get("regions")
    if not isinstance(regions, list):
        return None

    for region in regions:
        if not isinstance(region, dict):
            continue
        description = region.get("description")
        if not isinstance(description, dict):
            continue
        geometry = description.get("geometry")
        if not isinstance(geometry, dict):
            continue
        circle = geometry.get("circle")
        if not isinstance(circle, dict):
            continue

        radius_raw = circle.get("radius")
        units = circle.get("units")
        if not isinstance(radius_raw, int) or radius_raw <= 0:
            continue

        # Current captures use units=meter; if another unit appears, keep value
        # as-is rather than dropping the visualization.
        if isinstance(units, str) and units.lower() == "meter":
            return float(radius_raw)
        return float(radius_raw)

    return None


def _normalize_tim_packet_id(raw_id) -> str:
    if raw_id is None:
        return "none"
    if isinstance(raw_id, list):
        return "".join(f"{int(v) & 0xFF:02x}" for v in raw_id)
    if isinstance(raw_id, dict):
        for key in ("id", "bytes", "value"):
            if key in raw_id:
                return _normalize_tim_packet_id(raw_id[key])
    if isinstance(raw_id, str):
        normalized = "".join(ch for ch in raw_id.lower() if ch in "0123456789abcdef")
        return normalized or raw_id.lower()
    return str(raw_id).lower()


def _utc_time_of_hour_tenths() -> float:
    now = datetime.now(timezone.utc)
    return (now.minute * 60.0 + now.second) * 10.0 + (now.microsecond / 100000.0)


def _timemark_remaining_sec(value: Optional[int], reference_tenths: Optional[float] = None) -> Optional[float]:
    if isinstance(value, dict):
        for key in ("value", "timemark", "time"):
            candidate = value.get(key)
            if isinstance(candidate, int):
                value = candidate
                break

    if not isinstance(value, int) or value == 36001 or value < 0 or value > 36000:
        return None

    base_tenths = reference_tenths if isinstance(reference_tenths, (int, float)) else _utc_time_of_hour_tenths()
    remaining_tenths = float(value) - float(base_tenths)
    if remaining_tenths < 0.0:
        remaining_tenths += 36000.0
    if remaining_tenths < 0.0:
        return None
    return remaining_tenths / 10.0


def _spat_timing_remaining_sec(timing: Any, reference_tenths: Optional[float] = None) -> Optional[float]:
    if not isinstance(timing, dict):
        return None

    field_candidates = (
        ("min_end_time", "minEndTime"),
        ("likely_time", "likelyTime"),
        ("max_end_time", "maxEndTime"),
    )

    for snake_key, camel_key in field_candidates:
        exists_keys = (
            f"{snake_key}_exists",
            f"{camel_key}_exists",
            f"{camel_key}Exists",
        )
        if any(k in timing and timing.get(k) is False for k in exists_keys):
            continue

        remaining = _timemark_remaining_sec(timing.get(snake_key), reference_tenths)
        if remaining is None:
            remaining = _timemark_remaining_sec(timing.get(camel_key), reference_tenths)
        if remaining is not None:
            return remaining

    return None


def _extract_spat_reference_tenths(intersection: Dict[str, Any]) -> Optional[float]:
    def _read_optional_int(*keys: str) -> Optional[int]:
        for key in keys:
            if key in intersection:
                value = intersection.get(key)
                if isinstance(value, int):
                    return value
        return None

    moy = _read_optional_int("moy", "MOY")
    time_stamp_ms = _read_optional_int("time_stamp", "timeStamp")

    if isinstance(time_stamp_ms, int) and 0 <= time_stamp_ms <= 59999:
        minute_of_hour = 0
        if isinstance(moy, int) and 0 <= moy < 527040:
            minute_of_hour = moy % 60
        else:
            minute_of_hour = int(_utc_time_of_hour_tenths() // 600.0) % 60
        return float(minute_of_hour * 600) + (float(time_stamp_ms) / 100.0)

    if isinstance(moy, int) and 0 <= moy < 527040:
        minute_of_hour = moy % 60
        second_of_minute = datetime.now(timezone.utc).second
        return float(minute_of_hour * 600 + second_of_minute * 10)

    return None


class V2XInboundMarkerVisualizer(Node):
    def __init__(self) -> None:
        super().__init__("v2x_inbound_marker_visualizer")

        self.inbound_topic = self.declare_parameter("inbound_topic", "/comms/inbound_binary_msg").value
        self.marker_topic = self.declare_parameter("marker_topic", "/v2x/map_spat_markers").value
        self.bsm_marker_topic = self.declare_parameter("bsm_marker_topic", "/v2x/bsm_markers").value
        self.psm_marker_topic = self.declare_parameter("psm_marker_topic", "/v2x/psm_markers").value
        self.sdsm_marker_topic = self.declare_parameter("sdsm_marker_topic", "/v2x/sdsm_markers").value
        self.tim_marker_topic = self.declare_parameter("tim_marker_topic", "/v2x/tim_markers").value
        self.frame_id = self.declare_parameter("frame_id", "map").value
        self.publish_rate_hz = float(self.declare_parameter("publish_rate_hz", 10.0).value)
        self.lane_line_width = float(self.declare_parameter("lane_line_width", 0.6).value)
        self.bsm_point_size = float(self.declare_parameter("bsm_point_size", 1.2).value)
        self.psm_marker_size = float(self.declare_parameter("psm_marker_size", 1.0).value)
        self.psm_track_timeout_sec = float(self.declare_parameter("psm_track_timeout_sec", 6.0).value)
        self.sdsm_track_timeout_sec = float(self.declare_parameter("sdsm_track_timeout_sec", 6.0).value)
        self.tim_track_timeout_sec = float(self.declare_parameter("tim_track_timeout_sec", 20.0).value)
        self.marker_lifetime_sec = float(self.declare_parameter("marker_lifetime_sec", 1.5).value)
        self.enable_text_overlay = bool(self.declare_parameter("enable_text_overlay", True).value)
        self.enable_deep_scan = bool(self.declare_parameter("enable_deep_scan", True).value)
        self.allow_bsm_schema_for_psm = bool(self.declare_parameter("allow_bsm_schema_for_psm", False).value)
        self.counter_log_period_sec = float(self.declare_parameter("counter_log_period_sec", 2.0).value)
        self.node_unit_m = float(self.declare_parameter("map_node_unit_m", 0.01).value)
        self.prefer_obu_bsm_anchor = bool(self.declare_parameter("prefer_obu_bsm_anchor", True).value)
        self.use_utm_global_coordinates = bool(self.declare_parameter("use_utm_global_coordinates", True).value)
        self.utm_zone_override = int(self.declare_parameter("utm_zone_override", 0).value)
        self.obu_reference_bsm_id = normalize_bsm_id(
            self.declare_parameter("obu_reference_bsm_id", "e153df70").value
        )
        self._logged_map_schema = False

        try:
            j2735_202409 = _try_load_j2735_decoder_module()
        except ImportError as exc:
            raise RuntimeError(
                "Missing Python decoder dependency 'j2735_202409'. Install with: "
                "activate /home/jonaslo96/ros2_drivers/.venv (or your project venv) and run: "
                "pip3 install pycrate --upgrade && "
                "pip3 install https://raw.githubusercontent.com/usdot-fhwa-stol/j2735decoder/develop/wheels/j2735_202409-0.1.0-py3-none-any.whl"
            ) from exc

        self._message_frame = j2735_202409.MessageFrame.MessageFrame
        self._map_state: Dict[str, dict] = {}
        self._map_raw: Dict[str, dict] = {}
        self._spat_state: Dict[str, Dict[int, Dict[str, Any]]] = {}
        self._bsm_tracks: Dict[str, BsmTrackPoint] = {}
        self._psm_tracks: Dict[str, PsmTrackPoint] = {}
        self._sdsm_tracks: Dict[str, SdsmTrackPoint] = {}
        self._tim_tracks: Dict[str, TimTrackPoint] = {}
        self._encoded_rx_count = 0
        self._decoded_rx_count = 0
        self._undecoded_rx_count = 0
        self._map_rx_count = 0
        self._spat_rx_count = 0
        self._bsm_rx_count = 0
        self._psm_rx_count = 0
        self._sdsm_rx_count = 0
        self._tim_rx_count = 0
        self._other_rx_count = 0
        self._last_counter_log_ns = 0
        self._anchor_lat_deg: Optional[float] = None
        self._anchor_lon_deg: Optional[float] = None
        self._anchor_source: str = "unknown"
        self._dirty_map_spat = True
        self._dirty_bsm = True
        self._dirty_psm = True
        self._dirty_sdsm = True
        self._dirty_tim = True

        self._sub = self.create_subscription(ByteArray, self.inbound_topic, self._on_inbound, 200)
        self._pub_map_spat = self.create_publisher(MarkerArray, self.marker_topic, 10)
        self._pub_bsm = self.create_publisher(MarkerArray, self.bsm_marker_topic, 10)
        self._pub_psm = self.create_publisher(MarkerArray, self.psm_marker_topic, 10)
        self._pub_sdsm = self.create_publisher(MarkerArray, self.sdsm_marker_topic, 10)
        self._pub_tim = self.create_publisher(MarkerArray, self.tim_marker_topic, 10)

        self._overlay_pub_map_spat = None
        self._overlay_pub_bsm = None
        self._overlay_pub_psm = None
        self._overlay_pub_sdsm = None
        self._overlay_pub_tim = None
        if self.enable_text_overlay and OverlayText is not None:
            self._overlay_pub_map_spat = self.create_publisher(OverlayText, "/v2x/map_spat_overlay_text", 10)
            self._overlay_pub_bsm = self.create_publisher(OverlayText, "/v2x/bsm_overlay_text", 10)
            self._overlay_pub_psm = self.create_publisher(OverlayText, "/v2x/psm_overlay_text", 10)
            self._overlay_pub_sdsm = self.create_publisher(OverlayText, "/v2x/sdsm_overlay_text", 10)
            self._overlay_pub_tim = self.create_publisher(OverlayText, "/v2x/tim_overlay_text", 10)
            self.get_logger().info(f"OverlayText enabled via {OVERLAY_MSG_SOURCE}")
        elif self.enable_text_overlay and OverlayText is None:
            self.get_logger().warning(
                "OverlayText support requested but no overlay message package is installed "
                "(expected one of: jsk_rviz_plugins, rviz_2d_overlay_msgs). "
                "Counters will be shown in terminal logs only."
            )

        period = max(0.1, 1.0 / max(0.1, self.publish_rate_hz))
        self._timer = self.create_timer(period, self._publish_markers)

        self.get_logger().info(
            f"Inbound marker visualizer started: inbound_topic={self.inbound_topic}, "
            f"map_spat_marker_topic={self.marker_topic}, bsm_marker_topic={self.bsm_marker_topic}, "
            f"psm_marker_topic={self.psm_marker_topic}, tim_marker_topic={self.tim_marker_topic}, "
            f"obu_reference_bsm_id={self.obu_reference_bsm_id}, "
            f"use_utm_global_coordinates={self.use_utm_global_coordinates}, "
            f"utm_zone_override={self.utm_zone_override}"
        )

    def _latlon_to_marker_xy(self, lat_deg: float, lon_deg: float) -> Optional[Tuple[float, float]]:
        if self.use_utm_global_coordinates:
            return latlon_to_utm_xy(lat_deg, lon_deg, self.utm_zone_override)

        if self._anchor_lat_deg is None or self._anchor_lon_deg is None:
            return None

        return latlon_to_local_xy(lat_deg, lon_deg, self._anchor_lat_deg, self._anchor_lon_deg)

    def _publish_overlay_text(self, text: str, kind: str) -> None:
        if OverlayText is None:
            return
        if kind == "map_spat":
            pub = self._overlay_pub_map_spat
        elif kind == "bsm":
            pub = self._overlay_pub_bsm
        elif kind == "psm":
            pub = self._overlay_pub_psm
        elif kind == "sdsm":
            pub = self._overlay_pub_sdsm
        elif kind == "tim":
            pub = self._overlay_pub_tim
        else:
            return
        if pub is None:
            return

        msg = OverlayText()
        msg.action = OverlayText.ADD
        msg.width = 800
        msg.height = 80

        # jsk_rviz_plugins uses left/top, while rviz_2d_overlay_msgs
        # uses alignment + horizontal_distance/vertical_distance.
        if kind == "map_spat":
            top = 10
        elif kind == "bsm":
            top = 95
        elif kind == "psm":
            top = 180
        elif kind == "sdsm":
            top = 265
        else:
            top = 350

        if hasattr(msg, "left") and hasattr(msg, "top"):
            msg.left = 10
            msg.top = top
        else:
            msg.horizontal_alignment = OverlayText.LEFT
            msg.vertical_alignment = OverlayText.TOP
            msg.horizontal_distance = 10
            msg.vertical_distance = top

        msg.text_size = 14.0
        msg.line_width = 2
        msg.font = "DejaVu Sans Mono"

        # Foreground text color
        if kind == "map_spat":
            msg.fg_color.r = 1.0
            msg.fg_color.g = 1.0
            msg.fg_color.b = 0.2
        elif kind == "bsm":
            msg.fg_color.r = 0.7
            msg.fg_color.g = 0.95
            msg.fg_color.b = 1.0
        elif kind == "psm":
            msg.fg_color.r = 1.0
            msg.fg_color.g = 0.45
            msg.fg_color.b = 0.35
        elif kind == "sdsm":
            msg.fg_color.r = 0.8
            msg.fg_color.g = 0.2
            msg.fg_color.b = 0.8
        else:
            msg.fg_color.r = 1.0
            msg.fg_color.g = 0.85
            msg.fg_color.b = 0.25
        msg.fg_color.a = 1.0

        # Semi-transparent dark background
        msg.bg_color.r = 0.0
        msg.bg_color.g = 0.0
        msg.bg_color.b = 0.0
        msg.bg_color.a = 0.45

        msg.text = text
        pub.publish(msg)

    def _decode_payload(self, payload: bytes) -> Optional[dict]:
        for candidate, _ in extract_framed_candidates(payload):
            decoded = try_decode(candidate, self._message_frame)
            if decoded is not None:
                return decoded

        if self.enable_deep_scan:
            return deep_scan_for_decode(payload, self._message_frame)

        return None

    def _log_counters_if_due(self) -> None:
        period_sec = max(0.2, self.counter_log_period_sec)
        now_ns = self.get_clock().now().nanoseconds
        if self._last_counter_log_ns == 0 or (now_ns - self._last_counter_log_ns) >= int(period_sec * 1e9):
            self._last_counter_log_ns = now_ns
            self.get_logger().info(
                "RX counters: "
                f"encoded={self._encoded_rx_count}, "
                f"decoded={self._decoded_rx_count}, "
                f"not_decoded={self._undecoded_rx_count}, "
                f"map={self._map_rx_count}, "
                f"spat={self._spat_rx_count}, "
                f"bsm={self._bsm_rx_count}, "
                f"psm={self._psm_rx_count}, "
                f"sdsm={self._sdsm_rx_count}, "
                f"tim={self._tim_rx_count}, "
                f"other={self._other_rx_count}, "
                f"bsm_tracked={len(self._bsm_tracks)}, "
                f"psm_tracked={len(self._psm_tracks)}, "
                f"sdsm_tracked={len(self._sdsm_tracks)}, "
                f"tim_tracked={len(self._tim_tracks)}"
            )

    def _intersection_key(self, inter_id: dict) -> str:
        region = inter_id.get("region", 0) if isinstance(inter_id, dict) else 0
        iid = inter_id.get("id", 0) if isinstance(inter_id, dict) else 0
        return f"{region}:{iid}"

    def _extract_lane_signal_group(self, lane: dict) -> Optional[int]:
        connects_to = lane.get("connectsTo")
        if not isinstance(connects_to, list):
            return None

        for connection in connects_to:
            if not isinstance(connection, dict):
                continue
            sg = connection.get("signalGroup")
            if isinstance(sg, int):
                return sg
        return None

    def _ensure_anchor_from_intersections(self, intersections: List[dict]) -> None:
        if self._anchor_lat_deg is not None and self._anchor_lon_deg is not None:
            return

        refs: List[Tuple[float, float]] = []
        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            ref = inter.get("refPoint", {})
            if not isinstance(ref, dict):
                continue
            ref_lat_raw = ref.get("lat")
            ref_lon_raw = ref.get("long")
            if not isinstance(ref_lon_raw, int):
                ref_lon_raw = ref.get("lon")
            if not isinstance(ref_lat_raw, int) or not isinstance(ref_lon_raw, int):
                continue
            refs.append((ref_lat_raw * 1e-7, ref_lon_raw * 1e-7))

        if not refs:
            return

        self._anchor_lat_deg = sum(r[0] for r in refs) / len(refs)
        self._anchor_lon_deg = sum(r[1] for r in refs) / len(refs)
        self._anchor_source = "map_center"
        self.get_logger().info(
            f"Set visualization anchor to map center lat={self._anchor_lat_deg:.8f}, lon={self._anchor_lon_deg:.8f}"
        )

    def _set_anchor_from_obu(self, lat_deg: float, lon_deg: float) -> None:
        changed = (
            self._anchor_lat_deg is None
            or self._anchor_lon_deg is None
            or abs(self._anchor_lat_deg - lat_deg) > 1e-9
            or abs(self._anchor_lon_deg - lon_deg) > 1e-9
            or self._anchor_source != "obu_bsm"
        )
        if not changed:
            return

        self._anchor_lat_deg = lat_deg
        self._anchor_lon_deg = lon_deg
        self._anchor_source = "obu_bsm"
        self._rebuild_map_state_from_raw()
        self._dirty_bsm = True

    def _build_map_entry(self, inter: dict) -> Optional[Tuple[str, dict]]:
        if (not self.use_utm_global_coordinates) and (self._anchor_lat_deg is None or self._anchor_lon_deg is None):
            return None

        if not isinstance(inter, dict):
            return None
        inter_id = inter.get("id", {})
        if not isinstance(inter_id, dict):
            return None

        ref = inter.get("refPoint", {})
        if not isinstance(ref, dict):
            return None
        ref_lat_raw = ref.get("lat")
        ref_lon_raw = ref.get("long")
        if not isinstance(ref_lon_raw, int):
            ref_lon_raw = ref.get("lon")
        if not isinstance(ref_lat_raw, int) or not isinstance(ref_lon_raw, int):
            return None

        ref_lat = ref_lat_raw * 1e-7
        ref_lon = ref_lon_raw * 1e-7
        origin_xy = self._latlon_to_marker_xy(ref_lat, ref_lon)
        if origin_xy is None:
            return None
        inter_origin_x, inter_origin_y = origin_xy

        lanes = inter.get("laneSet", [])
        if not isinstance(lanes, list):
            lanes = []

        lane_data = []
        for lane in lanes:
            if not isinstance(lane, dict):
                continue
            lane_id = lane.get("laneID")
            if not isinstance(lane_id, int):
                continue
            points = self._lane_points(lane, inter_origin_x, inter_origin_y, ref_lat, ref_lon)
            if len(points) < 2:
                continue
            lane_data.append(
                {
                    "lane_id": lane_id,
                    "signal_group": self._extract_lane_signal_group(lane),
                    "points": points,
                }
            )

        key = self._intersection_key(inter_id)
        entry = {
            "ref_lat": ref_lat,
            "ref_lon": ref_lon,
            "lanes": lane_data,
        }
        return key, entry

    def _rebuild_map_state_from_raw(self) -> None:
        if self._anchor_lat_deg is None or self._anchor_lon_deg is None:
            return
        updated: Dict[str, dict] = {}
        for key, inter in self._map_raw.items():
            built = self._build_map_entry(inter)
            if built is None:
                continue
            built_key, entry = built
            updated[built_key] = entry
        if updated != self._map_state:
            self._map_state = updated
            self._dirty_map_spat = True

    def _lane_points(self, lane: dict, inter_origin_x: float, inter_origin_y: float, ref_lat_deg: float, ref_lon_deg: float) -> List[Tuple[float, float]]:
        node_list = lane.get("nodeList", {})
        if not isinstance(node_list, dict):
            return []

        nodes = node_list.get("nodes", [])
        if not isinstance(nodes, list):
            return []

        points: List[Tuple[float, float]] = []
        current_x = inter_origin_x
        current_y = inter_origin_y

        for node in nodes:
            if not isinstance(node, dict):
                continue
            delta = node.get("delta", {})
            if not isinstance(delta, dict):
                continue

            if "node-LatLon" in delta and isinstance(delta["node-LatLon"], dict):
                ll = delta["node-LatLon"]
                lat_raw = ll.get("lat")
                lon_raw = ll.get("long")
                if not isinstance(lon_raw, int):
                    lon_raw = ll.get("lon")
                if isinstance(lat_raw, int) and isinstance(lon_raw, int):
                    node_lat = lat_raw * 1e-7
                    node_lon = lon_raw * 1e-7
                    marker_xy = self._latlon_to_marker_xy(node_lat, node_lon)
                    if marker_xy is not None:
                        current_x, current_y = marker_xy
            else:
                applied_delta = False
                for key in ("node-XY1", "node-XY2", "node-XY3", "node-XY4", "node-XY5", "node-XY6"):
                    if key in delta and isinstance(delta[key], dict):
                        x_val = delta[key].get("x")
                        y_val = delta[key].get("y")
                        if isinstance(x_val, int) and isinstance(y_val, int):
                            current_x += x_val * self.node_unit_m
                            current_y += y_val * self.node_unit_m
                            applied_delta = True
                            break

                # Some decoders expose node XY deltas under different keys; accept any child dict
                # that carries integer x/y so lane geometry is still reconstructed.
                if not applied_delta:
                    for value in delta.values():
                        if not isinstance(value, dict):
                            continue
                        x_val = value.get("x")
                        y_val = value.get("y")
                        if isinstance(x_val, int) and isinstance(y_val, int):
                            current_x += x_val * self.node_unit_m
                            current_y += y_val * self.node_unit_m
                            applied_delta = True
                            break

            pt = (current_x, current_y)
            if not points or abs(points[-1][0] - pt[0]) > 1e-6 or abs(points[-1][1] - pt[1]) > 1e-6:
                points.append(pt)

        return points

    def _on_map(self, decoded: dict) -> None:
        value = decoded.get("value")
        if not isinstance(value, dict):
            return
        intersections = value.get("intersections")
        if not isinstance(intersections, list):
            return

        if not self._logged_map_schema and intersections:
            try:
                first_inter = intersections[0] if isinstance(intersections[0], dict) else {}
                lane_set = first_inter.get("laneSet", []) if isinstance(first_inter, dict) else []
                first_lane = lane_set[0] if isinstance(lane_set, list) and lane_set else {}
                node_list = first_lane.get("nodeList", {}) if isinstance(first_lane, dict) else {}
                nodes = node_list.get("nodes", []) if isinstance(node_list, dict) else []
                first_node = nodes[0] if isinstance(nodes, list) and nodes else {}
                first_delta = first_node.get("delta", {}) if isinstance(first_node, dict) else {}
                self.get_logger().info(
                    f"MAP schema probe: laneSet_type={type(lane_set).__name__}, "
                    f"nodeList_keys={list(node_list.keys()) if isinstance(node_list, dict) else []}, "
                    f"first_delta={first_delta}"
                )
            except Exception as exc:
                self.get_logger().warn(f"MAP schema probe failed: {exc}")
            self._logged_map_schema = True

        self._ensure_anchor_from_intersections(intersections)
        if (not self.use_utm_global_coordinates) and (self._anchor_lat_deg is None or self._anchor_lon_deg is None):
            return

        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            inter_id = inter.get("id", {})
            if not isinstance(inter_id, dict):
                continue
            key = self._intersection_key(inter_id)
            self._map_raw[key] = inter

            built = self._build_map_entry(inter)
            if built is None:
                continue
            built_key, new_map_entry = built
            if self._map_state.get(built_key) != new_map_entry:
                self._map_state[built_key] = new_map_entry
                self._dirty_map_spat = True
                self._dirty_bsm = True

    def _on_spat(self, decoded: dict) -> None:
        value = decoded.get("value")
        if not isinstance(value, dict):
            return
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

            states = inter.get("states", [])
            if not isinstance(states, list):
                continue

            inter_ref_tenths = _extract_spat_reference_tenths(inter)
            sg_to_phase: Dict[int, Dict[str, Any]] = {}
            for state in states:
                if not isinstance(state, dict):
                    continue
                sg = state.get("signalGroup")
                if not isinstance(sg, int):
                    continue
                sts = state.get("state-time-speed", [])
                if not isinstance(sts, list) or len(sts) == 0 or not isinstance(sts[0], dict):
                    continue
                event_state = sts[0].get("eventState")
                phase_map = {
                    "dark": 1,
                    "stop-Then-Proceed": 2,
                    "stop-And-Remain": 3,
                    "pre-Movement": 4,
                    "permissive-Movement-Allowed": 5,
                    "protected-Movement-Allowed": 6,
                    "permissive-clearance": 7,
                    "protected-clearance": 8,
                    "caution-Conflicting-Traffic": 9,
                }
                if isinstance(event_state, str):
                    timing = sts[0].get("timing")
                    sg_to_phase[sg] = {
                        "phase": phase_map.get(event_state, 0),
                        "timing": timing if isinstance(timing, dict) else {},
                        "reference_tenths": inter_ref_tenths,
                        "rx_time_ns": now_ns,
                    }

            key = self._intersection_key(inter_id)
            if self._spat_state.get(key) != sg_to_phase:
                self._spat_state[key] = sg_to_phase
                self._dirty_map_spat = True

    def _on_bsm(self, decoded: dict) -> None:
        if (not self.use_utm_global_coordinates) and (self._anchor_lat_deg is None or self._anchor_lon_deg is None):
            self.get_logger().debug("BSM dropped: local coords mode but anchor not set")
            return

        value = decoded.get("value")
        if not isinstance(value, dict):
            self.get_logger().debug("BSM dropped: value not dict")
            return
        core = value.get("coreData", {})
        if not isinstance(core, dict):
            self.get_logger().debug("BSM dropped: coreData not dict")
            return

        lat_raw = core.get("lat")
        lon_raw = core.get("long")
        if not isinstance(lon_raw, int):
            lon_raw = core.get("lon")
        if not isinstance(lat_raw, int) or not isinstance(lon_raw, int):
            self.get_logger().debug(f"BSM dropped: invalid lat={lat_raw} lon={lon_raw}")
            return

        bsm_lat = lat_raw * 1e-7
        bsm_lon = lon_raw * 1e-7

        speed_raw = core.get("speed")
        speed_mps = speed_raw * 0.02 if isinstance(speed_raw, int) and speed_raw != 8191 else -1.0

        vehicle_id = normalize_bsm_id(core.get("id", "unknown"))
        
        self.get_logger().debug(f"BSM received: id={vehicle_id} lat={bsm_lat:.7f} lon={bsm_lon:.7f} speed={speed_mps:.2f}")

        if self.prefer_obu_bsm_anchor and vehicle_id == self.obu_reference_bsm_id:
            self._set_anchor_from_obu(bsm_lat, bsm_lon)

        previous = self._bsm_tracks.get(vehicle_id)
        new_point = BsmTrackPoint(lat_deg=bsm_lat, lon_deg=bsm_lon, speed_mps=speed_mps)
        if previous is None:
            self._bsm_tracks[vehicle_id] = new_point
            self._dirty_bsm = True
            self.get_logger().debug(f"BSM tracked: id={vehicle_id}")
            return

        if (
            abs(previous.lat_deg - new_point.lat_deg) > 1e-7
            or abs(previous.lon_deg - new_point.lon_deg) > 1e-7
            or abs(previous.speed_mps - new_point.speed_mps) > 0.1
        ):
            self._bsm_tracks[vehicle_id] = new_point
            self._dirty_bsm = True

    def _on_psm(self, decoded: dict) -> None:
        if (not self.use_utm_global_coordinates) and (self._anchor_lat_deg is None or self._anchor_lon_deg is None):
            return

        value = decoded.get("value")
        if not isinstance(value, dict):
            return

        psm_lat: Optional[float] = None
        psm_lon: Optional[float] = None
        speed_mps = -1.0
        heading_deg: Optional[float] = None

        position = value.get("position")
        pos = _extract_position_deg(position)
        if pos is not None:
            psm_lat, psm_lon = pos
            speed_mps = _extract_psm_speed_mps(value)
            heading_deg = _extract_psm_heading_deg(value)
        else:
            # Some PSM-labeled traffic in mixed captures decodes with BSM-style
            # coreData fields. Accept that schema so VRU markers are not dropped.
            if self.allow_bsm_schema_for_psm:
                core = value.get("coreData")
                if isinstance(core, dict):
                    lat_raw = core.get("lat")
                    lon_raw = core.get("long")
                    if not isinstance(lon_raw, int):
                        lon_raw = core.get("lon")
                    if isinstance(lat_raw, int) and isinstance(lon_raw, int):
                        psm_lat = lat_raw * 1e-7
                        psm_lon = lon_raw * 1e-7

                    speed_raw = core.get("speed")
                    if isinstance(speed_raw, int) and speed_raw != 8191:
                        speed_mps = speed_raw * 0.02

                    heading_raw = core.get("heading")
                    if isinstance(heading_raw, int):
                        heading_deg = heading_raw * 0.0125

        if psm_lat is None or psm_lon is None:
            return

        user_type = _extract_psm_user_type(value)

        psm_id = normalize_psm_id(value.get("id", value.get("coreData", {}).get("id", "unknown")))
        now_ns = self.get_clock().now().nanoseconds
        new_point = PsmTrackPoint(
            lat_deg=psm_lat,
            lon_deg=psm_lon,
            speed_mps=speed_mps,
            heading_deg=heading_deg,
            user_type=user_type,
            last_update_ns=now_ns,
        )

        previous = self._psm_tracks.get(psm_id)
        if previous is None:
            self._psm_tracks[psm_id] = new_point
            self._dirty_psm = True
            return

        if (
            abs(previous.lat_deg - new_point.lat_deg) > 1e-7
            or abs(previous.lon_deg - new_point.lon_deg) > 1e-7
            or abs(previous.speed_mps - new_point.speed_mps) > 0.1
            or previous.user_type != new_point.user_type
            or (
                previous.heading_deg is None
                and new_point.heading_deg is not None
            )
            or (
                previous.heading_deg is not None
                and new_point.heading_deg is not None
                and abs(previous.heading_deg - new_point.heading_deg) > 1.0
            )
        ):
            self._dirty_psm = True

        self._psm_tracks[psm_id] = new_point

    def _on_sdsm(self, decoded: dict) -> None:
        if (not self.use_utm_global_coordinates) and (self._anchor_lat_deg is None or self._anchor_lon_deg is None):
            return

        value = decoded.get("value")
        if not isinstance(value, dict):
            return

        objects_list = value.get("objects")
        if not isinstance(objects_list, list):
            return

        ref_pos = value.get("refPos")
        if not isinstance(ref_pos, dict):
            return

        ref_lat = _extract_float_candidate(ref_pos.get("lat"), 1e-7)
        ref_lon = _extract_float_candidate(ref_pos.get("long") or ref_pos.get("lon"), 1e-7)
        if ref_lat is None or ref_lon is None:
            return

        now_ns = self.get_clock().now().nanoseconds

        for obj_idx, obj in enumerate(objects_list):
            if not isinstance(obj, dict):
                continue

            obj_type_val = obj.get("objType") or obj.get("obj_type")
            if isinstance(obj_type_val, dict):
                obj_type_val = obj_type_val.get("value", obj_type_val.get("enum", 0))
            if not isinstance(obj_type_val, int):
                obj_type_val = 0

            obj_type_name = {0: "UNKNOWN", 1: "VEHICLE", 2: "VRU", 3: "ANIMAL"}.get(obj_type_val, "UNKNOWN")

            common_data = obj.get("detObjCommon") or obj.get("common")
            if not isinstance(common_data, dict):
                continue

            obj_pos = common_data.get("position") or common_data.get("pos")
            if not isinstance(obj_pos, dict):
                continue

            obj_lat_raw = obj_pos.get("lat") or obj_pos.get("latitude")
            obj_lon_raw = obj_pos.get("long") or obj_pos.get("lon") or obj_pos.get("longitude")
            obj_lat = _extract_float_candidate(obj_lat_raw, 1e-7)
            obj_lon = _extract_float_candidate(obj_lon_raw, 1e-7)
            if obj_lat is None or obj_lon is None:
                continue

            speed_raw = common_data.get("speed")
            speed_mps = _extract_float_candidate(speed_raw, 0.02 if isinstance(speed_raw, int) else 1.0)
            if speed_mps is None:
                speed_mps = -1.0

            heading_raw = common_data.get("heading")
            heading_deg = _extract_float_candidate(heading_raw, 0.0125 if isinstance(heading_raw, int) else 1.0)

            sdsm_id = f"{ref_lat:.7f}_{ref_lon:.7f}_{obj_idx}"

            new_point = SdsmTrackPoint(
                lat_deg=obj_lat,
                lon_deg=obj_lon,
                speed_mps=speed_mps,
                heading_deg=heading_deg,
                obj_type=obj_type_name,
                obj_type_enum=obj_type_val,
                last_update_ns=now_ns,
            )

            previous = self._sdsm_tracks.get(sdsm_id)
            if previous is None:
                self._sdsm_tracks[sdsm_id] = new_point
                self._dirty_sdsm = True
                continue

            if (
                abs(previous.lat_deg - new_point.lat_deg) > 1e-7
                or abs(previous.lon_deg - new_point.lon_deg) > 1e-7
                or abs(previous.speed_mps - new_point.speed_mps) > 0.1
                or previous.obj_type_enum != new_point.obj_type_enum
                or (
                    previous.heading_deg is None
                    and new_point.heading_deg is not None
                )
                or (
                    previous.heading_deg is not None
                    and new_point.heading_deg is not None
                    and abs(previous.heading_deg - new_point.heading_deg) > 1.0
                )
            ):
                self._dirty_sdsm = True

            self._sdsm_tracks[sdsm_id] = new_point

    def _on_tim(self, decoded: dict) -> None:
        value = decoded.get("value")
        if not isinstance(value, dict):
            return

        data_frames = value.get("dataFrames")
        if not isinstance(data_frames, list):
            return

        packet_token = _normalize_tim_packet_id(value.get("packetID"))
        now_ns = self.get_clock().now().nanoseconds
        current_packet_keys = set()

        for idx, frame in enumerate(data_frames):
            if not isinstance(frame, dict):
                continue
            anchor = _extract_tim_anchor(frame)
            radius_m = _extract_tim_radius_m(frame)
            frame_type = frame.get("frameType") if isinstance(frame.get("frameType"), str) else "unknown"
            priority = frame.get("priority") if isinstance(frame.get("priority"), int) else None
            text = _extract_tim_text(frame)

            advisory_key = f"{packet_token}:{idx}:{frame_type}"
            current_packet_keys.add(advisory_key)

            previous = self._tim_tracks.get(advisory_key)
            new_track = TimTrackPoint(
                text=text,
                lat_deg=anchor[0] if anchor else None,
                lon_deg=anchor[1] if anchor else None,
                radius_m=radius_m,
                priority=priority,
                frame_type=frame_type,
                last_update_ns=now_ns,
            )

            if (
                previous is None
                or previous.text != new_track.text
                or previous.priority != new_track.priority
                or previous.frame_type != new_track.frame_type
                or previous.lat_deg != new_track.lat_deg
                or previous.lon_deg != new_track.lon_deg
                or previous.radius_m != new_track.radius_m
            ):
                self._dirty_tim = True
            self._tim_tracks[advisory_key] = new_track

        stale_packet_keys = [
            advisory_id
            for advisory_id in self._tim_tracks.keys()
            if advisory_id.startswith(f"{packet_token}:") and advisory_id not in current_packet_keys
        ]
        for advisory_id in stale_packet_keys:
            self._tim_tracks.pop(advisory_id, None)
            self._dirty_tim = True

    def _prune_stale_psm_tracks(self) -> None:
        if not self._psm_tracks:
            return
        now_ns = self.get_clock().now().nanoseconds
        timeout_ns = int(max(0.5, self.psm_track_timeout_sec) * 1e9)
        stale_ids = [
            track_id
            for track_id, track in self._psm_tracks.items()
            if (now_ns - track.last_update_ns) > timeout_ns
        ]
        if not stale_ids:
            return
        for track_id in stale_ids:
            self._psm_tracks.pop(track_id, None)
        self._dirty_psm = True

    def _prune_stale_sdsm_tracks(self) -> None:
        if not self._sdsm_tracks:
            return
        now_ns = self.get_clock().now().nanoseconds
        timeout_ns = int(max(0.5, self.sdsm_track_timeout_sec) * 1e9)
        stale_ids = [
            track_id
            for track_id, track in self._sdsm_tracks.items()
            if (now_ns - track.last_update_ns) > timeout_ns
        ]
        if not stale_ids:
            return
        for track_id in stale_ids:
            self._sdsm_tracks.pop(track_id, None)
        self._dirty_sdsm = True

    def _prune_stale_tim_tracks(self) -> None:
        if not self._tim_tracks:
            return
        now_ns = self.get_clock().now().nanoseconds
        timeout_ns = int(max(2.0, self.tim_track_timeout_sec) * 1e9)
        stale_ids = [
            track_id
            for track_id, track in self._tim_tracks.items()
            if (now_ns - track.last_update_ns) > timeout_ns
        ]
        if not stale_ids:
            return
        for track_id in stale_ids:
            self._tim_tracks.pop(track_id, None)
        self._dirty_tim = True

    def _classify_msg_type_by_structure(self, decoded: dict) -> str:
        """Fallback classifier to distinguish BSM from PSM when messageId is ambiguous (20)."""
        value = decoded.get("value")
        if not isinstance(value, dict):
            return "unknown"
        
        # BSM has coreData, PSM does not
        if "coreData" in value:
            self.get_logger().debug("Inferred type: BSM (has coreData)")
            return "bsm"
        
        # PSM has basicType (or personal safety message fields)
        if "basicType" in value:
            self.get_logger().debug("Inferred type: PSM (has basicType)")
            return "psm"
        
        # PSM may have position as a dict (not nested in coreData)
        pos = value.get("position")
        if isinstance(pos, dict) and ("lat" in pos or "latitude" in pos):
            # Check for PSM-specific fields
            if "heading" in value or "pathHistory" in value:
                self.get_logger().debug("Inferred type: PSM (has position + heading/pathHistory)")
                return "psm"
        
        # Default: treat as BSM since BSM is more common in mixed V2X streams
        self.get_logger().debug("Inferred type: BSM (default)")
        return "bsm"

    def _on_inbound(self, msg: ByteArray) -> None:
        payload = bytes(msg.content)
        if not payload:
            return

        self._encoded_rx_count += 1
        self._dirty_map_spat = True
        self._dirty_bsm = True
        self._dirty_psm = True
        self._dirty_sdsm = True
        self._dirty_tim = True

        decoded = self._decode_payload(payload)
        if decoded is None:
            self._undecoded_rx_count += 1
            self._log_counters_if_due()
            return

        self._decoded_rx_count += 1

        message_id = decoded.get("messageId")
        driver_type = (msg.message_type or "").strip().upper()

        self.get_logger().debug(f"Inbound message: driver_type='{driver_type}', messageId={message_id}")

        # Prefer driver-provided type tags when available. They are derived from
        # runtime wave mapping and help route mixed captures where decoded ID
        # semantics can vary by framing style.
        if driver_type == "MAP":
            self._map_rx_count += 1
            self._on_map(decoded)
        elif driver_type == "SPAT":
            self._spat_rx_count += 1
            self._on_spat(decoded)
        elif driver_type == "BSM":
            self._bsm_rx_count += 1
            self._on_bsm(decoded)
        elif driver_type == "PSM":
            # When marked as PSM but messageId=20 (BSM), use structure to disambiguate
            if message_id == 20:
                inferred_type = self._classify_msg_type_by_structure(decoded)
                if inferred_type == "bsm":
                    self._bsm_rx_count += 1
                    self._on_bsm(decoded)
                    return
            self._psm_rx_count += 1
            self._on_psm(decoded)
        elif driver_type == "SDSM":
            self._sdsm_rx_count += 1
            self._on_sdsm(decoded)
        elif driver_type == "TIM":
            self._tim_rx_count += 1
            self._on_tim(decoded)
        elif message_id == 18:
            self._map_rx_count += 1
            self._on_map(decoded)
        elif message_id == 19:
            self._spat_rx_count += 1
            self._on_spat(decoded)
        elif message_id == 20:
            # messageId=20 can be BSM or PSM; use structure to disambiguate
            inferred_type = self._classify_msg_type_by_structure(decoded)
            if inferred_type == "bsm":
                self._bsm_rx_count += 1
                self._on_bsm(decoded)
            else:
                self._psm_rx_count += 1
                self._on_psm(decoded)
        elif message_id == 32:
            self._psm_rx_count += 1
            self._on_psm(decoded)
        elif message_id == 28:
            self._sdsm_rx_count += 1
            self._on_sdsm(decoded)
        elif message_id == 41:
            self._sdsm_rx_count += 1
            self._on_sdsm(decoded)
        elif message_id == 31:
            self._tim_rx_count += 1
            self._on_tim(decoded)
        else:
            self._other_rx_count += 1

        self._log_counters_if_due()

    def _phase_color(self, phase: int) -> Tuple[float, float, float, float]:
        if phase in (5, 6):
            return 0.0, 0.85, 0.2, 0.95
        if phase in (7, 8, 9):
            return 1.0, 0.8, 0.0, 0.95
        if phase in (2, 3):
            return 0.95, 0.1, 0.1, 0.95
        if phase == 1:
            return 0.4, 0.4, 0.4, 0.95
        return 0.7, 0.7, 0.7, 0.9

    def _phase_name(self, phase: int) -> str:
        names = {
            1: "DARK",
            2: "STOP_THEN_PROCEED",
            3: "STOP",
            4: "PRE_MOVEMENT",
            5: "PERMISSIVE_GO",
            6: "PROTECTED_GO",
            7: "PERMISSIVE_CLEAR",
            8: "PROTECTED_CLEAR",
            9: "CAUTION",
        }
        return names.get(phase, "UNAVAILABLE")

    def _current_spat_reference_tenths(self, sg_state: Dict[str, Any]) -> Optional[float]:
        reference_tenths = sg_state.get("reference_tenths")
        rx_time_ns = sg_state.get("rx_time_ns")
        if not isinstance(reference_tenths, (int, float)) or not isinstance(rx_time_ns, int):
            return None

        now_ns = self.get_clock().now().nanoseconds
        elapsed_tenths = max(0.0, float(now_ns - rx_time_ns) / 1e8)
        return (float(reference_tenths) + elapsed_tenths) % 36000.0

    def _spat_label_suffix(self, sg_state: Dict[str, Any]) -> str:
        reference_tenths = self._current_spat_reference_tenths(sg_state)
        countdown_sec = _spat_timing_remaining_sec(sg_state.get("timing"), reference_tenths)
        if countdown_sec is None:
            return ""
        return f" | {countdown_sec:.1f}s"

    def _set_lifetime(self, marker: Marker) -> None:
        marker.lifetime.sec = int(self.marker_lifetime_sec)
        marker.lifetime.nanosec = int((self.marker_lifetime_sec - int(self.marker_lifetime_sec)) * 1e9)

    def _publish_map_spat_markers(self) -> None:
        if not self._dirty_map_spat:
            return

        marker_array = MarkerArray()
        marker_id = 0

        clear = Marker()
        clear.header.stamp = self.get_clock().now().to_msg()
        clear.header.frame_id = self.frame_id
        clear.action = Marker.DELETEALL
        marker_array.markers.append(clear)

        for inter_key, map_data in self._map_state.items():
            spat = self._spat_state.get(inter_key, {})
            countdown_candidates: List[float] = []

            for lane in map_data["lanes"]:
                phase = 0
                sg_state: Dict[str, Any] = {}
                sg = lane.get("signal_group")
                if isinstance(sg, int):
                    sg_state = spat.get(sg, {}) if isinstance(spat.get(sg), dict) else {}
                    phase = sg_state.get("phase", 0) if isinstance(sg_state.get("phase"), int) else 0
                    reference_tenths = self._current_spat_reference_tenths(sg_state)
                    countdown_sec = _spat_timing_remaining_sec(sg_state.get("timing"), reference_tenths)
                    if countdown_sec is not None:
                        countdown_candidates.append(countdown_sec)
                r, g, b, a = self._phase_color(phase)

                lane_marker = Marker()
                lane_marker.header.stamp = self.get_clock().now().to_msg()
                lane_marker.header.frame_id = self.frame_id
                lane_marker.ns = "lanes"
                lane_marker.id = marker_id
                marker_id += 1
                lane_marker.type = Marker.LINE_STRIP
                lane_marker.action = Marker.ADD
                lane_marker.scale.x = self.lane_line_width
                lane_marker.color.r = r
                lane_marker.color.g = g
                lane_marker.color.b = b
                lane_marker.color.a = a
                self._set_lifetime(lane_marker)

                for x, y in lane["points"]:
                    p = Point()
                    p.x = x
                    p.y = y
                    p.z = 0.0
                    lane_marker.points.append(p)
                marker_array.markers.append(lane_marker)

                label_marker = Marker()
                label_marker.header.stamp = self.get_clock().now().to_msg()
                label_marker.header.frame_id = self.frame_id
                label_marker.ns = "lane_labels"
                label_marker.id = marker_id
                marker_id += 1
                label_marker.type = Marker.TEXT_VIEW_FACING
                label_marker.action = Marker.ADD
                label_marker.scale.z = 1.3
                label_marker.color.r = 1.0
                label_marker.color.g = 1.0
                label_marker.color.b = 1.0
                label_marker.color.a = 0.95
                self._set_lifetime(label_marker)
                mid = lane["points"][len(lane["points"]) // 2]
                label_marker.pose.position.x = mid[0]
                label_marker.pose.position.y = mid[1]
                label_marker.pose.position.z = 1.5
                signal_part = f"SG:{sg}" if isinstance(sg, int) else "SG:-"
                label_marker.text = f"Lane {lane['lane_id']} | {signal_part} | {self._phase_name(phase)}{self._spat_label_suffix(sg_state)}"
                marker_array.markers.append(label_marker)

            next_change_text = ""
            if countdown_candidates:
                next_change_text = f" | next change {min(countdown_candidates):.1f}s"
            overlay_text = (
                f"Map/Spat RX encoded: {self._encoded_rx_count} | "
                f"decoded: {self._decoded_rx_count} | "
                f"not decoded: {self._undecoded_rx_count}{next_change_text}"
            )
            self._publish_overlay_text(overlay_text, kind="map_spat")

        self._pub_map_spat.publish(marker_array)
        self._dirty_map_spat = bool(self._spat_state)

    def _publish_bsm_markers(self) -> None:
        if not self._dirty_bsm:
            return

        marker_array = MarkerArray()
        marker_id = 0

        clear = Marker()
        clear.header.stamp = self.get_clock().now().to_msg()
        clear.header.frame_id = self.frame_id
        clear.action = Marker.DELETEALL
        marker_array.markers.append(clear)

        self.get_logger().debug(f"Publishing BSM markers: {len(self._bsm_tracks)} tracked vehicles, UTM={self.use_utm_global_coordinates}")

        for vehicle_id, track in self._bsm_tracks.items():
            marker_xy = self._latlon_to_marker_xy(track.lat_deg, track.lon_deg)
            if marker_xy is None:
                self.get_logger().debug(f"BSM marker skipped for {vehicle_id}: coordinate conversion returned None (anchor={self._anchor_lat_deg}, {self._anchor_lon_deg})")
                continue
            x, y = marker_xy
            
            self.get_logger().debug(f"BSM marker rendered for {vehicle_id}: x={x:.2f} y={y:.2f}")

            veh_marker = Marker()
            veh_marker.header.stamp = self.get_clock().now().to_msg()
            veh_marker.header.frame_id = self.frame_id
            veh_marker.ns = "bsm_vehicle_points"
            veh_marker.id = marker_id
            marker_id += 1
            veh_marker.type = Marker.SPHERE
            veh_marker.action = Marker.ADD
            veh_marker.pose.position.x = x
            veh_marker.pose.position.y = y
            veh_marker.pose.position.z = 0.8
            veh_marker.scale.x = self.bsm_point_size
            veh_marker.scale.y = self.bsm_point_size
            veh_marker.scale.z = self.bsm_point_size
            veh_marker.color.r = 0.1
            veh_marker.color.g = 0.8
            veh_marker.color.b = 1.0
            veh_marker.color.a = 0.95
            self._set_lifetime(veh_marker)
            marker_array.markers.append(veh_marker)

            lbl = Marker()
            lbl.header.stamp = self.get_clock().now().to_msg()
            lbl.header.frame_id = self.frame_id
            lbl.ns = "bsm_vehicle_labels"
            lbl.id = marker_id
            marker_id += 1
            lbl.type = Marker.TEXT_VIEW_FACING
            lbl.action = Marker.ADD
            lbl.pose.position.x = x
            lbl.pose.position.y = y
            lbl.pose.position.z = 2.2
            lbl.scale.z = 1.1
            lbl.color.r = 0.6
            lbl.color.g = 0.95
            lbl.color.b = 1.0
            lbl.color.a = 0.95
            self._set_lifetime(lbl)
            short_id = vehicle_id[:8]
            if track.speed_mps >= 0.0:
                lbl.text = f"BSM {short_id} v={track.speed_mps:.1f}m/s"
            else:
                lbl.text = f"BSM {short_id}"
            marker_array.markers.append(lbl)

        overlay_text = (
            f"BSM tracked: {len(self._bsm_tracks)} | "
            f"BSM RX: {self._bsm_rx_count} | "
            f"not decoded: {self._undecoded_rx_count}"
        )
        self._publish_overlay_text(overlay_text, kind="bsm")

        self._pub_bsm.publish(marker_array)
        self._dirty_bsm = False

    def _psm_color(self, user_type: str) -> Tuple[float, float, float, float]:
        user_type_lower = user_type.lower()
        if "cyclist" in user_type_lower or "bicycle" in user_type_lower:
            return 1.0, 0.85, 0.1, 0.95
        if "pedestrian" in user_type_lower:
            return 0.2, 0.9, 0.2, 0.95
        return 0.95, 0.25, 0.2, 0.95

    def _sdsm_color(self, obj_type_enum: int) -> Tuple[float, float, float, float]:
        if obj_type_enum == 1:  # VEHICLE
            return 0.0, 0.9, 1.0, 0.85  # Cyan
        elif obj_type_enum == 2:  # VRU
            return 1.0, 0.5, 0.0, 0.85  # Orange
        elif obj_type_enum == 3:  # ANIMAL
            return 0.5, 0.25, 0.0, 0.85  # Brown
        else:  # UNKNOWN
            return 0.5, 0.5, 0.5, 0.85  # Gray

    def _publish_psm_markers(self) -> None:
        self._prune_stale_psm_tracks()
        if not self._dirty_psm:
            return

        marker_array = MarkerArray()
        marker_id = 0

        clear = Marker()
        clear.header.stamp = self.get_clock().now().to_msg()
        clear.header.frame_id = self.frame_id
        clear.action = Marker.DELETEALL
        marker_array.markers.append(clear)

        for psm_id, track in self._psm_tracks.items():
            marker_xy = self._latlon_to_marker_xy(track.lat_deg, track.lon_deg)
            if marker_xy is None:
                continue
            x, y = marker_xy

            r, g, b, a = self._psm_color(track.user_type)

            psm_marker = Marker()
            psm_marker.header.stamp = self.get_clock().now().to_msg()
            psm_marker.header.frame_id = self.frame_id
            psm_marker.ns = "psm_tracks"
            psm_marker.id = marker_id
            marker_id += 1
            psm_marker.type = Marker.CYLINDER
            psm_marker.action = Marker.ADD
            psm_marker.pose.position.x = x
            psm_marker.pose.position.y = y
            psm_marker.pose.position.z = 0.8
            psm_marker.scale.x = self.psm_marker_size
            psm_marker.scale.y = self.psm_marker_size
            psm_marker.scale.z = 1.8
            psm_marker.color.r = r
            psm_marker.color.g = g
            psm_marker.color.b = b
            psm_marker.color.a = a
            self._set_lifetime(psm_marker)
            marker_array.markers.append(psm_marker)

            heading_deg = track.heading_deg
            if heading_deg is not None:
                heading_marker = Marker()
                heading_marker.header.stamp = self.get_clock().now().to_msg()
                heading_marker.header.frame_id = self.frame_id
                heading_marker.ns = "psm_heading"
                heading_marker.id = marker_id
                marker_id += 1
                heading_marker.type = Marker.ARROW
                heading_marker.action = Marker.ADD
                heading_marker.scale.x = 1.8
                heading_marker.scale.y = 0.25
                heading_marker.scale.z = 0.25
                heading_marker.color.r = r
                heading_marker.color.g = g
                heading_marker.color.b = b
                heading_marker.color.a = a
                self._set_lifetime(heading_marker)

                theta = math.radians(heading_deg)
                tail = Point()
                tail.x = x
                tail.y = y
                tail.z = 1.6
                tip = Point()
                tip.x = x + math.cos(theta) * 2.0
                tip.y = y + math.sin(theta) * 2.0
                tip.z = 1.6
                heading_marker.points = [tail, tip]
                marker_array.markers.append(heading_marker)

            lbl = Marker()
            lbl.header.stamp = self.get_clock().now().to_msg()
            lbl.header.frame_id = self.frame_id
            lbl.ns = "psm_labels"
            lbl.id = marker_id
            marker_id += 1
            lbl.type = Marker.TEXT_VIEW_FACING
            lbl.action = Marker.ADD
            lbl.pose.position.x = x
            lbl.pose.position.y = y
            lbl.pose.position.z = 2.5
            lbl.scale.z = 1.0
            lbl.color.r = 1.0
            lbl.color.g = 1.0
            lbl.color.b = 1.0
            lbl.color.a = 0.95
            self._set_lifetime(lbl)
            short_id = psm_id[:8]
            if track.speed_mps >= 0.0:
                lbl.text = f"PSM {track.user_type} {short_id} v={track.speed_mps:.1f}m/s"
            else:
                lbl.text = f"PSM {track.user_type} {short_id}"
            marker_array.markers.append(lbl)

        psm_overlay = (
            f"PSM tracked: {len(self._psm_tracks)} | "
            f"PSM RX: {self._psm_rx_count} | "
            f"not decoded: {self._undecoded_rx_count}"
        )
        self._publish_overlay_text(psm_overlay, kind="psm")

        self._pub_psm.publish(marker_array)
        self._dirty_psm = False

    def _publish_sdsm_markers(self) -> None:
        self._prune_stale_sdsm_tracks()
        if not self._dirty_sdsm:
            return

        marker_array = MarkerArray()
        marker_id = 0

        clear = Marker()
        clear.header.stamp = self.get_clock().now().to_msg()
        clear.header.frame_id = self.frame_id
        clear.action = Marker.DELETEALL
        marker_array.markers.append(clear)

        for sdsm_id, track in self._sdsm_tracks.items():
            marker_xy = self._latlon_to_marker_xy(track.lat_deg, track.lon_deg)
            if marker_xy is None:
                continue
            x, y = marker_xy

            r, g, b, a = self._sdsm_color(track.obj_type_enum)

            sdsm_marker = Marker()
            sdsm_marker.header.stamp = self.get_clock().now().to_msg()
            sdsm_marker.header.frame_id = self.frame_id
            sdsm_marker.ns = "sdsm_tracks"
            sdsm_marker.id = marker_id
            marker_id += 1
            sdsm_marker.type = Marker.CYLINDER
            sdsm_marker.action = Marker.ADD
            sdsm_marker.pose.position.x = x
            sdsm_marker.pose.position.y = y
            sdsm_marker.pose.position.z = 0.8
            sdsm_marker.scale.x = self.psm_marker_size
            sdsm_marker.scale.y = self.psm_marker_size
            sdsm_marker.scale.z = 1.8
            sdsm_marker.color.r = r
            sdsm_marker.color.g = g
            sdsm_marker.color.b = b
            sdsm_marker.color.a = a
            self._set_lifetime(sdsm_marker)
            marker_array.markers.append(sdsm_marker)

            heading_deg = track.heading_deg
            if heading_deg is not None:
                heading_marker = Marker()
                heading_marker.header.stamp = self.get_clock().now().to_msg()
                heading_marker.header.frame_id = self.frame_id
                heading_marker.ns = "sdsm_heading"
                heading_marker.id = marker_id
                marker_id += 1
                heading_marker.type = Marker.ARROW
                heading_marker.action = Marker.ADD
                heading_marker.scale.x = 1.8
                heading_marker.scale.y = 0.25
                heading_marker.scale.z = 0.25
                heading_marker.color.r = r
                heading_marker.color.g = g
                heading_marker.color.b = b
                heading_marker.color.a = a
                self._set_lifetime(heading_marker)

                theta = math.radians(heading_deg)
                tail = Point()
                tail.x = x
                tail.y = y
                tail.z = 1.6
                tip = Point()
                tip.x = x + math.cos(theta) * 2.0
                tip.y = y + math.sin(theta) * 2.0
                tip.z = 1.6
                heading_marker.points = [tail, tip]
                marker_array.markers.append(heading_marker)

            lbl = Marker()
            lbl.header.stamp = self.get_clock().now().to_msg()
            lbl.header.frame_id = self.frame_id
            lbl.ns = "sdsm_labels"
            lbl.id = marker_id
            marker_id += 1
            lbl.type = Marker.TEXT_VIEW_FACING
            lbl.action = Marker.ADD
            lbl.pose.position.x = x
            lbl.pose.position.y = y
            lbl.pose.position.z = 2.5
            lbl.scale.z = 1.0
            lbl.color.r = 1.0
            lbl.color.g = 1.0
            lbl.color.b = 1.0
            lbl.color.a = 0.95
            self._set_lifetime(lbl)
            short_id = sdsm_id[:16]
            if track.speed_mps >= 0.0:
                lbl.text = f"SDSM {track.obj_type} {short_id} v={track.speed_mps:.1f}m/s"
            else:
                lbl.text = f"SDSM {track.obj_type} {short_id}"
            marker_array.markers.append(lbl)

        sdsm_overlay = (
            f"SDSM tracked: {len(self._sdsm_tracks)} | "
            f"SDSM RX: {self._sdsm_rx_count} | "
            f"not decoded: {self._undecoded_rx_count}"
        )
        self._publish_overlay_text(sdsm_overlay, kind="sdsm")

        self._pub_sdsm.publish(marker_array)
        self._dirty_sdsm = False

    def _publish_tim_markers(self) -> None:
        self._prune_stale_tim_tracks()
        if not self._dirty_tim:
            return

        marker_array = MarkerArray()
        marker_id = 0

        clear = Marker()
        clear.header.stamp = self.get_clock().now().to_msg()
        clear.header.frame_id = self.frame_id
        clear.action = Marker.DELETEALL
        marker_array.markers.append(clear)

        if (not self.use_utm_global_coordinates) and (self._anchor_lat_deg is None or self._anchor_lon_deg is None):
            self._pub_tim.publish(marker_array)
            self._dirty_tim = False
            return

        x_base, y_base = 0.0, 0.0
        fallback_idx = 0
        for advisory_id, track in self._tim_tracks.items():
            if track.lat_deg is not None and track.lon_deg is not None:
                marker_xy = self._latlon_to_marker_xy(track.lat_deg, track.lon_deg)
                if marker_xy is None:
                    continue
                x, y = marker_xy
            else:
                # No geolocation in TIM payload: anchor advisories near map center with offset.
                x = x_base + 3.5
                y = y_base - (fallback_idx * 2.2)
                fallback_idx += 1

            pin = Marker()
            pin.header.stamp = self.get_clock().now().to_msg()
            pin.header.frame_id = self.frame_id
            pin.ns = "tim_advisory_points"
            pin.id = marker_id
            marker_id += 1
            pin.type = Marker.CUBE
            pin.action = Marker.ADD
            pin.pose.position.x = x
            pin.pose.position.y = y
            pin.pose.position.z = 1.0
            pin.scale.x = 0.9
            pin.scale.y = 0.9
            pin.scale.z = 0.9
            pin.color.r = 1.0
            pin.color.g = 0.55
            pin.color.b = 0.15
            pin.color.a = 0.95
            self._set_lifetime(pin)
            marker_array.markers.append(pin)

            if track.radius_m is not None and track.radius_m > 0.5 and track.lat_deg is not None and track.lon_deg is not None:
                ring = Marker()
                ring.header.stamp = self.get_clock().now().to_msg()
                ring.header.frame_id = self.frame_id
                ring.ns = "tim_advisory_radius"
                ring.id = marker_id
                marker_id += 1
                ring.type = Marker.LINE_STRIP
                ring.action = Marker.ADD
                ring.scale.x = 0.25
                ring.color.r = 1.0
                ring.color.g = 0.7
                ring.color.b = 0.2
                ring.color.a = 0.92
                self._set_lifetime(ring)

                steps = 36
                for step in range(steps + 1):
                    theta = (2.0 * math.pi * step) / steps
                    p = Point()
                    p.x = x + math.cos(theta) * track.radius_m
                    p.y = y + math.sin(theta) * track.radius_m
                    p.z = 0.2
                    ring.points.append(p)
                marker_array.markers.append(ring)

            txt = Marker()
            txt.header.stamp = self.get_clock().now().to_msg()
            txt.header.frame_id = self.frame_id
            txt.ns = "tim_advisory_labels"
            txt.id = marker_id
            marker_id += 1
            txt.type = Marker.TEXT_VIEW_FACING
            txt.action = Marker.ADD
            txt.pose.position.x = x
            txt.pose.position.y = y
            txt.pose.position.z = 2.0
            txt.scale.z = 0.95
            txt.color.r = 1.0
            txt.color.g = 0.95
            txt.color.b = 0.80
            txt.color.a = 0.98
            self._set_lifetime(txt)
            short_id = advisory_id[:8]
            prefix = f"TIM {track.frame_type} {short_id}"
            txt.text = f"{prefix}\n{track.text}"
            marker_array.markers.append(txt)

        tim_overlay = (
            f"TIM tracked: {len(self._tim_tracks)} | "
            f"TIM RX: {self._tim_rx_count} | "
            f"not decoded: {self._undecoded_rx_count}"
        )
        self._publish_overlay_text(tim_overlay, kind="tim")

        self._pub_tim.publish(marker_array)
        self._dirty_tim = False

    def _publish_markers(self) -> None:
        self._publish_map_spat_markers()
        self._publish_bsm_markers()
        self._publish_psm_markers()
        self._publish_sdsm_markers()
        self._publish_tim_markers()


def main() -> None:
    rclpy.init()
    node = V2XInboundMarkerVisualizer()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
