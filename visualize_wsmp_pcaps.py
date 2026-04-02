#!/usr/bin/env python3
"""
Render per-PCAP MP4 dashboard videos for WSMP/J2735 captures.

The video summarizes all decoded message families over time and includes:
- live per-type counts/rates
- recent message timeline (all message types)
- BSM/PSM spatial motion panel
- Bird's-eye intersection view with live SPAT-colored lane overlay
"""

from __future__ import annotations

import argparse
import math
from collections import Counter, deque
from dataclasses import dataclass, field
from pathlib import Path
from typing import Any

import numpy as np
import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt
from matplotlib.animation import FFMpegWriter
from matplotlib.collections import LineCollection

from analyze_wsmp_pcaps import (
    DECODED_ID_NAME_MAP,
    ETHERTYPE_WSMP,
    extract_candidates,
    parse_pcap,
    try_decode,
)

import j2735_202409  # type: ignore


TYPE_ORDER = ["BSM", "PSM", "SPAT", "MAP", "TIM", "PDM", "SDSM", "UNKNOWN"]
TYPE_COLOR = {
    "BSM": "#00bcd4",
    "PSM": "#8bc34a",
    "SPAT": "#ff9800",
    "MAP": "#3f51b5",
    "TIM": "#9c27b0",
    "PDM": "#f06292",
    "SDSM": "#795548",
    "UNKNOWN": "#9e9e9e",
}

# J2735 SPAT eventState → display color
SPAT_STATE_COLOR = {
    "protected-Movement-Allowed": "#27ae60",
    "permissive-Movement-Allowed": "#82e0aa",
    "caution-Conflicting-Traffic": "#f1c40f",
    "stop-And-Remain": "#e74c3c",
    "pre-Movement": "#e67e22",
    "permissive-clearance": "#f39c12",
    "protected-clearance": "#f39c12",
    "unavailable": "#7f8c8d",
}
_DEFAULT_LANE_COLOR = "#555555"


@dataclass
class LaneGeom:
    """Parsed lane from a MAP intersection."""
    lane_id: int
    signal_groups: list[int]       # from connectsTo[].signalGroup
    xy_m: list[tuple[float, float]]  # local-frame metres, already projected
    is_egress: bool                # True when egressApproach is set


@dataclass
class IntersectionGeom:
    """All lane geometry for one intersection, in local-metre frame."""
    intersection_id: int
    anchor_lat: float
    anchor_lon: float
    lanes: list[LaneGeom] = field(default_factory=list)


def _latlon_to_xy_m(lat: float, lon: float, lat0: float, lon0: float) -> tuple[float, float]:
    r = 6378137.0
    x = math.radians(lon - lon0) * r * math.cos(math.radians(lat0))
    y = math.radians(lat - lat0) * r
    return x, y


def extract_map_intersections(decoded: dict[str, Any]) -> list[IntersectionGeom]:
    """Parse all intersection geometry from a decoded MAP message."""
    value = decoded.get("value")
    if not isinstance(value, dict):
        return []
    result: list[IntersectionGeom] = []
    for isc in value.get("intersections", []) or []:
        if not isinstance(isc, dict):
            continue
        isc_id = (isc.get("id") or {}).get("id", 0)
        lane_set = isc.get("laneSet") or []

        # Collect all lane nodes to compute anchor
        all_lats: list[float] = []
        all_lons: list[float] = []
        for lane in lane_set:
            for node in (lane.get("nodeList") or {}).get("nodes", []) or []:
                latlon = (node.get("delta") or {}).get("node-LatLon")
                if isinstance(latlon, dict):
                    lat_raw = latlon.get("lat")
                    lon_raw = latlon.get("lon", latlon.get("long"))
                    if isinstance(lat_raw, int) and isinstance(lon_raw, int):
                        all_lats.append(lat_raw * 1e-7)
                        all_lons.append(lon_raw * 1e-7)

        if not all_lats:
            continue
        anchor_lat = sum(all_lats) / len(all_lats)
        anchor_lon = sum(all_lons) / len(all_lons)

        isc_geom = IntersectionGeom(
            intersection_id=isc_id,
            anchor_lat=anchor_lat,
            anchor_lon=anchor_lon,
        )

        for lane in lane_set:
            lane_id = lane.get("laneID", 0)
            is_egress = "egressApproach" in lane

            signal_groups: list[int] = []
            for ct in lane.get("connectsTo") or []:
                sg = ct.get("signalGroup")
                if isinstance(sg, int):
                    signal_groups.append(sg)

            nodes = (lane.get("nodeList") or {}).get("nodes", []) or []
            xy_m: list[tuple[float, float]] = []
            for node in nodes:
                latlon = (node.get("delta") or {}).get("node-LatLon")
                if isinstance(latlon, dict):
                    lat_raw = latlon.get("lat")
                    lon_raw = latlon.get("lon", latlon.get("long"))
                    if isinstance(lat_raw, int) and isinstance(lon_raw, int):
                        xy_m.append(_latlon_to_xy_m(
                            lat_raw * 1e-7, lon_raw * 1e-7, anchor_lat, anchor_lon
                        ))

            if len(xy_m) >= 2:
                isc_geom.lanes.append(LaneGeom(
                    lane_id=lane_id,
                    signal_groups=signal_groups,
                    xy_m=xy_m,
                    is_egress=is_egress,
                ))

        result.append(isc_geom)
    return result


