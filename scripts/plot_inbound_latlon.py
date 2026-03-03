#!/usr/bin/env python3

import argparse
import json
from collections import defaultdict
from pathlib import Path

import matplotlib.pyplot as plt


def main() -> int:
    parser = argparse.ArgumentParser(description="Plot decoded inbound BSM lat/lon points from JSONL")
    parser.add_argument("--input", required=True, help="Path to decoded JSONL (from decode_inbound_mcap.py)")
    parser.add_argument("--output", default="/tmp/inbound_latlon_map.png", help="Output PNG path")
    parser.add_argument("--title", default="Decoded /comms/inbound_binary_msg positions", help="Plot title")
    args = parser.parse_args()

    input_path = Path(args.input)
    output_path = Path(args.output)
    output_path.parent.mkdir(parents=True, exist_ok=True)

    by_vehicle = defaultdict(lambda: {"lat": [], "lon": []})
    total_points = 0

    with input_path.open("r", encoding="utf-8") as f:
        for line in f:
            record = json.loads(line)
            decoded = record.get("decoded")
            if not isinstance(decoded, dict):
                continue
            if decoded.get("messageId") != 20:
                continue

            value = decoded.get("value", {})
            core = value.get("coreData", {}) if isinstance(value, dict) else {}
            if not isinstance(core, dict):
                continue

            lat_raw = core.get("lat")
            lon_raw = core.get("long")
            vehicle_id = core.get("id", "unknown")

            if not isinstance(lat_raw, int) or not isinstance(lon_raw, int):
                continue

            lat_deg = lat_raw * 1e-7
            lon_deg = lon_raw * 1e-7

            by_vehicle[vehicle_id]["lat"].append(lat_deg)
            by_vehicle[vehicle_id]["lon"].append(lon_deg)
            total_points += 1

    if total_points == 0:
        raise SystemExit("No decodable BSM lat/lon points found in input")

    plt.figure(figsize=(9, 7))
    for vehicle_id, data in by_vehicle.items():
        plt.plot(data["lon"], data["lat"], marker=".", linestyle="-", linewidth=1.0, markersize=3, label=vehicle_id)

    plt.title(args.title)
    plt.xlabel("Longitude (deg)")
    plt.ylabel("Latitude (deg)")
    plt.grid(True, alpha=0.3)
    plt.axis("equal")
    plt.legend(title="Vehicle ID", loc="best")
    plt.tight_layout()
    plt.savefig(output_path, dpi=180)

    print(f"saved_plot: {output_path}")
    print(f"total_points: {total_points}")
    print(f"vehicles: {len(by_vehicle)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
