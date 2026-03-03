#!/usr/bin/env python3

import argparse
import contextlib
import io
import json
from collections import Counter
from pathlib import Path
from typing import Any

import j2735_202409
import rosbag2_py
from carma_driver_msgs.msg import ByteArray
from rclpy.serialization import deserialize_message
from rosbag2_py import ConverterOptions, StorageOptions

VALID_IDS = {0x12, 0x13, 0x14, 0x1D, 0x1E, 0x1F, 0x20, 0x29}
ID_NAME_MAP = {
    0x12: "SRM",
    0x13: "SPAT",
    0x14: "BSM",
    0x1D: "PDM",
    0x1E: "PSM",
    0x1F: "MAP",
    0x20: "SDSM",
    0x29: "TIM",
}


def extract_framed_candidates(data: bytes) -> list[tuple[bytes, str, int, int]]:
    candidates: list[tuple[bytes, str, int, int]] = []

    # Pattern A: zero-prefixed msg id + one-byte length + payload
    # Example: 00 13 6c ... (SPAT)
    for idx in range(len(data) - 3):
        if data[idx] != 0x00:
            continue
        msg_id = data[idx + 1]
        msg_len = data[idx + 2]
        if msg_id in VALID_IDS and msg_len > 0:
            end = idx + 3 + msg_len
            if end <= len(data):
                candidates.append((data[idx:end], "zero_prefixed_len", idx, end - idx))

    # Pattern B: one-byte msg id + one-byte length + payload
    for idx in range(len(data) - 2):
        msg_id = data[idx]
        msg_len = data[idx + 1]
        if msg_id in VALID_IDS and msg_len > 0:
            end = idx + 2 + msg_len
            if end <= len(data):
                candidates.append((data[idx:end], "framed", idx, end - idx))

    # Compatibility fallback for legacy captures that may contain 00-prefixed
    # IDs without reliable explicit length semantics in the same frame.
    for msg_id in (b"\x00\x12", b"\x00\x13", b"\x00\x14", b"\x00\x1d", b"\x00\x1e", b"\x00\x1f", b"\x00\x20", b"\x00\x29"):
        idx = data.find(msg_id)
        if idx != -1:
            candidates.append((data[idx:], "prefixed", idx, len(data) - idx))

    return candidates


def try_decode(payload: bytes, message_frame: Any) -> dict[str, Any] | None:
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


def deep_scan_for_decode(data: bytes, message_frame: Any) -> tuple[dict[str, Any], int, int] | None:
    max_scan_len = min(260, len(data))
    for start in range(len(data)):
        max_end = min(len(data), start + max_scan_len)
        for end in range(start + 18, max_end + 1):
            decoded = try_decode(data[start:end], message_frame)
            if decoded:
                return decoded, start, end - start
    return None


def open_reader(uri: str) -> rosbag2_py.SequentialReader:
    reader = rosbag2_py.SequentialReader()
    storage_options = StorageOptions(uri=uri, storage_id="mcap")
    converter_options = ConverterOptions(
        input_serialization_format="cdr",
        output_serialization_format="cdr",
    )
    reader.open(storage_options, converter_options)
    return reader


def main() -> int:
    parser = argparse.ArgumentParser(description="Decode /comms/inbound_binary_msg from a rosbag2 mcap file")
    parser.add_argument("--bag", required=True, help="Path to rosbag directory or .mcap file")
    parser.add_argument(
        "--topic",
        default="/comms/inbound_binary_msg",
        help="Topic to decode (default: /comms/inbound_binary_msg)",
    )
    parser.add_argument(
        "--out-jsonl",
        default="/tmp/inbound_decoded.jsonl",
        help="Output JSONL path for per-message decode records",
    )
    parser.add_argument(
        "--out-summary",
        default="/tmp/inbound_decode_summary.json",
        help="Output JSON path for decode summary",
    )
    parser.add_argument(
        "--deep-scan",
        action="store_true",
        help="Attempt brute-force slice scan when framed extraction fails",
    )
    args = parser.parse_args()

    bag_uri = str(Path(args.bag).resolve())
    if bag_uri.endswith(".mcap"):
        bag_uri = str(Path(bag_uri).parent)

    reader = open_reader(bag_uri)
    message_frame = j2735_202409.MessageFrame.MessageFrame

    out_jsonl = Path(args.out_jsonl)
    out_jsonl.parent.mkdir(parents=True, exist_ok=True)

    total_topic_msgs = 0
    decoded_count = 0
    framed_decoded_count = 0
    deepscan_decoded_count = 0

    message_id_counter: Counter[str] = Counter()
    message_type_counter: Counter[str] = Counter()
    decode_method_counter: Counter[str] = Counter()

    with out_jsonl.open("w", encoding="utf-8") as f:
        idx = 0
        while reader.has_next():
            topic, data, timestamp = reader.read_next()
            if topic != args.topic:
                continue

            idx += 1
            total_topic_msgs += 1
            msg = deserialize_message(data, ByteArray)
            payload = bytes(msg.content)
            message_type_counter[msg.message_type or "Unknown"] += 1

            record: dict[str, Any] = {
                "index": idx,
                "topic": topic,
                "timestamp_ns": int(timestamp),
                "driver_message_type": msg.message_type,
                "payload_len": len(payload),
                "decoded": False,
            }

            decoded_obj = None
            decode_method = None
            source_offset = None
            source_len = None

            candidates = extract_framed_candidates(payload)
            for candidate, method, offset, clen in candidates:
                decoded_obj = try_decode(candidate, message_frame)
                if decoded_obj is not None:
                    decode_method = method
                    source_offset = offset
                    source_len = clen
                    break

            if decoded_obj is not None:
                decoded_count += 1
                framed_decoded_count += 1
            elif args.deep_scan:
                deep_result = deep_scan_for_decode(payload, message_frame)
                if deep_result is not None:
                    decoded_obj, source_offset, source_len = deep_result
                    decode_method = "deep_scan"
                    decoded_count += 1
                    deepscan_decoded_count += 1

            if decoded_obj is not None:
                message_id = decoded_obj.get("messageId")
                message_id_name = ID_NAME_MAP.get(message_id, "UNKNOWN")
                record.update(
                    {
                        "decoded": True,
                        "decode_method": decode_method,
                        "decoded_message_id": message_id,
                        "decoded_message_name": message_id_name,
                        "source_offset": source_offset,
                        "source_len": source_len,
                        "decoded": decoded_obj,
                    }
                )
                message_id_counter[f"{message_id_name}({message_id})"] += 1
                decode_method_counter[decode_method] += 1

            f.write(json.dumps(record, ensure_ascii=False) + "\n")

    undecoded_count = total_topic_msgs - decoded_count
    summary = {
        "bag_uri": bag_uri,
        "topic": args.topic,
        "total_topic_messages": total_topic_msgs,
        "decoded_messages": decoded_count,
        "undecoded_messages": undecoded_count,
        "decode_rate": (decoded_count / total_topic_msgs) if total_topic_msgs else 0.0,
        "decoded_by_method": dict(decode_method_counter),
        "decoded_framed": framed_decoded_count,
        "decoded_deep_scan": deepscan_decoded_count,
        "decoded_message_ids": dict(message_id_counter),
        "driver_message_types": dict(message_type_counter),
        "output_jsonl": str(out_jsonl),
    }

    out_summary = Path(args.out_summary)
    out_summary.parent.mkdir(parents=True, exist_ok=True)
    out_summary.write_text(json.dumps(summary, indent=2), encoding="utf-8")

    print(json.dumps(summary, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