def extract_spat_signal_states(decoded: dict[str, Any]) -> dict[int, str]:
    """Return {signalGroup: eventState} from a decoded SPAT message."""
    value = decoded.get("value")
    if not isinstance(value, dict):
        return {}
    states: dict[int, str] = {}
    for isc in value.get("intersections", []) or []:
        for sg_entry in (isc.get("states") or []):
            sg_id = sg_entry.get("signalGroup")
            sts_list = sg_entry.get("state-time-speed") or []
            if sts_list and isinstance(sg_id, int):
                states[sg_id] = sts_list[0].get("eventState", "unavailable")
    return states


@dataclass
class Event:
    t: float
    message_name: str
    message_id: int | None
    decoded: dict[str, Any]
    src_mac: str
    dst_mac: str
    lat_deg: float | None
    lon_deg: float | None


def classify(mid: int | None) -> str:
    if mid is None:
        return "UNKNOWN"
    return DECODED_ID_NAME_MAP.get(mid, "UNKNOWN")


def extract_bsm_latlon(decoded: dict[str, Any]) -> tuple[float, float] | None:
    value = decoded.get("value")
    if not isinstance(value, dict):
        return None
    core = value.get("coreData")
    if not isinstance(core, dict):
        return None
    lat = core.get("lat")
    lon = core.get("long")
    if isinstance(lat, int) and isinstance(lon, int):
        return lat * 1e-7, lon * 1e-7
    return None


def extract_psm_latlon(decoded: dict[str, Any]) -> tuple[float, float] | None:
    value = decoded.get("value")
    if not isinstance(value, dict):
        return None

    pos = value.get("position")
    if isinstance(pos, dict):
        lat = pos.get("lat", pos.get("latitude"))
        lon = pos.get("long", pos.get("lon", pos.get("longitude")))
        if isinstance(lat, int) and isinstance(lon, int):
            return lat * 1e-7, lon * 1e-7

    core = value.get("coreData")
    if isinstance(core, dict):
        lat = core.get("lat")
        lon = core.get("long", core.get("lon"))
        if isinstance(lat, int) and isinstance(lon, int):
            return lat * 1e-7, lon * 1e-7

    return None


def latlon_to_xy_m(lat: float, lon: float, lat0: float, lon0: float) -> tuple[float, float]:
    return _latlon_to_xy_m(lat, lon, lat0, lon0)


def message_snapshot(name: str, decoded: dict[str, Any]) -> str:
    value = decoded.get("value")
    if not isinstance(value, dict):
        return f"{name}: value unavailable"

    if name == "SPAT":
        intersections = value.get("intersections")
        n = len(intersections) if isinstance(intersections, list) else 0
        return f"SPAT intersections={n}"

    if name == "MAP":
        intersections = value.get("intersections")
        n = len(intersections) if isinstance(intersections, list) else 0
        lane_count = 0
        if isinstance(intersections, list):
            for it in intersections:
                if isinstance(it, dict):
                    geom = it.get("laneSet")
                    if isinstance(geom, list):
                        lane_count += len(geom)
        return f"MAP intersections={n} lanes={lane_count}"

    if name == "TIM":
        frames = value.get("dataFrames")
        n = len(frames) if isinstance(frames, list) else 0
        msg_cnt = value.get("msgCnt")
        return f"TIM msgCnt={msg_cnt} dataFrames={n}"

    if name == "PDM":
        reqs = value.get("requests")
        n = len(reqs) if isinstance(reqs, list) else 0
        seq = value.get("sequenceNumber")
        return f"PDM sequence={seq} requests={n}"

    if name == "BSM":
        core = value.get("coreData")
        if isinstance(core, dict):
            speed = core.get("speed")
            return f"BSM speed_raw={speed}"
        return "BSM coreData unavailable"

    if name == "PSM":
        btype = value.get("basicType")
        speed = value.get("speed", (value.get("coreData") or {}).get("speed"))
        return f"PSM basicType={btype} speed_raw={speed}"

    return f"{name} msgId={decoded.get('messageId')}"


