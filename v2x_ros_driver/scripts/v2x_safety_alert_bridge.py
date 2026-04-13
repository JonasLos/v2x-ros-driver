#!/usr/bin/env python3

import json
import threading
import time
from datetime import datetime, timezone
from typing import Any, Dict, Optional

import rclpy
from carma_driver_msgs.msg import ByteArray
from rclpy.node import Node
from std_msgs.msg import String


# Best-effort safety mapping from facility message types. This does not indicate
# native safety app trigger state; it classifies incoming V2X content into
# safety-relevant buckets for downstream ROS consumers.
SAFETY_FACILITY_TYPE_MAP = {
    "FAC_MSG_US_BSM": {"alert_class": "basic_safety_message", "severity": "info"},
    "FAC_MSG_US_ICA": {"alert_class": "intersection_collision", "severity": "critical"},
    "FAC_MSG_US_RSA": {"alert_class": "road_side_alert", "severity": "warning"},
    "FAC_MSG_US_RWM": {"alert_class": "road_weather", "severity": "warning"},
    "FAC_MSG_US_RSM": {"alert_class": "road_safety", "severity": "warning"},
    "FAC_MSG_US_SPAT": {"alert_class": "signal_phase_timing", "severity": "info"},
    "FAC_MSG_US_TSPAT": {"alert_class": "traffic_signal_phase_timing", "severity": "info"},
    "FAC_MSG_US_SRM": {"alert_class": "signal_request", "severity": "info"},
    "FAC_MSG_US_SSM": {"alert_class": "signal_status", "severity": "info"},
    "FAC_MSG_US_TIM": {"alert_class": "traveler_information", "severity": "info"},
    "FAC_MSG_US_PSM": {"alert_class": "personal_safety", "severity": "warning"},
    "FAC_MSG_US_PSM2": {"alert_class": "personal_safety_v2", "severity": "warning"},
    "FAC_MSG_US_SDSM": {"alert_class": "sensor_data_sharing", "severity": "info"},
}

# Map facility message types to the higher-level safety applications that may
# consume or trigger from those message streams.
FACILITY_TO_SAFETY_APPS = {
    "FAC_MSG_US_BSM": ["fcw", "bsw", "lca", "eebl", "clw", "dnp", "svw", "evw", "gcw"],
    "FAC_MSG_US_ICA": ["ima", "lta", "rta", "gcw"],
    "FAC_MSG_US_RSA": ["rew", "hlw", "rww", "aww", "wwe", "ohv", "tiw", "spd"],
    "FAC_MSG_US_TIM": ["tiw", "rew", "hlw", "rww", "aww", "wwe", "ohv"],
    "FAC_MSG_US_RWM": ["aww", "rew", "hlw"],
    "FAC_MSG_US_RSM": ["rew", "hlw", "rww"],
    "FAC_MSG_US_SPAT": ["rlv", "ttg", "glo", "tiw"],
    "FAC_MSG_US_TSPAT": ["rlv", "ttg", "glo", "tiw"],
    "FAC_MSG_US_SRM": ["tsp"],
    "FAC_MSG_US_SSM": ["tsp"],
    "FAC_MSG_US_PSM": ["pcw", "vru"],
    "FAC_MSG_US_PSM2": ["pcw", "vru"],
    "FAC_MSG_US_SDSM": ["vru", "pcw"],
}

DEFAULT_SAFETY_APP_ENABLEMENT = {
    "fcw": True,
    "bsw": True,
    "lca": True,
    "ima": True,
    "eebl": True,
    "clw": True,
    "dnp": True,
    "pcw": True,
    "lta": True,
    "rta": True,
    "rew": True,
    "spd": True,
    "tiw": True,
    "rlv": True,
    "ttg": True,
    "glo": True,
    "wwe": True,
    "gcw": True,
    "hlw": True,
    "rww": True,
    "aww": True,
    "vru": True,
    "tsp": False,
    "ohv": True,
    "svw": True,
    "evw": True,
    "eaw": True,
    "ova": False,
    "vaw": False,
    "vtw": False,
    "jpw": False,
    "omsa": False,
}


