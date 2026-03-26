#!/usr/bin/env python3

import contextlib
import io
import importlib
import json
import math
import sys
from pathlib import Path
from dataclasses import dataclass
from typing import Dict, List, Optional, Tuple

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


def normalize_bsm_id(raw_id) -> str:
    if isinstance(raw_id, list):
        return "".join(f"{int(v) & 0xFF:02x}" for v in raw_id)
    if isinstance(raw_id, str):
        return "".join(ch for ch in raw_id.lower() if ch in "0123456789abcdef")
    return str(raw_id).lower()


class V2XInboundMarkerVisualizer(Node):
    def __init__(self) -> None:
        super().__init__("v2x_inbound_marker_visualizer")

        self.inbound_topic = self.declare_parameter("inbound_topic", "/comms/inbound_binary_msg").value
        self.marker_topic = self.declare_parameter("marker_topic", "/v2x/map_spat_markers").value
        self.bsm_marker_topic = self.declare_parameter("bsm_marker_topic", "/v2x/bsm_markers").value
        self.frame_id = self.declare_parameter("frame_id", "map").value
        self.publish_rate_hz = float(self.declare_parameter("publish_rate_hz", 10.0).value)
        self.lane_line_width = float(self.declare_parameter("lane_line_width", 0.6).value)
        self.bsm_point_size = float(self.declare_parameter("bsm_point_size", 1.2).value)
        self.marker_lifetime_sec = float(self.declare_parameter("marker_lifetime_sec", 1.5).value)
        self.enable_text_overlay = bool(self.declare_parameter("enable_text_overlay", True).value)
        self.enable_deep_scan = bool(self.declare_parameter("enable_deep_scan", True).value)
        self.counter_log_period_sec = float(self.declare_parameter("counter_log_period_sec", 2.0).value)
        self.node_unit_m = float(self.declare_parameter("map_node_unit_m", 0.01).value)
        self.prefer_obu_bsm_anchor = bool(self.declare_parameter("prefer_obu_bsm_anchor", True).value)
        self.obu_reference_bsm_id = normalize_bsm_id(
            self.declare_parameter("obu_reference_bsm_id", "e153df70").value
        )
        self._logged_map_schema = False

        try:
            j2735_202409 = _try_load_j2735_decoder_module()
        except ImportError as exc:
            raise RuntimeError(
                "Missing Python decoder dependency 'j2735_202409'. Install with: "
                "activate /home/jonaslo96/ros2_drivers/.venv (or your project venv) and install the wheel: "
                "pip3 install pycrate --upgrade && pip3 install j2735_202409*.whl"
            ) from exc

        self._message_frame = j2735_202409.MessageFrame.MessageFrame
        self._map_state: Dict[str, dict] = {}
        self._map_raw: Dict[str, dict] = {}
        self._spat_state: Dict[str, Dict[int, int]] = {}
        self._bsm_tracks: Dict[str, BsmTrackPoint] = {}
        self._encoded_rx_count = 0
        self._decoded_rx_count = 0
        self._undecoded_rx_count = 0
        self._last_counter_log_ns = 0
        self._anchor_lat_deg: Optional[float] = None
        self._anchor_lon_deg: Optional[float] = None
        self._anchor_source: str = "unknown"
        self._dirty_map_spat = True
        self._dirty_bsm = True

        self._sub = self.create_subscription(ByteArray, self.inbound_topic, self._on_inbound, 200)
        self._pub_map_spat = self.create_publisher(MarkerArray, self.marker_topic, 10)
        self._pub_bsm = self.create_publisher(MarkerArray, self.bsm_marker_topic, 10)

        self._overlay_pub_map_spat = None
        self._overlay_pub_bsm = None
        if self.enable_text_overlay and OverlayText is not None:
            self._overlay_pub_map_spat = self.create_publisher(OverlayText, "/v2x/map_spat_overlay_text", 10)
            self._overlay_pub_bsm = self.create_publisher(OverlayText, "/v2x/bsm_overlay_text", 10)
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
            f"obu_reference_bsm_id={self.obu_reference_bsm_id}"
        )

    def _publish_overlay_text(self, text: str, is_map_spat: bool) -> None:
        if OverlayText is None:
            return
        pub = self._overlay_pub_map_spat if is_map_spat else self._overlay_pub_bsm
        if pub is None:
            return

        msg = OverlayText()
        msg.action = OverlayText.ADD
        msg.width = 800
        msg.height = 80

        # jsk_rviz_plugins uses left/top, while rviz_2d_overlay_msgs
        # uses alignment + horizontal_distance/vertical_distance.
        if hasattr(msg, "left") and hasattr(msg, "top"):
            msg.left = 10
            msg.top = 10 if is_map_spat else 95
        else:
            msg.horizontal_alignment = OverlayText.LEFT
            msg.vertical_alignment = OverlayText.TOP
            msg.horizontal_distance = 10
            msg.vertical_distance = 10 if is_map_spat else 95

        msg.text_size = 14.0
        msg.line_width = 2
        msg.font = "DejaVu Sans Mono"

        # Foreground text color
        msg.fg_color.r = 1.0 if is_map_spat else 0.7
        msg.fg_color.g = 1.0 if is_map_spat else 0.95
        msg.fg_color.b = 0.2 if is_map_spat else 1.0
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
                f"bsm_tracked={len(self._bsm_tracks)}"
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
        if self._anchor_lat_deg is None or self._anchor_lon_deg is None:
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
        inter_origin_x, inter_origin_y = latlon_to_local_xy(
            ref_lat,
            ref_lon,
            self._anchor_lat_deg,
            self._anchor_lon_deg,
        )

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
                    if self._anchor_lat_deg is not None and self._anchor_lon_deg is not None:
                        current_x, current_y = latlon_to_local_xy(
                            node_lat,
                            node_lon,
                            self._anchor_lat_deg,
                            self._anchor_lon_deg,
                        )
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
        if self._anchor_lat_deg is None or self._anchor_lon_deg is None:
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

        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            inter_id = inter.get("id", {})
            if not isinstance(inter_id, dict):
                continue

            states = inter.get("states", [])
            if not isinstance(states, list):
                continue

            sg_to_phase: Dict[int, int] = {}
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
                    sg_to_phase[sg] = phase_map.get(event_state, 0)

            key = self._intersection_key(inter_id)
            if self._spat_state.get(key) != sg_to_phase:
                self._spat_state[key] = sg_to_phase
                self._dirty_map_spat = True

    def _on_bsm(self, decoded: dict) -> None:
        if self._anchor_lat_deg is None or self._anchor_lon_deg is None:
            return

        value = decoded.get("value")
        if not isinstance(value, dict):
            return
        core = value.get("coreData", {})
        if not isinstance(core, dict):
            return

        lat_raw = core.get("lat")
        lon_raw = core.get("long")
        if not isinstance(lon_raw, int):
            lon_raw = core.get("lon")
        if not isinstance(lat_raw, int) or not isinstance(lon_raw, int):
            return

        bsm_lat = lat_raw * 1e-7
        bsm_lon = lon_raw * 1e-7

        speed_raw = core.get("speed")
        speed_mps = speed_raw * 0.02 if isinstance(speed_raw, int) and speed_raw != 8191 else -1.0

        vehicle_id = normalize_bsm_id(core.get("id", "unknown"))

        if self.prefer_obu_bsm_anchor and vehicle_id == self.obu_reference_bsm_id:
            self._set_anchor_from_obu(bsm_lat, bsm_lon)

        previous = self._bsm_tracks.get(vehicle_id)
        new_point = BsmTrackPoint(lat_deg=bsm_lat, lon_deg=bsm_lon, speed_mps=speed_mps)
        if previous is None:
            self._bsm_tracks[vehicle_id] = new_point
            self._dirty_bsm = True
            return

        if (
            abs(previous.lat_deg - new_point.lat_deg) > 1e-7
            or abs(previous.lon_deg - new_point.lon_deg) > 1e-7
            or abs(previous.speed_mps - new_point.speed_mps) > 0.1
        ):
            self._bsm_tracks[vehicle_id] = new_point
            self._dirty_bsm = True

    def _on_inbound(self, msg: ByteArray) -> None:
        payload = bytes(msg.content)
        if not payload:
            return

        self._encoded_rx_count += 1
        self._dirty_map_spat = True
        self._dirty_bsm = True

        decoded = self._decode_payload(payload)
        if decoded is None:
            self._undecoded_rx_count += 1
            self._log_counters_if_due()
            return

        self._decoded_rx_count += 1

        message_id = decoded.get("messageId")
        if message_id == 18:
            self._on_map(decoded)
        elif message_id == 19:
            self._on_spat(decoded)
        elif message_id == 20:
            self._on_bsm(decoded)

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

            for lane in map_data["lanes"]:
                phase = 0
                sg = lane.get("signal_group")
                if isinstance(sg, int):
                    phase = spat.get(sg, 0)
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
                label_marker.text = f"Lane {lane['lane_id']} | {signal_part} | {self._phase_name(phase)}"
                marker_array.markers.append(label_marker)

            overlay_text = (
                f"RX encoded: {self._encoded_rx_count} | "
                f"decoded: {self._decoded_rx_count} | "
                f"not decoded: {self._undecoded_rx_count}"
            )
            self._publish_overlay_text(overlay_text, is_map_spat=True)

        self._pub_map_spat.publish(marker_array)
        self._dirty_map_spat = False

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

        for vehicle_id, track in self._bsm_tracks.items():
            if self._anchor_lat_deg is None or self._anchor_lon_deg is None:
                continue
            x, y = latlon_to_local_xy(track.lat_deg, track.lon_deg, self._anchor_lat_deg, self._anchor_lon_deg)

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
            f"RX encoded: {self._encoded_rx_count} | "
            f"not decoded: {self._undecoded_rx_count}"
        )
        self._publish_overlay_text(overlay_text, is_map_spat=False)

        self._pub_bsm.publish(marker_array)
        self._dirty_bsm = False

    def _publish_markers(self) -> None:
        self._publish_map_spat_markers()
        self._publish_bsm_markers()


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