def _extract_tim_info(decoded: dict[str, Any]) -> list[dict[str, Any]]:
    """Extract TIM features for BEV overlays.

    Returns items with keys:
    - lat, lon: anchor location in degrees
    - itis_codes: advisory item ITIS codes
    - frame_type: TIM frameType
    - mutcd_code: roadSign mutcdCode when present
    - radius_m: optional light-mask radius in metres
    """
    value = decoded.get("value")
    if not isinstance(value, dict):
        return []
    result: list[dict[str, Any]] = []
    for df in value.get("dataFrames") or []:
        if not isinstance(df, dict):
            continue
        lat_raw = lon_raw = None
        radius_m: float | None = None
        for region in df.get("regions") or []:
            anchor = (region or {}).get("anchor") or {}
            if isinstance(anchor.get("lat"), int) and isinstance(anchor.get("long"), int):
                lat_raw = anchor["lat"]
                lon_raw = anchor["long"]
                # Common TIM region field (centimetres in J2735 shape/lane context).
                lane_width_cm = region.get("laneWidth")
                if isinstance(lane_width_cm, (int, float)) and lane_width_cm > 0:
                    radius_m = max(2.0, float(lane_width_cm) * 0.01)
                break
        if lat_raw is None:
            pos = ((df.get("msgId") or {}).get("roadSignID") or {}).get("position") or {}
            if isinstance(pos.get("lat"), int) and isinstance(pos.get("long"), int):
                lat_raw = pos["lat"]
                lon_raw = pos["long"]
        if lat_raw is None:
            continue
        itis_codes: list[int] = []
        for item in (df.get("content") or {}).get("advisory") or []:
            code = (item.get("item") or {}).get("itis")
            if isinstance(code, int):
                itis_codes.append(code)
        mutcd_code = (((df.get("msgId") or {}).get("roadSignID") or {}).get("mutcdCode"))
        frame_type = df.get("frameType")
        result.append(
            {
                "lat": lat_raw * 1e-7,
                "lon": lon_raw * 1e-7,
                "itis_codes": itis_codes,
                "frame_type": frame_type if isinstance(frame_type, str) else "unknown",
                "mutcd_code": mutcd_code if isinstance(mutcd_code, str) else "unknown",
                "radius_m": radius_m,
            }
        )
    return result


def decode_events_for_pcap(pcap_path: Path) -> list[Event]:
    records = parse_pcap(pcap_path)
    if not records:
        return []

    message_frame = j2735_202409.MessageFrame.MessageFrame
    t0 = records[0].ts_sec + records[0].ts_subsec * 1e-9

    events: list[Event] = []
    for rec in records:
        if rec.ethertype != ETHERTYPE_WSMP:
            continue
        candidates = extract_candidates(rec.payload)
        decoded_obj = None
        for cand, _method, _start, _clen, _raw_hint in candidates:
            decoded_obj = try_decode(cand, message_frame)
            if decoded_obj is not None:
                break
        if decoded_obj is None:
            continue

        mid = decoded_obj.get("messageId")
        name = classify(mid)

        lat = None
        lon = None
        if name == "BSM":
            ll = extract_bsm_latlon(decoded_obj)
            if ll:
                lat, lon = ll
        elif name == "PSM":
            ll = extract_psm_latlon(decoded_obj)
            if ll:
                lat, lon = ll

        t = (rec.ts_sec + rec.ts_subsec * 1e-9) - t0
        events.append(
            Event(
                t=t,
                message_name=name,
                message_id=mid,
                decoded=decoded_obj,
                src_mac=rec.src_mac,
                dst_mac=rec.dst_mac,
                lat_deg=lat,
                lon_deg=lon,
            )
        )

    events.sort(key=lambda e: e.t)
    return events


