#!/usr/bin/env python3
"""
Analyze raw WSMP (ethertype 0x88dc) PCAP captures and decode embedded J2735
MessageFrame payloads.

This tool is intentionally ROS-independent and can run on plain PCAP files.
"""

from __future__ import annotations

import argparse
import contextlib
import io
import json
import struct
from collections import Counter, defaultdict
from dataclasses import dataclass
from pathlib import Path
from typing import Any

try:
    import j2735_202409  # type: ignore
except Exception as exc:  # pragma: no cover
    raise SystemExit(
        "j2735_202409 is required. Activate your venv and install the wheel first. "
        f"Import error: {exc}"
    )


ETHERTYPE_WSMP = 0x88DC
ETH_HEADER_LEN = 14

# Raw IDs commonly seen in wrapped DSRC/WSM streams.
RAW_ID_NAME_MAP = {
    0x12: "SRM?",
    0x13: "SPAT?",
    0x14: "BSM?",
    0x1D: "PDM?",
    0x1E: "PSM?",
    0x1F: "MAP?",
    0x20: "SDSM?",
    0x29: "TIM?",
}
VALID_IDS = set(RAW_ID_NAME_MAP.keys())

# Decoded MessageFrame.messageId values from J2735.
DECODED_ID_NAME_MAP = {
    18: "MAP",
    19: "SPAT",
    20: "BSM",
    28: "SDSM",
    29: "PDM",
    31: "TIM",
    32: "PSM",
    49: "TIM",
}


@dataclass
class PacketRecord:
    ts_sec: int
    ts_subsec: int
    src_mac: str
    dst_mac: str
    ethertype: int
    payload: bytes


def mac_to_str(mac: bytes) -> str:
    return ":".join(f"{b:02x}" for b in mac)


def parse_pcap(path: Path) -> list[PacketRecord]:
    data = path.read_bytes()
    if len(data) < 24:
        return []

    magic = data[:4]
    if magic == b"\xd4\xc3\xb2\xa1":
        endian = "<"
    elif magic == b"\xa1\xb2\xc3\xd4":
        endian = ">"
    elif magic == b"\x4d\x3c\xb2\xa1":
        endian = "<"  # nanosecond-resolution pcap
    elif magic == b"\xa1\xb2\x3c\x4d":
        endian = ">"  # nanosecond-resolution pcap
    else:
        raise ValueError(f"Unsupported PCAP magic in {path}: {magic.hex()}")

    offset = 24
    records: list[PacketRecord] = []
    hdr_struct = struct.Struct(endian + "IIII")

    while offset + 16 <= len(data):
        ts_sec, ts_subsec, incl_len, _orig_len = hdr_struct.unpack_from(data, offset)
        offset += 16
        if incl_len <= 0 or offset + incl_len > len(data):
            break

        frame = data[offset : offset + incl_len]
        offset += incl_len

        if len(frame) < ETH_HEADER_LEN:
            continue

        dst = frame[0:6]
        src = frame[6:12]
        ethertype = struct.unpack("!H", frame[12:14])[0]
        payload = frame[ETH_HEADER_LEN:]

        records.append(
            PacketRecord(
                ts_sec=ts_sec,
                ts_subsec=ts_subsec,
                src_mac=mac_to_str(src),
                dst_mac=mac_to_str(dst),
                ethertype=ethertype,
                payload=payload,
            )
        )

    return records


