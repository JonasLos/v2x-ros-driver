#!/usr/bin/env python3

import argparse
import json
from collections import defaultdict
from pathlib import Path

import matplotlib.pyplot as plt


def parse_spat_points(jsonl_path: Path):
    per_group = defaultdict(list)
    first_ts = None
    event_names = set()
    intersection_ids = set()

    with jsonl_path.open("r", encoding="utf-8") as f:
        for line in f:
            record = json.loads(line)
            decoded = record.get("decoded")
            if not isinstance(decoded, dict):
                continue
            if decoded.get("messageId") != 19:
                continue

            ts_ns = record.get("timestamp_ns")
            if not isinstance(ts_ns, int):
                continue
            if first_ts is None:
                first_ts = ts_ns
            t_sec = (ts_ns - first_ts) / 1e9

            value = decoded.get("value", {})
            intersections = value.get("intersections", []) if isinstance(value, dict) else []
            if not isinstance(intersections, list):
                continue

            for inter in intersections:
                if not isinstance(inter, dict):
                    continue
                inter_id = (inter.get("id") or {}).get("id") if isinstance(inter.get("id"), dict) else None
                if inter_id is not None:
                    intersection_ids.add(inter_id)

                states = inter.get("states", [])
                if not isinstance(states, list):
                    continue

                for state in states:
                    if not isinstance(state, dict):
                        continue
                    signal_group = state.get("signalGroup")
                    sts_list = state.get("state-time-speed", [])
                    if not isinstance(sts_list, list):
                        continue

                    for sts in sts_list:
                        if not isinstance(sts, dict):
                            continue
                        event_state = sts.get("eventState")
                        if signal_group is None or not isinstance(event_state, str):
                            continue
                        per_group[int(signal_group)].append((t_sec, event_state))
                        event_names.add(event_state)

    return per_group, sorted(event_names), sorted(intersection_ids)


def main() -> int:
    parser = argparse.ArgumentParser(description="Plot decoded SPAT signal states over time")
    parser.add_argument("--input", required=True, help="Decoded JSONL path")
    parser.add_argument("--output", default="/tmp/spat_signal_timeline.png", help="Output PNG path")
    parser.add_argument("--title", default="SPAT signal states over time", help="Plot title")
    args = parser.parse_args()

    input_path = Path(args.input)
    output_path = Path(args.output)
    output_path.parent.mkdir(parents=True, exist_ok=True)

    per_group, event_names, intersection_ids = parse_spat_points(input_path)
    if not per_group:
        raise SystemExit("No decodable SPAT records found in input")

    event_to_idx = {name: i for i, name in enumerate(event_names)}
    groups = sorted(per_group.keys())

    fig, axes = plt.subplots(len(groups), 1, figsize=(14, max(5, 2.1 * len(groups))), sharex=True)
    if len(groups) == 1:
        axes = [axes]

    cmap = plt.get_cmap("tab20")

    for axis, signal_group in zip(axes, groups):
        points = per_group[signal_group]
        x = [p[0] for p in points]
        y = [event_to_idx[p[1]] for p in points]
        c = [event_to_idx[p[1]] for p in points]

        axis.scatter(x, y, c=c, s=6, cmap=cmap, alpha=0.8)
        axis.set_ylabel(f"SG {signal_group}")
        axis.set_yticks(range(len(event_names)))
        axis.set_yticklabels(event_names, fontsize=7)
        axis.grid(True, alpha=0.25)

    axes[-1].set_xlabel("Time from first SPAT message (s)")
    fig.suptitle(
        f"{args.title}\nIntersections: {', '.join(map(str, intersection_ids[:6]))}{' ...' if len(intersection_ids) > 6 else ''}",
        fontsize=12,
    )
    fig.tight_layout(rect=[0, 0, 1, 0.96])
    fig.savefig(output_path, dpi=180)

    total_points = sum(len(v) for v in per_group.values())
    print(f"saved_plot: {output_path}")
    print(f"signal_groups: {len(groups)}")
    print(f"event_states: {len(event_names)}")
    print(f"spat_state_points: {total_points}")
    print(f"intersection_ids: {intersection_ids[:10]}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