def render_stats_video(
    pcap_path: Path,
    events: list[Event],
    out_path: Path,
    fps: int,
    max_video_sec: int,
    recent_window_sec: float,
    tail_geo_sec: float,
    dpi: int,
) -> None:
    """Stats dashboard: message counts, timeline, and BSM/PSM overview (with history tail)."""
    if not events:
        raise ValueError(f"No decodable events for {pcap_path}")

    capture_duration = max(events[-1].t, 1e-3)
    video_duration = min(capture_duration, float(max_video_sec))
    speed = max(1.0, capture_duration / max(video_duration, 1e-3))
    frame_count = max(1, int(video_duration * fps))

    spatial_anchor: tuple[float, float] | None = None
    for ev in events:
        if ev.lat_deg is not None and ev.lon_deg is not None:
            spatial_anchor = (ev.lat_deg, ev.lon_deg)
            break

    fig = plt.figure(figsize=(16, 9), constrained_layout=True)
    gs = fig.add_gridspec(2, 2, width_ratios=[1.0, 2.2], height_ratios=[1.3, 1.0])
    ax_counts   = fig.add_subplot(gs[:, 0])
    ax_timeline = fig.add_subplot(gs[0, 1])
    ax_geo      = fig.add_subplot(gs[1, 1])

    bars = ax_counts.bar(TYPE_ORDER, [0] * len(TYPE_ORDER),
                         color=[TYPE_COLOR[t] for t in TYPE_ORDER])
    ax_counts.set_title("Decoded Message Counts")
    ax_counts.set_ylabel("count")
    ax_counts.tick_params(axis="x", rotation=35)

    y_levels = {t: i for i, t in enumerate(TYPE_ORDER)}
    ax_timeline.set_title("Recent Message Timeline")
    ax_timeline.set_ylabel("message type")
    ax_timeline.set_yticks(range(len(TYPE_ORDER)))
    ax_timeline.set_yticklabels(TYPE_ORDER)
    ax_timeline.set_xlabel("capture time (s)")
    timeline_scatter: dict = {}
    for t in TYPE_ORDER:
        sc = ax_timeline.scatter([], [], s=10, alpha=0.8, color=TYPE_COLOR[t], label=t)
        timeline_scatter[t] = sc

    ax_geo.set_title("BSM/PSM Spatial Overview (recent window)")
    ax_geo.set_xlabel("x (m)")
    ax_geo.set_ylabel("y (m)")
    ax_geo.grid(True, alpha=0.3)
    bsm_sc = ax_geo.scatter([], [], s=12, color=TYPE_COLOR["BSM"], alpha=0.7, label="BSM")
    psm_sc = ax_geo.scatter([], [], s=18, color=TYPE_COLOR["PSM"], alpha=0.9, label="PSM")
    ax_geo.legend(loc="upper right", fontsize=8)

    info_text = fig.text(0.01, 0.005, "", family="monospace", fontsize=8)

    total_counts: Counter[str] = Counter()
    one_sec_window: dict[str, deque[float]] = {t: deque() for t in TYPE_ORDER}
    recent_events: dict[str, deque[tuple[float, float]]] = {t: deque() for t in TYPE_ORDER}
    raw_bsm_pts: deque[tuple[float, float, float]] = deque()
    raw_psm_pts: deque[tuple[float, float, float]] = deque()
    latest_msg: dict[str, Event] = {}

    idx = 0
    writer = FFMpegWriter(fps=fps, codec="libx264", bitrate=5000)
    out_path.parent.mkdir(parents=True, exist_ok=True)

    with writer.saving(fig, str(out_path), dpi=dpi):
        for frame in range(frame_count):
            video_t = frame / float(fps)
            cap_t = min(capture_duration, video_t * speed)

            while idx < len(events) and events[idx].t <= cap_t:
                ev = events[idx]
                idx += 1
                name = ev.message_name if ev.message_name in TYPE_ORDER else "UNKNOWN"
                total_counts[name] += 1
                latest_msg[name] = ev
                one_sec_window[name].append(ev.t)
                recent_events[name].append((ev.t, float(y_levels[name])))
                if ev.lat_deg is not None and ev.lon_deg is not None:
                    if name == "BSM":
                        raw_bsm_pts.append((ev.t, ev.lat_deg, ev.lon_deg))
                    elif name == "PSM":
                        raw_psm_pts.append((ev.t, ev.lat_deg, ev.lon_deg))

            for t in TYPE_ORDER:
                while one_sec_window[t] and one_sec_window[t][0] < cap_t - 1.0:
                    one_sec_window[t].popleft()
                while recent_events[t] and recent_events[t][0][0] < cap_t - recent_window_sec:
                    recent_events[t].popleft()
            while raw_bsm_pts and raw_bsm_pts[0][0] < cap_t - tail_geo_sec:
                raw_bsm_pts.popleft()
            while raw_psm_pts and raw_psm_pts[0][0] < cap_t - tail_geo_sec:
                raw_psm_pts.popleft()

            max_count = max(1, max(total_counts.values()) if total_counts else 1)
            ax_counts.set_ylim(0, max_count * 1.15)
            for bar, t in zip(bars, TYPE_ORDER):
                bar.set_height(total_counts[t])

            ax_timeline.set_xlim(max(0.0, cap_t - recent_window_sec), cap_t + 0.001)
            for t in TYPE_ORDER:
                if recent_events[t]:
                    xs = [p[0] for p in recent_events[t]]
                    ys = [p[1] for p in recent_events[t]]
                    timeline_scatter[t].set_offsets(list(zip(xs, ys)))
                else:
                    timeline_scatter[t].set_offsets(np.empty((0, 2)))

            if spatial_anchor:
                a_lat, a_lon = spatial_anchor
                bsm_xy = [_latlon_to_xy_m(lat, lon, a_lat, a_lon) for _, lat, lon in raw_bsm_pts]
                psm_xy = [_latlon_to_xy_m(lat, lon, a_lat, a_lon) for _, lat, lon in raw_psm_pts]
            else:
                bsm_xy, psm_xy = [], []
            bsm_sc.set_offsets(bsm_xy if bsm_xy else np.empty((0, 2)))
            psm_sc.set_offsets(psm_xy if psm_xy else np.empty((0, 2)))
            all_geo = bsm_xy + psm_xy
            if all_geo:
                gxs = [p[0] for p in all_geo]
                gys = [p[1] for p in all_geo]
                pad_x = max(10.0, (max(gxs) - min(gxs)) * 0.1)
                pad_y = max(10.0, (max(gys) - min(gys)) * 0.1)
                ax_geo.set_xlim(min(gxs) - pad_x, max(gxs) + pad_x)
                ax_geo.set_ylim(min(gys) - pad_y, max(gys) + pad_y)

            rates = {t: len(one_sec_window[t]) for t in TYPE_ORDER}
            headline = (
                f"file={pcap_path.name}  capture_t={cap_t:8.2f}s/{capture_duration:8.2f}s  "
                f"video_t={video_t:7.2f}s  speed={speed:.2f}x  decoded={idx}/{len(events)}"
            )
            snapshot_lines = []
            for t in ("BSM", "PSM", "SPAT", "MAP", "TIM", "PDM"):
                if t in latest_msg:
                    snapshot_lines.append(message_snapshot(t, latest_msg[t].decoded))
            rates_line = " | ".join(f"{t}:{rates[t]:2d}/s" for t in TYPE_ORDER)
            info_text.set_text(headline + "\n" + rates_line + "\n" + " ; ".join(snapshot_lines[:4]))

            writer.grab_frame()

    plt.close(fig)


