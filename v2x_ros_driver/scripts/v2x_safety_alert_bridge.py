#!/usr/bin/env python3

import json
import threading
import time
from datetime import datetime, timezone
from typing import Any, Dict, Optional

import rclpy
from rclpy.node import Node
from std_msgs.msg import String


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

        self._obu_host = self.get_parameter("obu_host").get_parameter_value().string_value
        self._alert_topic = self.get_parameter("alert_topic").get_parameter_value().string_value
        self._reconnect_delay_sec = self.get_parameter("reconnect_delay_sec").get_parameter_value().double_value
        self._subscription_key = self.get_parameter("subscription_key").get_parameter_value().integer_value

        self._alert_pub = self.create_publisher(String, self._alert_topic, 20)
        self._stop_event = threading.Event()
        self._worker = threading.Thread(target=self._run_sdk_session_loop, daemon=True)
        self._worker.start()

        self.get_logger().info(
            "Started SDK safety alert bridge. obu_host=%s alert_topic=%s reconnect_delay=%.1fs"
            % (self._obu_host, self._alert_topic, self._reconnect_delay_sec)
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
            "stamp": datetime.now(timezone.utc).isoformat(),
        }
        msg = String()
        msg.data = json.dumps(payload, separators=(",", ":"))
        self._alert_pub.publish(msg)

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
