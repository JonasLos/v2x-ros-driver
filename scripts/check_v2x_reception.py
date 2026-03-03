#!/usr/bin/env python3

import argparse
import subprocess
import sys
import time
from collections import Counter
from dataclasses import dataclass

import rclpy
from carma_driver_msgs.msg import ByteArray
from rclpy.node import Node


@dataclass
class DriverParams:
    listening_port: str = "unknown"
    v2x_radio_listening_port: str = "unknown"
    v2x_radio_address: str = "unknown"


def _get_param(node_name: str, param_name: str) -> str:
    cmd = ["ros2", "param", "get", node_name, param_name]
    try:
        completed = subprocess.run(cmd, check=False, capture_output=True, text=True, timeout=4)
    except Exception:
        return "unknown"

    output = (completed.stdout or "").strip()
    if completed.returncode != 0 or not output:
        return "unknown"

    if ":" in output:
        return output.split(":", 1)[1].strip()

    return output


def get_driver_params(node_name: str) -> DriverParams:
    return DriverParams(
        listening_port=_get_param(node_name, "listening_port"),
        v2x_radio_listening_port=_get_param(node_name, "v2x_radio_listening_port"),
        v2x_radio_address=_get_param(node_name, "v2x_radio_address"),
    )


class TopicMonitor(Node):
    def __init__(self, topic: str):
        super().__init__("v2x_reception_monitor")
        self.count = 0
        self.total_bytes = 0
        self.min_size = None
        self.max_size = 0
        self.type_counter = Counter()
        self.first_stamp = None
        self.last_stamp = None
        self.last_payload_preview = ""

        self.subscription = self.create_subscription(ByteArray, topic, self._on_msg, 100)

    def _on_msg(self, msg: ByteArray) -> None:
        payload_len = len(msg.content)
        self.count += 1
        self.total_bytes += payload_len
        self.max_size = max(self.max_size, payload_len)
        self.min_size = payload_len if self.min_size is None else min(self.min_size, payload_len)
        self.type_counter[msg.message_type or "Unknown"] += 1
        self.last_stamp = msg.header.stamp
        if self.first_stamp is None:
            self.first_stamp = msg.header.stamp
        preview = list(msg.content[:12])
        self.last_payload_preview = str(preview)


def main() -> int:
    parser = argparse.ArgumentParser(description="Check whether v2x_ros_driver is receiving and publishing inbound V2X messages.")
    parser.add_argument("--topic", default="/comms/inbound_binary_msg", help="Inbound topic to monitor")
    parser.add_argument("--duration", type=float, default=10.0, help="Seconds to monitor")
    parser.add_argument("--node-name", default="/v2x_ros_driver_node", help="Driver node name for parameter checks")
    parser.add_argument("--expected-listening-port", type=int, default=None, help="Optional expected listening_port value")
    args = parser.parse_args()

    params = get_driver_params(args.node_name)

    rclpy.init()
    monitor = TopicMonitor(args.topic)

    start = time.time()
    try:
        while time.time() - start < args.duration:
            rclpy.spin_once(monitor, timeout_sec=0.2)
    finally:
        monitor.destroy_node()
        rclpy.shutdown()

    avg_size = (monitor.total_bytes / monitor.count) if monitor.count else 0.0
    top_types = ", ".join([f"{k}:{v}" for k, v in monitor.type_counter.most_common()]) or "none"

    print("=== v2x_ros_driver reception report ===")
    print(f"node: {args.node_name}")
    print(f"topic: {args.topic}")
    print(f"monitor_duration_sec: {args.duration}")
    print("driver_params:")
    print(f"  listening_port: {params.listening_port}")
    print(f"  v2x_radio_listening_port: {params.v2x_radio_listening_port}")
    print(f"  v2x_radio_address: {params.v2x_radio_address}")
    print("message_stats:")
    print(f"  total_messages: {monitor.count}")
    print(f"  total_bytes: {monitor.total_bytes}")
    print(f"  avg_payload_size: {avg_size:.2f}")
    print(f"  min_payload_size: {monitor.min_size if monitor.min_size is not None else 0}")
    print(f"  max_payload_size: {monitor.max_size}")
    print(f"  message_types: {top_types}")
    print(f"  last_payload_preview: {monitor.last_payload_preview}")

    if monitor.count == 0:
        print("result: NO_MESSAGES")
        return 2

    if args.expected_listening_port is not None and params.listening_port != str(args.expected_listening_port):
        print("result: PARAM_MISMATCH")
        return 3

    print("result: OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