RAW_MESSAGE_TYPE_HINTS = {
    "BSM": {"alert_class": "basic_safety_message", "severity": "info"},
    "ICA": {"alert_class": "intersection_collision", "severity": "critical"},
    "RSA": {"alert_class": "road_side_alert", "severity": "warning"},
    "RWM": {"alert_class": "road_weather", "severity": "warning"},
    "RSM": {"alert_class": "road_safety", "severity": "warning"},
    "SPAT": {"alert_class": "signal_phase_timing", "severity": "info"},
    "TSPAT": {"alert_class": "traffic_signal_phase_timing", "severity": "info"},
    "SRM": {"alert_class": "signal_request", "severity": "info"},
    "SSM": {"alert_class": "signal_status", "severity": "info"},
    "TIM": {"alert_class": "traveler_information", "severity": "info"},
    "PSM": {"alert_class": "personal_safety", "severity": "warning"},
    "SDSM": {"alert_class": "sensor_data_sharing", "severity": "info"},
}


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
        self.declare_parameter("reconnect_delay_sec", 2.0)
        self.declare_parameter("subscription_key", 0)
        self.declare_parameter("publish_non_safety_facility", True)
        self.declare_parameter("min_publish_interval_sec", 0.0)
        self.declare_parameter("safety_app_enablement_json", "")
        self.declare_parameter("enable_debug_topic", True)
        self.declare_parameter("debug_topic", "/v2x/safety_alerts_debug_raw")
        self.declare_parameter("enable_raw_inbound_fallback", False)
        self.declare_parameter("raw_inbound_topic", "/comms/inbound_binary_msg")
        self.declare_parameter("publish_safety_from_raw_inbound", False)

        self._obu_host = self.get_parameter("obu_host").get_parameter_value().string_value
        self._alert_topic = self.get_parameter("alert_topic").get_parameter_value().string_value
        self._reconnect_delay_sec = self.get_parameter("reconnect_delay_sec").get_parameter_value().double_value
        self._subscription_key = self.get_parameter("subscription_key").get_parameter_value().integer_value
        self._publish_non_safety_facility = (
            self.get_parameter("publish_non_safety_facility").get_parameter_value().bool_value
        )
        self._min_publish_interval_sec = (
            self.get_parameter("min_publish_interval_sec").get_parameter_value().double_value
        )
        self._enable_debug_topic = (
            self.get_parameter("enable_debug_topic").get_parameter_value().bool_value
        )
        self._debug_topic = self.get_parameter("debug_topic").get_parameter_value().string_value
        self._enable_raw_inbound_fallback = (
            self.get_parameter("enable_raw_inbound_fallback").get_parameter_value().bool_value
        )
        self._raw_inbound_topic = self.get_parameter("raw_inbound_topic").get_parameter_value().string_value
        self._publish_safety_from_raw_inbound = (
            self.get_parameter("publish_safety_from_raw_inbound").get_parameter_value().bool_value
        )
        self._last_publish_by_key: Dict[str, float] = {}
        self._rx_counter_facility = 0
        self._rx_counter_raw = 0
        self._safety_app_enablement = DEFAULT_SAFETY_APP_ENABLEMENT.copy()
        raw_enablement_json = self.get_parameter("safety_app_enablement_json").get_parameter_value().string_value
        if raw_enablement_json:
            try:
                parsed = json.loads(raw_enablement_json)
                if isinstance(parsed, dict):
                    self._safety_app_enablement.update({str(k): bool(v) for k, v in parsed.items()})
            except json.JSONDecodeError as exc:
                self.get_logger().warn("Invalid safety_app_enablement_json provided: %s" % str(exc))

        self._alert_pub = self.create_publisher(String, self._alert_topic, 20)
        self._debug_pub = self.create_publisher(String, self._debug_topic, 20) if self._enable_debug_topic else None
        self._raw_inbound_sub = None
        if self._enable_raw_inbound_fallback:
            self._raw_inbound_sub = self.create_subscription(
                ByteArray,
                self._raw_inbound_topic,
                self._callback_inbound_raw,
                100,
            )
        self._stop_event = threading.Event()
        self._worker = threading.Thread(target=self._run_sdk_session_loop, daemon=True)
        self._worker.start()
        self._health_timer = self.create_timer(10.0, self._log_health)

        self.get_logger().info(
            "Started SDK safety alert bridge. obu_host=%s alert_topic=%s reconnect_delay=%.1fs"
            % (self._obu_host, self._alert_topic, self._reconnect_delay_sec)
        )
        self.get_logger().info(
            "Configured safety app enablement map entries=%d" % len(self._safety_app_enablement)
        )
        if self._enable_debug_topic:
            self.get_logger().info("Debug raw topic enabled at %s" % self._debug_topic)
        if self._enable_raw_inbound_fallback:
            self.get_logger().info(
                "Raw inbound fallback enabled. topic=%s publish_safety=%s"
                % (self._raw_inbound_topic, str(self._publish_safety_from_raw_inbound))
            )

    def destroy_node(self) -> bool:
        self._stop_event.set()
        if self._worker.is_alive():
            self._worker.join(timeout=3.0)
        return super().destroy_node()

    def _publish_alert(self, event_kind: str, key: int, data: Any, buffer: bytes) -> None:
        payload: Dict[str, Any] = {
            "source": "commsignia_sdk",
            "event_kind": event_kind,
            "key": int(key),
            "buffer_len": len(buffer) if buffer is not None else 0,
            "data": _jsonify(data),
            "safety_app_enablement": self._safety_app_enablement,
            "stamp": datetime.now(timezone.utc).isoformat(),
        }
        msg = String()
        msg.data = json.dumps(payload, separators=(",", ":"))
        self._alert_pub.publish(msg)

    def _callback_facility(self, key: int, data: Any, buffer: bytes) -> None:
        self._rx_counter_facility += 1
        fac_type_name = str(getattr(data, "type", "UNKNOWN"))
        mapping = SAFETY_FACILITY_TYPE_MAP.get(fac_type_name)

        if self._debug_pub is not None:
            debug_payload = {
                "source": "commsignia_sdk",
                "event_kind": "facility_rx_raw",
                "sequence": self._rx_counter_facility,
                "key": int(key),
                "facility_msg_type": fac_type_name,
                "buffer_len": len(buffer) if buffer is not None else 0,
                "buffer_hex": buffer.hex() if buffer is not None else "",
                "facility": _jsonify(data),
                "stamp": datetime.now(timezone.utc).isoformat(),
            }
            raw_msg = String()
            raw_msg.data = json.dumps(debug_payload, separators=(",", ":"))
            self._debug_pub.publish(raw_msg)

        # Only safety-relevant FAC messages belong on /v2x/safety_alerts.
        if mapping is None:
            return

        if self._min_publish_interval_sec > 0.0:
            now_sec = time.time()
            dedupe_key = f"{key}:{fac_type_name}"
            last = self._last_publish_by_key.get(dedupe_key, 0.0)
            if now_sec - last < self._min_publish_interval_sec:
                return
            self._last_publish_by_key[dedupe_key] = now_sec

        payload_data = {
            "facility": _jsonify(data),
            "facility_msg_type": fac_type_name,
            "native_driver_alert_available": False,
            "inferred_from_facility": mapping is not None,
            "related_safety_apps": FACILITY_TO_SAFETY_APPS.get(fac_type_name, []),
        }
        enabled_related_apps = [
            app for app in payload_data["related_safety_apps"] if self._safety_app_enablement.get(app, False)
        ]
        payload_data["enabled_related_safety_apps"] = enabled_related_apps
        if mapping is not None:
            payload_data.update(mapping)

        self._publish_alert("facility_rx", key, payload_data, buffer)

    def _infer_mapping_from_raw_type(self, message_type: str) -> Optional[Dict[str, str]]:
        mt_upper = message_type.upper()
        for hint, mapping in RAW_MESSAGE_TYPE_HINTS.items():
            if hint in mt_upper:
                return mapping
        return None

    def _callback_inbound_raw(self, msg: ByteArray) -> None:
        self._rx_counter_raw += 1
        message_type = str(msg.message_type)
        content_bytes = bytes(msg.content)
        mapping = self._infer_mapping_from_raw_type(message_type)

        if self._debug_pub is not None:
            debug_payload = {
                "source": "raw_inbound_binary",
                "event_kind": "inbound_binary_raw",
                "sequence": self._rx_counter_raw,
                "message_type": message_type,
                "buffer_len": len(content_bytes),
                "buffer_hex": content_bytes.hex(),
                "stamp": datetime.now(timezone.utc).isoformat(),
            }
            raw_msg = String()
            raw_msg.data = json.dumps(debug_payload, separators=(",", ":"))
            self._debug_pub.publish(raw_msg)

        if not self._publish_safety_from_raw_inbound or mapping is None:
            return

        if self._min_publish_interval_sec > 0.0:
            now_sec = time.time()
            dedupe_key = "raw:%s" % message_type
            last = self._last_publish_by_key.get(dedupe_key, 0.0)
            if now_sec - last < self._min_publish_interval_sec:
                return
            self._last_publish_by_key[dedupe_key] = now_sec

        related_apps = FACILITY_TO_SAFETY_APPS.get("FAC_MSG_US_%s" % message_type.upper(), [])
        payload_data = {
            "raw_message_type": message_type,
            "native_driver_alert_available": False,
            "inferred_from_raw_message_type": True,
            "related_safety_apps": related_apps,
            "enabled_related_safety_apps": [
                app for app in related_apps if self._safety_app_enablement.get(app, False)
            ],
        }
        payload_data.update(mapping)
        self._publish_alert("raw_inbound_rx", 0, payload_data, content_bytes)

    def _log_health(self) -> None:
        self.get_logger().info(
            "Bridge health: facility_rx=%d raw_inbound_rx=%d" % (self._rx_counter_facility, self._rx_counter_raw)
        )

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
                        "Connected to OBU SDK at %s and subscribed via fac_subscribe key=%d"
                        % (self._obu_host, subscribe_key)
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
    except (KeyboardInterrupt, rclpy.executors.ExternalShutdownException):
        pass
    finally:
        node.destroy_node()
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