def extract_candidates(data: bytes) -> list[tuple[bytes, str, int, int, int | None]]:
    """
    Return candidate payload slices as tuples:
    (candidate_bytes, method, start_offset, candidate_len, raw_id_guess)
    """
    candidates: list[tuple[bytes, str, int, int, int | None]] = []
    seen: set[tuple[int, int]] = set()

    def add(start: int, end: int, method: str, raw_id: int | None) -> None:
        if start < 0 or end <= start or end > len(data):
            return
        key = (start, end)
        if key in seen:
            return
        seen.add(key)
        candidates.append((data[start:end], method, start, end - start, raw_id))

    # Pattern A: 00 + msg_id + len + payload
    for idx in range(len(data) - 3):
        if data[idx] != 0x00:
            continue
        msg_id = data[idx + 1]
        msg_len = data[idx + 2]
        if msg_id in VALID_IDS and msg_len > 0:
            end = idx + 3 + msg_len
            add(idx, end, "zero_prefixed_len", msg_id)
            # Sometimes decoder expects to start at msg_id instead of 0x00 prefix.
            add(idx + 1, end, "id_plus_len", msg_id)

    # Pattern B: msg_id + len + payload
    for idx in range(len(data) - 2):
        msg_id = data[idx]
        msg_len = data[idx + 1]
        if msg_id in VALID_IDS and msg_len > 0:
            end = idx + 2 + msg_len
            add(idx, end, "framed", msg_id)

    # Pattern C: 2-byte big-endian ID token (00 xx) with unknown length semantics.
    for idx in range(len(data) - 2):
        if data[idx] != 0x00:
            continue
        msg_id = data[idx + 1]
        if msg_id not in VALID_IDS:
            continue
        # Include full tail and short windows for higher hit-rate without brute-force.
        add(idx, len(data), "prefixed_tail", msg_id)
        for win in (48, 96, 160, 260, 420):
            end = min(len(data), idx + 2 + win)
            add(idx, end, f"prefixed_window_{win}", msg_id)
            add(idx + 1, end, f"id_window_{win}", msg_id)

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


def classify_decoded_id(message_id: int | None) -> str:
    if message_id is None:
        return "UNKNOWN"
    return DECODED_ID_NAME_MAP.get(message_id, f"UNKNOWN({message_id})")


def analyze_pcap(path: Path, max_packets: int = 0) -> dict[str, Any]:
    records = parse_pcap(path)
    if max_packets > 0:
        records = records[:max_packets]

    message_frame = j2735_202409.MessageFrame.MessageFrame

    ethertype_counts: Counter[str] = Counter()
    src_counts: Counter[str] = Counter()
    dst_counts: Counter[str] = Counter()

    wsmp_packets = 0
    decoded_packets = 0
    decode_methods: Counter[str] = Counter()
    raw_id_hints: Counter[str] = Counter()
    decoded_ids: Counter[str] = Counter()
    undecoded_raw_hints: Counter[str] = Counter()

    decoded_examples: dict[str, dict[str, Any]] = {}

    for i, rec in enumerate(records, start=1):
        ethertype_counts[f"0x{rec.ethertype:04x}"] += 1
        src_counts[rec.src_mac] += 1
        dst_counts[rec.dst_mac] += 1

        if rec.ethertype != ETHERTYPE_WSMP:
            continue
        wsmp_packets += 1

        candidates = extract_candidates(rec.payload)
        decoded_obj = None
        used_method = None
        used_start = None
        used_len = None
        used_raw_id = None

        for cand, method, start, clen, raw_id_guess in candidates:
            parsed = try_decode(cand, message_frame)
            if parsed is None:
                continue
            decoded_obj = parsed
            used_method = method
            used_start = start
            used_len = clen
            used_raw_id = raw_id_guess
            break

        if decoded_obj is not None:
            decoded_packets += 1
            decode_methods[used_method or "unknown"] += 1
            if used_raw_id is not None:
                raw_id_hints[f"0x{used_raw_id:02x}({RAW_ID_NAME_MAP.get(used_raw_id, 'raw')})"] += 1

            msg_id = decoded_obj.get("messageId")
            msg_name = classify_decoded_id(msg_id)
            decoded_ids[f"{msg_name}({msg_id})"] += 1

            if msg_name not in decoded_examples:
                decoded_examples[msg_name] = {
                    "packet_index": i,
                    "timestamp": f"{rec.ts_sec}.{rec.ts_subsec:09d}",
                    "src_mac": rec.src_mac,
                    "dst_mac": rec.dst_mac,
                    "candidate_method": used_method,
                    "candidate_start": used_start,
                    "candidate_len": used_len,
                    "raw_id_hint": used_raw_id,
                    "message_id": msg_id,
                    "decoded_preview": decoded_obj,
                }
        else:
            for _, _, _, _, raw_id_guess in candidates:
                if raw_id_guess is not None:
                    undecoded_raw_hints[f"0x{raw_id_guess:02x}({RAW_ID_NAME_MAP.get(raw_id_guess, 'raw')})"] += 1

    return {
        "file": str(path),
        "packet_count": len(records),
        "wsmp_packet_count": wsmp_packets,
        "decoded_packet_count": decoded_packets,
        "decode_rate_wsmp": (decoded_packets / wsmp_packets) if wsmp_packets else 0.0,
        "ethertype_counts": dict(ethertype_counts),
        "top_src_mac": src_counts.most_common(10),
        "top_dst_mac": dst_counts.most_common(10),
        "decoded_by_message_id": dict(decoded_ids),
        "decoded_by_raw_id_hint": dict(raw_id_hints),
        "decoded_by_method": dict(decode_methods),
        "undecoded_raw_id_hints": dict(undecoded_raw_hints),
        "decoded_examples": decoded_examples,
    }