def render_bev_video(
    pcap_path: Path,
    events: list[Event],
    out_path: Path,
    fps: int,
    max_video_sec: int,
    dpi: int,
) -> None:
    """Intersection Bird's-Eye View video: MAP lanes coloured by live SPAT state,
    live (no-history) BSM/PSM dots, and live TIM anchor/mask overlays."""
    import matplotlib.patches as mpatches
    import matplotlib.lines as mlines

    if not events:
        raise ValueError(f"No decodable events for {pcap_path}")

    capture_duration = max(events[-1].t, 1e-3)
    video_duration = min(capture_duration, float(max_video_sec))
    speed = max(1.0, capture_duration / max(video_duration, 1e-3))
    frame_count = max(1, int(video_duration * fps))

    # Pre-scan MAP
    intersection_geom: IntersectionGeom | None = None
    for ev in events:
        if ev.message_name == "MAP":
            isc_list = extract_map_intersections(ev.decoded)
            if isc_list:
                intersection_geom = isc_list[0]
                break

    BG = "#12121f"
    fig = plt.figure(figsize=(18, 10), facecolor=BG, constrained_layout=True)
    gs = fig.add_gridspec(1, 2, width_ratios=[1, 3.5])
    ax_info = fig.add_subplot(gs[0, 0])
    ax_bev  = fig.add_subplot(gs[0, 1])

    for ax in (ax_info, ax_bev):
        ax.set_facecolor(BG)

    # ── Info panel (left) ──────────────────────────────────────────────────────
    ax_info.axis("off")

    hdr_txt = ax_info.text(0.05, 0.99, "", color="white", fontsize=8.5, va="top",
                            fontweight="bold", transform=ax_info.transAxes,
                            family="monospace")
    ax_info.text(0.05, 0.86, "── SPAT Signal States ──", color="#ff9800",
                 fontsize=8, va="top", transform=ax_info.transAxes, fontweight="bold")
    MAX_SG = 14
    sg_texts = []
    for i in range(MAX_SG):
        txt = ax_info.text(0.05, 0.82 - i * 0.039, "", fontsize=7.5, va="top",
                            transform=ax_info.transAxes, family="monospace",
                            color=_DEFAULT_LANE_COLOR)
        sg_texts.append(txt)

    ax_info.text(0.05, 0.26, "── TIM Messages ──", color="#ff9800",
                 fontsize=8, va="top", transform=ax_info.transAxes, fontweight="bold")
    tim_txt = ax_info.text(0.05, 0.22, "(no TIM yet)", color="#e0c080", fontsize=7,
                            va="top", transform=ax_info.transAxes, family="monospace")

    ax_info.text(0.05, 0.095, "── Live Counts ──", color="#aaa",
                 fontsize=8, va="top", transform=ax_info.transAxes, fontweight="bold")
    counts_txt = ax_info.text(0.05, 0.06, "", color="#aaa", fontsize=7.5,
                               va="top", transform=ax_info.transAxes, family="monospace")

    # ── BEV axes ───────────────────────────────────────────────────────────────
    for spine in ax_bev.spines.values():
        spine.set_edgecolor("#334")
    ax_bev.set_title(f"Intersection BEV — {pcap_path.stem}", color="white", fontsize=11)
    ax_bev.set_xlabel("x (m)", color="#aaa")
    ax_bev.set_ylabel("y (m)", color="#aaa")
    ax_bev.tick_params(colors="#aaa")
    ax_bev.set_aspect("equal")
    ax_bev.grid(True, alpha=0.15, color="white")
    ax_bev.axhline(0, color="#446", lw=0.8, zorder=1)
    ax_bev.axvline(0, color="#446", lw=0.8, zorder=1)

    lc: LineCollection | None = None
    lc_lane_order: list[LaneGeom] = []
    extent = 100.0

    if intersection_geom is not None:
        lc_lane_order = intersection_geom.lanes
        lane_segments = [list(lane.xy_m) for lane in lc_lane_order]
        lc = LineCollection(
            lane_segments,
            colors=[_DEFAULT_LANE_COLOR] * len(lc_lane_order),
            linewidths=[3.5 if not lane.is_egress else 1.8 for lane in lc_lane_order],
            linestyles=["solid" if not lane.is_egress else "dashed" for lane in lc_lane_order],
            zorder=2, alpha=0.9,
        )
        ax_bev.add_collection(lc)
        ax_bev.plot(0, 0, "w+", markersize=14, markeredgewidth=3, zorder=4)
        all_xy_static = [pt for lane in lc_lane_order for pt in lane.xy_m]
        if all_xy_static:
            xs_s = [p[0] for p in all_xy_static]
            ys_s = [p[1] for p in all_xy_static]
            extent = max(50.0, max(abs(min(xs_s)), abs(max(xs_s)),
                                   abs(min(ys_s)), abs(max(ys_s))) + 30)
        ax_bev.set_xlim(-extent, extent)
        ax_bev.set_ylim(-extent, extent)
        for lane in lc_lane_order:
            if lane.signal_groups and len(lane.xy_m) >= 2:
                mid = lane.xy_m[len(lane.xy_m) // 2]
                lbl = ",".join(str(g) for g in lane.signal_groups[:2])
                ax_bev.text(mid[0], mid[1], lbl, fontsize=5.5, ha="center", va="center",
                            color="white", zorder=7, alpha=0.65)
    else:
        ax_bev.set_xlim(-extent, extent)
        ax_bev.set_ylim(-extent, extent)
        ax_bev.text(0, 0, "No MAP data in recording", ha="center", va="center",
                    color="#aaa", fontsize=13)

    b_lat0 = intersection_geom.anchor_lat if intersection_geom else 0.0
    b_lon0 = intersection_geom.anchor_lon if intersection_geom else 0.0

    tim_sc = ax_bev.scatter([], [], s=120, marker="^", color="#ff9800",
                            edgecolors="white", linewidths=0.7, zorder=8, alpha=0.95)
    tim_radius_artists: list[Any] = []
    tim_label_artists: list[Any] = []
    tim_overlay_txt = ax_bev.text(
        0.012,
        0.985,
        "",
        transform=ax_bev.transAxes,
        va="top",
        ha="left",
        fontsize=7,
        color="#ffd28a",
        bbox={"facecolor": "#171728", "alpha": 0.35, "edgecolor": "none", "pad": 3},
        zorder=10,
        family="monospace",
    )

    # Live BSM/PSM scatter (latest position per MAC only, no tail)
    bev_bsm_sc = ax_bev.scatter([], [], s=70, color=TYPE_COLOR["BSM"],
                                  alpha=0.92, zorder=5,
                                  edgecolors="white", linewidths=0.6, label="BSM")
    bev_psm_sc = ax_bev.scatter([], [], s=100, color=TYPE_COLOR["PSM"],
                                  alpha=0.95, zorder=6, marker="D",
                                  edgecolors="white", linewidths=0.6, label="PSM")

    legend_handles = [
        mpatches.Patch(color=SPAT_STATE_COLOR["protected-Movement-Allowed"],  label="Go (protected)"),
        mpatches.Patch(color=SPAT_STATE_COLOR["permissive-Movement-Allowed"], label="Go (permissive)"),
        mpatches.Patch(color=SPAT_STATE_COLOR["caution-Conflicting-Traffic"], label="Caution"),
        mpatches.Patch(color=SPAT_STATE_COLOR["stop-And-Remain"],             label="Stop"),
        mpatches.Patch(color=SPAT_STATE_COLOR["pre-Movement"],                label="Pre-movement"),
        mpatches.Patch(color=_DEFAULT_LANE_COLOR,                             label="Unknown / egress"),
        mlines.Line2D([0], [0], marker="o", color=TYPE_COLOR["BSM"], label="BSM (live pos)",
                      markersize=7, linewidth=0),
        mlines.Line2D([0], [0], marker="D", color=TYPE_COLOR["PSM"], label="PSM (live pos)",
                      markersize=7, linewidth=0),
        mlines.Line2D([0], [0], marker="^", color="#ff9800", label="TIM anchor",
                      markersize=7, linewidth=0),
    ]
    ax_bev.legend(handles=legend_handles, loc="lower right", fontsize=6.5,
                   title="Legend", title_fontsize=7.5, framealpha=0.85,
                   facecolor="#1a1a2e", labelcolor="white", edgecolor="#446")

    # ── Per-frame state ────────────────────────────────────────────────────────
    total_counts: Counter[str] = Counter()
    one_sec_window: dict[str, deque[float]] = {t: deque() for t in TYPE_ORDER}
    latest_msg: dict[str, Event] = {}
    latest_bsm_by_mac: dict[str, tuple[float, float]] = {}
    latest_psm_by_mac: dict[str, tuple[float, float]] = {}
    latest_tim_info: list[dict[str, Any]] = []

    idx = 0
    writer = FFMpegWriter(fps=fps, codec="libx264", bitrate=5000)
    out_path.parent.mkdir(parents=True, exist_ok=True)

    with writer.saving(fig, str(out_path), dpi=dpi):
        for frame in range(frame_count):
            video_t = frame / float(fps)
            cap_t = min(capture_duration, video_t * speed)

            while idx < len(events) and events[idx].t <= cap_t:
                ev = events[idx]
                idx += 1
                name = ev.message_name if ev.message_name in TYPE_ORDER else "UNKNOWN"
                total_counts[name] += 1
                latest_msg[name] = ev
                one_sec_window[name].append(ev.t)
                if ev.lat_deg is not None and ev.lon_deg is not None:
                    if name == "BSM":
                        latest_bsm_by_mac[ev.src_mac] = (ev.lat_deg, ev.lon_deg)
                    elif name == "PSM":
                        latest_psm_by_mac[ev.src_mac] = (ev.lat_deg, ev.lon_deg)
                if name == "TIM":
                    latest_tim_info = _extract_tim_info(ev.decoded)

            for t in TYPE_ORDER:
                while one_sec_window[t] and one_sec_window[t][0] < cap_t - 1.0:
                    one_sec_window[t].popleft()

            # Update SPAT lane colours
            if intersection_geom is not None and lc is not None and "SPAT" in latest_msg:
                spat_states = extract_spat_signal_states(latest_msg["SPAT"].decoded)
                colors = []
                for lane in lc_lane_order:
                    color = _DEFAULT_LANE_COLOR
                    for sg_id in lane.signal_groups:
                        st = spat_states.get(sg_id)
                        if st is not None:
                            color = SPAT_STATE_COLOR.get(st, _DEFAULT_LANE_COLOR)
                            break
                    colors.append(color)
                lc.set_colors(colors)

            # Update live BSM/PSM dots (current position only, no trail)
            bev_bsm = [_latlon_to_xy_m(lat, lon, b_lat0, b_lon0)
                       for lat, lon in latest_bsm_by_mac.values()]
            bev_psm = [_latlon_to_xy_m(lat, lon, b_lat0, b_lon0)
                       for lat, lon in latest_psm_by_mac.values()]
            bev_bsm_sc.set_offsets(bev_bsm if bev_bsm else np.empty((0, 2)))
            bev_psm_sc.set_offsets(bev_psm if bev_psm else np.empty((0, 2)))

            # Live TIM overlays: anchors, optional radius masks, and compact labels.
            for artist in tim_radius_artists:
                artist.remove()
            tim_radius_artists.clear()
            for artist in tim_label_artists:
                artist.remove()
            tim_label_artists.clear()

            if latest_tim_info:
                tim_xy: list[tuple[float, float]] = []
                overlay_lines: list[str] = []
                for item in latest_tim_info[:8]:
                    lat = item.get("lat")
                    lon = item.get("lon")
                    if not isinstance(lat, float) or not isinstance(lon, float):
                        continue
                    x, y = _latlon_to_xy_m(lat, lon, b_lat0, b_lon0)
                    tim_xy.append((x, y))

                    radius_m = item.get("radius_m")
                    if isinstance(radius_m, (int, float)) and radius_m > 0:
                        c = plt.Circle((x, y), float(radius_m), color="#ffd46a", alpha=0.12,
                                       fill=True, lw=0, zorder=3)
                        ax_bev.add_patch(c)
                        tim_radius_artists.append(c)

                    frame_type = str(item.get("frame_type", "unknown"))
                    mutcd = str(item.get("mutcd_code", "unknown"))
                    short_label = frame_type
                    if mutcd != "unknown":
                        short_label += f"/{mutcd}"
                    label = ax_bev.text(
                        x,
                        y + extent * 0.02,
                        short_label[:24],
                        fontsize=5.5,
                        ha="center",
                        va="bottom",
                        color="#ffd28a",
                        zorder=9,
                        alpha=0.85,
                    )
                    tim_label_artists.append(label)

                    itis_codes = item.get("itis_codes")
                    codes = " ".join(str(c) for c in (itis_codes[:3] if isinstance(itis_codes, list) else []))
                    overlay_lines.append(f"{frame_type}/{mutcd} ITIS:{codes}".strip())

                tim_sc.set_offsets(tim_xy if tim_xy else np.empty((0, 2)))
                tim_overlay_txt.set_text("TIM:\n" + "\n".join(overlay_lines[:5]))
            else:
                tim_sc.set_offsets(np.empty((0, 2)))
                tim_overlay_txt.set_text("")

            # ── Info panel updates ─────────────────────────────────────────────
            hdr_txt.set_text(
                f"File: {pcap_path.name}\n"
                f"t = {cap_t:7.2f}s / {capture_duration:.1f}s\n"
                f"speed = {speed:.2f}×   frame {frame + 1}/{frame_count}"
            )

            if "SPAT" in latest_msg:
                spat_states = extract_spat_signal_states(latest_msg["SPAT"].decoded)
                sorted_sgs = sorted(spat_states.items())
                for i, txt in enumerate(sg_texts):
                    if i < len(sorted_sgs):
                        sg_id, state = sorted_sgs[i]
                        color = SPAT_STATE_COLOR.get(state, _DEFAULT_LANE_COLOR)
                        txt.set_text(f"■ SG{sg_id:2d}: {state.replace('-', ' ')[:26]}")
                        txt.set_color(color)
                        txt.set_visible(True)
                    else:
                        txt.set_visible(False)
            else:
                for txt in sg_texts:
                    txt.set_visible(False)

            if latest_tim_info:
                tim_lines = []
                for item in latest_tim_info[:5]:
                    lat = item.get("lat")
                    lon = item.get("lon")
                    if not isinstance(lat, float) or not isinstance(lon, float):
                        continue
                    x, y = _latlon_to_xy_m(lat, lon, b_lat0, b_lon0)
                    itis_codes = item.get("itis_codes")
                    codes = " ".join(str(c) for c in (itis_codes[:5] if isinstance(itis_codes, list) else []))
                    frame_type = str(item.get("frame_type", "unknown"))
                    mutcd = str(item.get("mutcd_code", "unknown"))
                    tim_lines.append(f"({x:+.0f},{y:+.0f})m {frame_type}/{mutcd}\n  ITIS: {codes}")
                tim_txt.set_text("\n".join(tim_lines))
            else:
                tim_txt.set_text("(no TIM received yet)")

            rates = {t: len(one_sec_window[t]) for t in TYPE_ORDER}
            count_lines = [
                f"{t:6s}: {total_counts[t]:5d}  ({rates[t]:2d}/s)"
                for t in ("BSM", "PSM", "SPAT", "MAP", "TIM", "PDM")
            ]
            counts_txt.set_text("\n".join(count_lines))

            writer.grab_frame()

    plt.close(fig)


def main() -> int:
    parser = argparse.ArgumentParser(description="Render dashboard videos from WSMP/J2735 PCAP captures")
    parser.add_argument("--input", required=True, help="Input .pcap or directory")
    parser.add_argument("--output-dir", default="/tmp/wsmp_videos", help="Output directory for videos")
    parser.add_argument("--fps", type=int, default=12, help="Video frame rate")
    parser.add_argument("--max-video-sec", type=int, default=90,
                        help="Max rendered duration per video (capture is time-compressed if longer)")
    parser.add_argument("--recent-window-sec", type=float, default=30.0,
                        help="Recent history window for timeline/geo panels (capture seconds)")
    parser.add_argument("--geo-tail-sec", type=float, default=45.0,
                        help="BSM/PSM history tail in stats video (capture seconds)")
    parser.add_argument("--dpi", type=int, default=120, help="Video DPI")
    args = parser.parse_args()

    input_path = Path(args.input).resolve()
    if input_path.is_file():
        files = [input_path]
    else:
        files = sorted(input_path.glob("*.pcap"))
    if not files:
        raise SystemExit(f"No pcap files found in {input_path}")

    out_dir = Path(args.output_dir).resolve()
    out_dir.mkdir(parents=True, exist_ok=True)

    for pcap in files:
        print(f"Decoding events from {pcap.name} ...")
        events = decode_events_for_pcap(pcap)
        if not events:
            print(f"  skipped: no decodable events")
            continue

        stats_file = out_dir / f"{pcap.stem}_stats.mp4"
        bev_file   = out_dir / f"{pcap.stem}_bev.mp4"

        print(f"  Rendering stats video → {stats_file.name}  ({len(events)} events)")
        render_stats_video(
            pcap_path=pcap,
            events=events,
            out_path=stats_file,
            fps=args.fps,
            max_video_sec=args.max_video_sec,
            recent_window_sec=args.recent_window_sec,
            tail_geo_sec=args.geo_tail_sec,
            dpi=args.dpi,
        )
        print(f"    wrote {stats_file}")

        print(f"  Rendering BEV video   → {bev_file.name}")
        render_bev_video(
            pcap_path=pcap,
            events=events,
            out_path=bev_file,
            fps=args.fps,
            max_video_sec=args.max_video_sec,
            dpi=args.dpi,
        )
        print(f"    wrote {bev_file}")

    print(f"Done. Videos are in {out_dir}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
