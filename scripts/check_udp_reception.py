#!/usr/bin/env python3

import argparse
import socket
import sys
import time


def main() -> int:
    parser = argparse.ArgumentParser(description="Check raw UDP reception on a local port.")
    parser.add_argument("--bind-ip", default="0.0.0.0", help="Local bind IP")
    parser.add_argument("--port", type=int, default=7943, help="Local UDP port")
    parser.add_argument("--duration", type=float, default=10.0, help="Monitor duration in seconds")
    parser.add_argument("--preview-bytes", type=int, default=16, help="Preview bytes from last packet")
    args = parser.parse_args()

    packet_count = 0
    total_bytes = 0
    min_len = None
    max_len = 0
    last_from = None
    last_preview = b""

    start = time.time()
    end_time = start + args.duration

    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((args.bind_ip, args.port))
    sock.settimeout(0.5)

    try:
        while time.time() < end_time:
            try:
                data, addr = sock.recvfrom(65535)
            except socket.timeout:
                continue

            packet_len = len(data)
            packet_count += 1
            total_bytes += packet_len
            max_len = max(max_len, packet_len)
            min_len = packet_len if min_len is None else min(min_len, packet_len)
            last_from = addr
            last_preview = data[: args.preview_bytes]
    finally:
        sock.close()

    avg_len = (total_bytes / packet_count) if packet_count else 0.0

    print("=== UDP reception report ===")
    print(f"bind: {args.bind_ip}:{args.port}")
    print(f"duration_sec: {args.duration}")
    print(f"packet_count: {packet_count}")
    print(f"total_bytes: {total_bytes}")
    print(f"avg_packet_len: {avg_len:.2f}")
    print(f"min_packet_len: {min_len if min_len is not None else 0}")
    print(f"max_packet_len: {max_len}")
    print(f"last_from: {last_from}")
    print(f"last_preview_hex: {last_preview.hex()}")

    if packet_count == 0:
        print("result: NO_UDP_PACKETS")
        return 2

    print("result: OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