def summarize(all_results: list[dict[str, Any]]) -> dict[str, Any]:
    total_packets = 0
    total_wsmp = 0
    total_decoded = 0
    by_decoded_id: Counter[str] = Counter()
    by_raw_id: Counter[str] = Counter()
    by_method: Counter[str] = Counter()
    ethertypes: Counter[str] = Counter()
    dst_mac: Counter[str] = Counter()

    for result in all_results:
        total_packets += int(result["packet_count"])
        total_wsmp += int(result["wsmp_packet_count"])
        total_decoded += int(result["decoded_packet_count"])
        by_decoded_id.update(result.get("decoded_by_message_id", {}))
        by_raw_id.update(result.get("decoded_by_raw_id_hint", {}))
        by_method.update(result.get("decoded_by_method", {}))
        ethertypes.update(result.get("ethertype_counts", {}))
        dst_mac.update(dict(result.get("top_dst_mac", [])))

    return {
        "files_analyzed": len(all_results),
        "total_packets": total_packets,
        "total_wsmp_packets": total_wsmp,
        "total_decoded_packets": total_decoded,
        "overall_decode_rate_wsmp": (total_decoded / total_wsmp) if total_wsmp else 0.0,
        "decoded_message_ids": dict(by_decoded_id),
        "decoded_raw_id_hints": dict(by_raw_id),
        "decode_methods": dict(by_method),
        "ethertypes": dict(ethertypes),
        "top_dst_mac": dst_mac.most_common(10),
    }


def main() -> int:
    parser = argparse.ArgumentParser(description="Decode J2735 payloads from raw WSMP PCAP captures")
    parser.add_argument(
        "--input",
        required=True,
        help="Input .pcap file or directory containing .pcap files",
    )
    parser.add_argument(
        "--max-packets-per-file",
        type=int,
        default=0,
        help="Optional cap for packets per file (0 = all)",
    )
    parser.add_argument(
        "--out-summary",
        default="/tmp/wsmp_decode_summary.json",
        help="Output summary JSON path",
    )
    parser.add_argument(
        "--out-details",
        default="/tmp/wsmp_decode_details.json",
        help="Output per-file details JSON path",
    )
    args = parser.parse_args()

    input_path = Path(args.input).resolve()
    if input_path.is_file():
        files = [input_path]
    elif input_path.is_dir():
        files = sorted(input_path.glob("*.pcap"))
    else:
        raise SystemExit(f"Input path does not exist: {input_path}")

    if not files:
        raise SystemExit(f"No .pcap files found in: {input_path}")

    all_results: list[dict[str, Any]] = []
    for pcap in files:
        result = analyze_pcap(pcap, max_packets=args.max_packets_per_file)
        all_results.append(result)
        print(
            f"{pcap.name}: packets={result['packet_count']} wsmp={result['wsmp_packet_count']} "
            f"decoded={result['decoded_packet_count']} "
            f"rate={result['decode_rate_wsmp'] * 100:.2f}%"
        )

    summary = summarize(all_results)

    out_summary = Path(args.out_summary)
    out_summary.parent.mkdir(parents=True, exist_ok=True)
    out_summary.write_text(json.dumps(summary, indent=2), encoding="utf-8")

    out_details = Path(args.out_details)
    out_details.parent.mkdir(parents=True, exist_ok=True)
    out_details.write_text(json.dumps(all_results, indent=2), encoding="utf-8")

    print("\n=== Aggregate Summary ===")
    print(json.dumps(summary, indent=2))
    print(f"\nWrote summary: {out_summary}")
    print(f"Wrote details: {out_details}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
