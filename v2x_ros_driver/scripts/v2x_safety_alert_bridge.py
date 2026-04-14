#!/usr/bin/env python3

import json
import hashlib
import threading
import time
from datetime import datetime, timezone
from typing import Any, Dict, List, Optional, Set, Tuple

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from visualization_msgs.msg import Marker


def _jsonify(obj: Any, depth: int = 0) -> Any:
    if depth > 4:
        return str(obj)
    if obj is None or isinstance(obj, (bool, int, float, str)):
        return obj
    if isinstance(obj, (list, tuple, set)):
        return [_jsonify(v, depth + 1) for v in obj]
    if isinstance(obj, dict):
        return {str(k): _jsonify(v, depth + 1) for k, v in obj.items()}
    if hasattr(obj, "__dict__"):
        return {k: _jsonify(v, depth + 1) for k, v in vars(obj).items() if not k.startswith("_")}
    return str(obj)


class V2XSafetyAlertBridge(Node):
    def __init__(self) -> None:
        super().__init__("v2x_safety_alert_bridge")

        self.declare_parameter("obu_host", "127.0.0.1")
        self.declare_parameter("alert_topic", "/v2x/safety_alerts")
        self.declare_parameter("mapped_alert_topic", "/v2x/safety_alert_mapped")
        self.declare_parameter("debug_raw_topic", "/v2x/safety_alert_debug_raw")
        self.declare_parameter("abbrev_marker_topic", "/v2x/safety_alert_abbrev_marker")
        self.declare_parameter("abbrev_marker_frame_id", "map")
        self.declare_parameter("abbrev_marker_z", 4.0)
        self.declare_parameter("reconnect_delay_sec", 2.0)
        self.declare_parameter("subscription_key", 0)
        self.declare_parameter("derive_cff_only", True)
        self.declare_parameter("publish_raw_passthrough", False)
        self.declare_parameter("dedupe_window_sec", 0.75)
        self.declare_parameter("critical_ttc_sec", 2.0)
        self.declare_parameter("warning_ttc_sec", 4.0)

        self._obu_host = self.get_parameter("obu_host").get_parameter_value().string_value
        self._alert_topic = self.get_parameter("alert_topic").get_parameter_value().string_value
        self._mapped_alert_topic = self.get_parameter("mapped_alert_topic").get_parameter_value().string_value
        self._debug_raw_topic = self.get_parameter("debug_raw_topic").get_parameter_value().string_value
        self._abbrev_marker_topic = self.get_parameter("abbrev_marker_topic").get_parameter_value().string_value
        self._abbrev_marker_frame_id = self.get_parameter("abbrev_marker_frame_id").get_parameter_value().string_value
        self._abbrev_marker_z = self.get_parameter("abbrev_marker_z").get_parameter_value().double_value
        self._reconnect_delay_sec = self.get_parameter("reconnect_delay_sec").get_parameter_value().double_value
        self._subscription_key = self.get_parameter("subscription_key").get_parameter_value().integer_value
        self._derive_cff_only = self.get_parameter("derive_cff_only").get_parameter_value().bool_value
        self._publish_raw_passthrough = self.get_parameter("publish_raw_passthrough").get_parameter_value().bool_value
        self._dedupe_window_sec = self.get_parameter("dedupe_window_sec").get_parameter_value().double_value
        self._critical_ttc_sec = self.get_parameter("critical_ttc_sec").get_parameter_value().double_value
        self._warning_ttc_sec = self.get_parameter("warning_ttc_sec").get_parameter_value().double_value

        self._alert_pub = self.create_publisher(String, self._alert_topic, 20)
        self._mapped_alert_pub = self.create_publisher(String, self._mapped_alert_topic, 20)
        self._debug_raw_pub = self.create_publisher(String, self._debug_raw_topic, 20)
        self._abbrev_marker_pub = self.create_publisher(Marker, self._abbrev_marker_topic, 10)
        self._last_alert_by_id: Dict[str, float] = {}
        self._stop_event = threading.Event()
        self._worker = threading.Thread(target=self._run_sdk_session_loop, daemon=True)
        self._worker.start()

        self.get_logger().info(
            (
                "Started SDK safety alert bridge. obu_host=%s alert_topic=%s reconnect_delay=%.1fs "
                "derive_cff_only=%s publish_raw_passthrough=%s mapped_topic=%s raw_topic=%s"
            )
            % (
                self._obu_host,
                self._alert_topic,
                self._reconnect_delay_sec,
                str(self._derive_cff_only),
                str(self._publish_raw_passthrough),
                self._mapped_alert_topic,
                self._debug_raw_topic,
            )
        )

        self._inference_keywords: Dict[str, Tuple[str, ...]] = {
            "BSW": ("blindspot", "blind_spot", "bsw", "lcw"),
            "EEBL": ("eebl", "electronic emergency brake", "hardbraking"),
            "GLOSA": ("glosa", "time_to_green", "optimal speed", "green light"),
            "IMA": ("ima", "intersection movement", "intersection alert"),
            "WWR": ("road weather", "surface condition", "slippery", "ice", "wet"),
            "WWE": ("weather", "fog", "storm", "wind", "extreme weather"),
            "TTG": ("ttg", "time_to_green"),
            "CLW": ("clw", "curve", "lane warning"),
            "FCW": ("fcw", "forward collision", "time_to_collision", "ttc"),
            "HLW": ("hlw", "headlight", "high beam"),
            "LCA": ("lca", "lane change", "lcw", "adjacent lane"),
            "RLV": ("rlv", "redlight", "red light violation", "signal violation"),
            "SW": ("swerve", "swerving", "yaw event"),
            "LTA": ("lta", "left turn assist"),
            "RTA": ("rta", "right turn assist"),
            "DNPW": ("dnpw", "do not pass"),
            "PCW": ("pcw", "pedestrian", "crosswalk", "vru"),
            "GCW": ("gcw", "generic collision"),
            "AWW": ("aww", "adverse weather warning"),
            "OHV": ("ohv", "over height", "over-height"),
            "REW": ("rew", "rear end"),
            "RWW": ("rww", "road work", "work zone", "roadwork"),
        }

    def destroy_node(self) -> bool:
        self._stop_event.set()
        if self._worker.is_alive():
            self._worker.join(timeout=3.0)
        return super().destroy_node()

    def _iter_paths(self, obj: Any, prefix: str = "") -> List[Tuple[str, Any]]:
        paths: List[Tuple[str, Any]] = []
        if isinstance(obj, dict):
            for k, v in obj.items():
                key = str(k)
                child = f"{prefix}.{key}" if prefix else key
                paths.extend(self._iter_paths(v, child))
            return paths
        if isinstance(obj, list):
            for idx, v in enumerate(obj):
                child = f"{prefix}[{idx}]"
                paths.extend(self._iter_paths(v, child))
            return paths
        paths.append((prefix.lower(), obj))
        return paths

    def _derive_cff(self, key: int, data_obj: Dict[str, Any], buffer_len: int) -> Optional[Dict[str, Any]]:
        leaves = self._iter_paths(data_obj)
        lower_paths = [p for p, _ in leaves]
        has_cff_marker = any(
            (
                "cff" in p
                or "collision" in p
                or "forward" in p
                or "time_to_collision" in p
                or "timetocollision" in p
                or p.endswith(".ttc")
            )
            for p in lower_paths
        )
        if not has_cff_marker:
            return None

        def pick_float(candidates: Tuple[str, ...]) -> Optional[float]:
            for p, v in leaves:
                if not isinstance(v, (int, float, str)):
                    continue
                if not any(c in p for c in candidates):
                    continue
                try:
                    return float(v)
                except (TypeError, ValueError):
                    continue
            return None

        ttc_sec = pick_float(("time_to_collision", "timetocollision", ".ttc", "ttc"))
        distance_m = pick_float(("distance", "range", "headway", "gap"))
        closing_speed_mps = pick_float(("closing_speed", "relative_speed", "approach_speed", "delta_v"))

        severity = "info"
        if ttc_sec is not None:
            if ttc_sec <= self._critical_ttc_sec:
                severity = "critical"
            elif ttc_sec <= self._warning_ttc_sec:
                severity = "warning"

        signature = {
            "key": int(key),
            "ttc_sec": None if ttc_sec is None else round(ttc_sec, 2),
            "distance_m": None if distance_m is None else round(distance_m, 2),
            "closing_speed_mps": None if closing_speed_mps is None else round(closing_speed_mps, 2),
            "buffer_len": int(buffer_len),
        }
        alert_id = hashlib.sha1(json.dumps(signature, sort_keys=True).encode("utf-8")).hexdigest()[:12]

        return {
            "type": "cff",
            "severity": severity,
            "ttc_sec": ttc_sec,
            "distance_m": distance_m,
            "closing_speed_mps": closing_speed_mps,
            "alert_id": alert_id,
            "signature": signature,
        }

    def _should_publish(self, alert_id: str) -> bool:
        now_s = time.monotonic()
        last_s = self._last_alert_by_id.get(alert_id)
        if last_s is not None and (now_s - last_s) < self._dedupe_window_sec:
            return False

        self._last_alert_by_id[alert_id] = now_s
        if len(self._last_alert_by_id) > 512:
            cutoff = now_s - max(10.0, self._dedupe_window_sec * 4.0)
            self._last_alert_by_id = {k: t for k, t in self._last_alert_by_id.items() if t >= cutoff}
        return True

    def _classify_alert_codes(self, data_obj: Dict[str, Any], derived: Optional[Dict[str, Any]]) -> List[Dict[str, Any]]:
        leaves = self._iter_paths(data_obj)
        lower_paths = [p for p, _ in leaves]
        lower_blob = json.dumps(data_obj, separators=(",", ":")).lower()
        codes: Dict[str, Dict[str, Any]] = {}

        def add(code: str, confidence: str, reason: str) -> None:
            if code not in codes:
                codes[code] = {"code": code, "confidence": confidence, "reason": reason}

        if any("j2945slash1eebl" in p for p in lower_paths):
            add("EEBL", "high", "explicit_j2945")
        if any("j2945slash1fcw" in p for p in lower_paths):
            add("FCW", "high", "explicit_j2945")
        if any("j2945slash1bswlcw" in p for p in lower_paths):
            add("BSW", "high", "explicit_j2945")
            add("LCA", "medium", "explicit_j2945_bsw_lcw")
        if any("j2945slash1ima" in p for p in lower_paths):
            add("IMA", "high", "explicit_j2945")
        if any("j2945slash1lta" in p for p in lower_paths):
            add("LTA", "high", "explicit_j2945")
        if any("j2945slash1clw" in p for p in lower_paths):
            add("CLW", "high", "explicit_j2945")
        if any("redlightviolationwarn" in p for p in lower_paths):
            add("RLV", "high", "explicit_redlight_violation")

        if derived is not None:
            add("FCW", "medium", "derived_ttc")

        has_other = any("otheralert" in p or "otherwarning" in p for p in lower_paths)
        if has_other:
            matched_any = False
            for code, keywords in self._inference_keywords.items():
                if any(k in lower_blob for k in keywords):
                    add(code, "low", "inferred_from_other_payload")
                    matched_any = True
            if not matched_any:
                add("OTHER", "low", "other_without_match")

        if not codes:
            for code, keywords in self._inference_keywords.items():
                if any(k in lower_blob for k in keywords):
                    add(code, "low", "inferred_payload_keyword")

        return [codes[k] for k in sorted(codes.keys())]

    def _publish_abbrev_marker(self, abbreviations: List[str]) -> None:
        msg = Marker()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = self._abbrev_marker_frame_id
        msg.ns = "safety_alert_abbrev"
        msg.id = 1

        if not abbreviations:
            msg.action = Marker.DELETE
            self._abbrev_marker_pub.publish(msg)
            return

        msg.type = Marker.TEXT_VIEW_FACING
        msg.action = Marker.ADD
        msg.pose.position.x = 0.0
        msg.pose.position.y = 0.0
        msg.pose.position.z = float(self._abbrev_marker_z)
        msg.scale.z = 1.1
        msg.color.r = 1.0
        msg.color.g = 1.0
        msg.color.b = 0.2
        msg.color.a = 0.95
        msg.text = " | ".join(abbreviations)
        msg.lifetime.sec = 1
        msg.lifetime.nanosec = 0
        self._abbrev_marker_pub.publish(msg)

    def _publish_alert(self, event_kind: str, key: int, data: Any, buffer: bytes) -> None:
        data_obj = _jsonify(data)
        if not isinstance(data_obj, dict):
            data_obj = {"value": data_obj}

        stamp = datetime.now(timezone.utc).isoformat()
        raw_payload: Dict[str, Any] = {
            "source": "commsignia_sdk",
            "event_kind": event_kind,
            "key": int(key),
            "buffer_len": len(buffer) if buffer is not None else 0,
            "stamp": stamp,
            "data": data_obj,
        }

        derived = self._derive_cff(key, data_obj, len(buffer) if buffer is not None else 0)
        mapped_alerts = self._classify_alert_codes(data_obj, derived)
        has_alert_signal = derived is not None or bool(mapped_alerts)

        if self._derive_cff_only and not has_alert_signal and not self._publish_raw_passthrough:
            return

        if derived is not None:
            dedupe_id = derived["alert_id"]
        elif mapped_alerts:
            mapped_sig = {
                "key": int(key),
                "codes": [m["code"] for m in mapped_alerts],
                "buffer_len": len(buffer) if buffer is not None else 0,
            }
            dedupe_id = hashlib.sha1(json.dumps(mapped_sig, sort_keys=True).encode("utf-8")).hexdigest()[:12]
        else:
            dedupe_id = hashlib.sha1(
                json.dumps(
                    {
                        "key": int(key),
                        "buffer_len": len(buffer) if buffer is not None else 0,
                        "data": data_obj,
                    },
                    sort_keys=True,
                    default=str,
                ).encode("utf-8")
            ).hexdigest()[:12]

        if not self._should_publish(dedupe_id):
            return

        raw_msg = String()
        raw_msg.data = json.dumps(raw_payload, separators=(",", ":"))
        self._debug_raw_pub.publish(raw_msg)

        payload: Dict[str, Any] = {
            "source": "commsignia_sdk",
            "event_kind": event_kind,
            "key": int(key),
            "buffer_len": len(buffer) if buffer is not None else 0,
            "stamp": stamp,
            "alert_id": dedupe_id,
        }
        if derived is not None:
            payload["alert"] = derived
        if mapped_alerts:
            payload["mapped_alerts"] = mapped_alerts
            payload["abbreviations"] = [m["code"] for m in mapped_alerts]
        if self._publish_raw_passthrough or not has_alert_signal:
            payload["data"] = data_obj

        safety_msg = String()
        safety_msg.data = json.dumps(payload, separators=(",", ":"))
        self._alert_pub.publish(safety_msg)

        mapped_msg = String()
        mapped_msg.data = json.dumps(
            {
                "source": "commsignia_sdk",
                "event_kind": event_kind,
                "key": int(key),
                "stamp": stamp,
                "alert_id": dedupe_id,
                "mapped_alerts": mapped_alerts,
                "abbreviations": [m["code"] for m in mapped_alerts],
            },
            separators=(",", ":"),
        )
        self._mapped_alert_pub.publish(mapped_msg)

        self._publish_abbrev_marker([m["code"] for m in mapped_alerts])

    def _callback_facility(self, key: int, data: Any, buffer: bytes) -> None:
        self._publish_alert("facility_rx", key, data, buffer)

    def _resolve_subscribe_key(self, pycmssdk_module: Any) -> int:
        key = int(self._subscription_key)
        if key == -1:
            wildcard: Optional[int] = getattr(pycmssdk_module, "WILDCARD", None)
            if wildcard is not None:
                return int(wildcard)
            fac_all: Optional[int] = getattr(pycmssdk_module, "FAC_SUBSCRIBE_ALL", None)
            if fac_all is not None:
                return int(fac_all)
            return 0
        return key

    def _run_sdk_session_loop(self) -> None:
        while rclpy.ok() and not self._stop_event.is_set():
            try:
                import pycmssdk
                from pycmssdk import create_cms_api
            except ImportError:
                self.get_logger().error(
                    "pycmssdk is not installed. Install the Commsignia Remote Python SDK wheel and restart."
                )
                return

            try:
                subscribe_key = self._resolve_subscribe_key(pycmssdk)
                with create_cms_api(host=self._obu_host) as api:
                    if not hasattr(api, "fac_subscribe"):
                        raise RuntimeError("Connected SDK object does not expose fac_subscribe")

                    api.fac_subscribe(subscribe_key, self._callback_facility)
                    self.get_logger().info(
                        "Connected to OBU SDK at %s and subscribed via fac_subscribe key=%d",
                        self._obu_host,
                        subscribe_key,
                    )
                    self.get_logger().warn(
                        "SDK 20.85 publishes facility receive notifications via fac_subscribe; "
                        "native DriverAlert safety-app events are not exposed as a direct subscribe API in this SDK package."
                    )
                    while rclpy.ok() and not self._stop_event.is_set():
                        time.sleep(0.25)
            except Exception as e:
                self.get_logger().warn(
                    "SDK session error (%s). Reconnecting in %.1fs"
                    % (str(e), self._reconnect_delay_sec)
                )
                time.sleep(self._reconnect_delay_sec)


def main(args=None) -> None:
    rclpy.init(args=args)
    node = V2XSafetyAlertBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
