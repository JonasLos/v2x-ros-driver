#!/usr/bin/env python3

import argparse
import json
import math
from collections import defaultdict
from pathlib import Path

import matplotlib.pyplot as plt


def load_records(path: Path):
    with path.open("r", encoding="utf-8") as f:
        for line in f:
            yield json.loads(line)


def plot_sdsm_latlon(records, output_png: Path):
    by_object = defaultdict(lambda: {"lat": [], "lon": []})

    for rec in records:
        if rec.get("decoded_message_id") != 32:
            continue
        decoded = rec.get("decoded", {})
        value = decoded.get("value", {}) if isinstance(decoded, dict) else {}
        if not isinstance(value, dict):
            continue

        pos = value.get("position", {})
        lat_raw = pos.get("lat") if isinstance(pos, dict) else None
        lon_raw = pos.get("long") if isinstance(pos, dict) else None
        obj_id = value.get("id", "unknown")

        if not isinstance(lat_raw, int) or not isinstance(lon_raw, int):
            continue

        by_object[obj_id]["lat"].append(lat_raw * 1e-7)
        by_object[obj_id]["lon"].append(lon_raw * 1e-7)

    total_points = sum(len(v["lat"]) for v in by_object.values())
    if total_points == 0:
        return 0

    plt.figure(figsize=(9, 7))
    for obj_id, vals in by_object.items():
        plt.plot(vals["lon"], vals["lat"], marker="o", linestyle="-", linewidth=1.0, markersize=3, label=obj_id)

    plt.title("SDSM object positions (lat/lon)")
    plt.xlabel("Longitude (deg)")
    plt.ylabel("Latitude (deg)")
    plt.grid(True, alpha=0.3)
    plt.axis("equal")
    plt.legend(title="SDSM object id", loc="best")
    plt.tight_layout()
    plt.savefig(output_png, dpi=180)
    return total_points


def _extract_node_xy(node):
    if not isinstance(node, dict):
        return None
    delta = node.get("delta", {})
    if not isinstance(delta, dict):
        return None

    for k in ("node-XY1", "node-XY2", "node-XY3", "node-XY4", "node-XY5", "node-XY6"):
        if k in delta and isinstance(delta[k], dict):
            x = delta[k].get("x")
            y = delta[k].get("y")
            if isinstance(x, int) and isinstance(y, int):
                return x, y
    return None


def _local_xy_m_to_latlon(lat0_deg: float, lon0_deg: float, east_m: float, north_m: float):
    lat = lat0_deg + (north_m / 111111.0)
    lon = lon0_deg + (east_m / (111111.0 * max(1e-6, math.cos(math.radians(lat0_deg)))))
    return lat, lon


def plot_srm_maplike(records, output_png: Path, node_unit_m: float):
    lanes_plotted = 0
    unique_geometries = set()
    plt.figure(figsize=(10, 8))

    for rec in records:
        if rec.get("decoded_message_id") != 18:
            continue

        decoded = rec.get("decoded", {})
        value = decoded.get("value", {}) if isinstance(decoded, dict) else {}
        intersections = value.get("intersections", []) if isinstance(value, dict) else []
        if not isinstance(intersections, list):
            continue

        for inter in intersections:
            if not isinstance(inter, dict):
                continue
            inter_id = (inter.get("id") or {}).get("id") if isinstance(inter.get("id"), dict) else "unknown"
            ref_point = inter.get("refPoint", {})
            if not isinstance(ref_point, dict):
                continue
            ref_lat = ref_point.get("lat")
            ref_lon = ref_point.get("long")
            if not isinstance(ref_lat, int) or not isinstance(ref_lon, int):
                continue
            lat0 = ref_lat * 1e-7
            lon0 = ref_lon * 1e-7

            lane_set = inter.get("laneSet", [])
            if not isinstance(lane_set, list):
                continue

            for lane in lane_set:
                if not isinstance(lane, dict):
                    continue
                lane_id = lane.get("laneID", "?")
                node_list = lane.get("nodeList", {})
                nodes = node_list.get("nodes", []) if isinstance(node_list, dict) else []
                if not isinstance(nodes, list) or not nodes:
                    continue

                xs = [0]
                ys = [0]
                x_acc = 0
                y_acc = 0
                for node in nodes:
                    xy = _extract_node_xy(node)
                    if xy is None:
                        continue
                    x_acc += xy[0]
                    y_acc += xy[1]
                    xs.append(x_acc)
                    ys.append(y_acc)

                if len(xs) < 2:
                    continue

                # Dedupe repeated map geometry messages across time
                geo_key = (inter_id, lane_id, tuple(xs), tuple(ys))
                if geo_key in unique_geometries:
                    continue
                unique_geometries.add(geo_key)

                lons = []
                lats = []
                for x_local, y_local in zip(xs, ys):
                    east_m = x_local * node_unit_m
                    north_m = y_local * node_unit_m
                    lat, lon = _local_xy_m_to_latlon(lat0, lon0, east_m, north_m)
                    lats.append(lat)
                    lons.append(lon)

                plt.plot(lons, lats, linewidth=0.9, alpha=0.8)
                lanes_plotted += 1

    if lanes_plotted == 0:
        return 0

    plt.title("SRM intersection lane geometry (georeferenced by refPoint)")
    plt.xlabel("Longitude (deg)")
    plt.ylabel("Latitude (deg)")
    plt.grid(True, alpha=0.3)
    plt.axis("equal")
    plt.tight_layout()
    plt.savefig(output_png, dpi=180)
    return lanes_plotted


def main() -> int:
    parser = argparse.ArgumentParser(description="Plot SDSM and map-like decoded messages")
    parser.add_argument("--input", required=True, help="Decoded JSONL file")
    parser.add_argument("--sdsm-out", default="/tmp/sdsm_positions.png", help="Output PNG for SDSM positions")
    parser.add_argument("--map-out", default="/tmp/maplike_srm_lanes.png", help="Output PNG for map-like lanes")
    parser.add_argument(
        "--node-unit-m",
        type=float,
        default=0.01,
        help="Meters per local node delta unit when converting SRM lane deltas to lat/lon (default: 0.01)",
    )
    args = parser.parse_args()

    input_path = Path(args.input)
    sdsm_out = Path(args.sdsm_out)
    map_out = Path(args.map_out)
    sdsm_out.parent.mkdir(parents=True, exist_ok=True)
    map_out.parent.mkdir(parents=True, exist_ok=True)

    records = list(load_records(input_path))

    sdsm_points = plot_sdsm_latlon(records, sdsm_out)
    plt.close('all')
    srm_lanes = plot_srm_maplike(records, map_out, args.node_unit_m)
    plt.close('all')

    print(f"sdsm_points: {sdsm_points}")
    if sdsm_points > 0:
        print(f"sdsm_plot: {sdsm_out}")

    print(f"srm_lanes_plotted: {srm_lanes}")
    if srm_lanes > 0:
        print(f"map_like_plot: {map_out}")
        print(f"map_like_node_unit_m: {args.node_unit_m}")

    map_count = sum(1 for r in records if r.get("decoded_message_id") == 31)
    print(f"decoded_map31_count: {map_count}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
