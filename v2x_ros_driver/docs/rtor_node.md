# V2X RTOR Hazard Node

`v2x_rtor_node.py` is a Python ROS 2 node that detects right-turn-on-red
(RTOR) hazards by consuming the OBU's raw inbound V2X stream.

## Inputs

The node subscribes to a single topic and decodes UPER frames inline using
the `j2735_202409` Python decoder (same as the inbound marker visualizer):

| Topic | Type | Source |
| --- | --- | --- |
| `/comms/inbound_binary_msg` | `carma_driver_msgs/ByteArray` | `v2x_ros_driver_node` (radio bridge) |

The OBU loops back its own outgoing BSM into the inbound stream; the node
identifies the ego vehicle by matching the BSM `coreData.id` against the
`obu_reference_bsm_id` parameter (default `e153df70`).

## Gating logic

A RTOR hazard cycle fires only when **all** of the following hold:

1. An ego BSM has been received recently.
2. There is a cached MAP intersection within `intersection_radius_m` of the ego.
3. The ego's lat/lon matches one of that intersection's lanes within
   `lane_match_max_distance_m` (point-to-polyline distance).
4. The matched lane's `connectsTo[].connectingLane.maneuver` either explicitly
   allows a right turn or is unknown (we do not assume "no" if the field is
   missing — many MAP profiles omit it).
5. If `require_right_turn_signal=True`, the ego BSM partII has the
   right-turn-signal bit set and the left-turn-signal bit clear.
6. The SPAT signal-group governing the matched lane is in `stop-And-Remain`
   or `stop-Then-Proceed` (red), with a fresh-enough timestamp.

When all six hold, the node classifies remote vehicles and VRUs near the
intersection by distance and TTC, and publishes hazards.

## VRU crosswalk geometry

VRU (Pedestrian/Cyclist) tracks received via PSM are evaluated independently
of the six-gate RTOR cycle and are always visualised on the overlay.

### MAP lane classification

When a MAP message is parsed, every lane is inspected for
`laneAttributes.laneType`. Lanes whose type contains `crosswalk` or
`pedestrian` are flagged `is_crosswalk=True` and their decoded lat/lon
polylines are stored in the intersection cache.

### Distance measurement

For each active VRU track the reference distance `d_ref` is computed as:

1. **Crosswalk geometry available** — minimum point-to-polyline distance from
   the VRU's lat/lon to every crosswalk lane polyline in the nearest
   intersection.
2. **No crosswalk geometry** (fallback) — straight-line distance from the VRU
   to the ego vehicle.

### Severity tiers

| Tier | Condition | Overlay colour |
|------|-----------|----------------|
| **WARNING** | `d_ref ≤ vru_warning_distance_m` (default 4 m) | Red — VRU is on/inside the crosswalk |
| **CAUTION** | `d_ref ≤ vru_caution_distance_m` (default 10 m) | Amber — VRU is near the crosswalk |
| Vicinity | VRU within `intersection_radius_m` but outside caution zone | Light-blue — VRU in intersection area |
| Clear | No VRUs in vicinity | Grey — none |

WARNING is a strict subset of CAUTION (a VRU counted as WARNING is also
counted as CAUTION internally).

## Outputs

| Topic | Type | Notes |
| --- | --- | --- |
| `/v2x/rtor_alerts` | `std_msgs/String` | JSON: `severity`, `intersection`, `lane_id`, `signal_group`, `ego`, `hazards[]` |
| `/v2x/rtor_markers` | `visualization_msgs/MarkerArray` | One coloured cylinder per hazard, in `frame_id` (default `world`) |
| `/v2x/rtor_overlay_text` | `rviz_2d_overlay_msgs/OverlayText` | RTOR lane/signal status overlay (position top-left) |
| `/v2x/rtor_vru_overlay_text` | `rviz_2d_overlay_msgs/OverlayText` | VRU severity overlay — WARNING/CAUTION/vicinity/none |

The overlay package is resolved at runtime: `rviz_2d_overlay_msgs` is tried
first, then `jsk_rviz_plugins`. If neither is installed the publishers are
skipped silently.

## Parameters

| Name | Default | Description |
| --- | --- | --- |
| `inbound_topic` | `/comms/inbound_binary_msg` | Source ByteArray topic |
| `alerts_topic`, `markers_topic`, `overlay_topic` | `/v2x/rtor_*` | Output topic names |
| `vru_stats_overlay_topic` | `/v2x/rtor_vru_overlay_text` | VRU severity overlay topic |
| `frame_id` | `world` | TF frame for marker placement |
| `obu_reference_bsm_id` | `e153df70` | Hex TemporaryID identifying the ego loopback BSM |
| `require_right_turn_signal` | `True` | Gate evaluation on ego right-turn-signal flag |
| `intersection_radius_m` | `80.0` | Max ego-to-refPoint distance to consider an intersection |
| `lane_match_max_distance_m` | `4.5` | Max point-to-polyline distance to claim a lane |
| `vehicle_warning_distance_m` / `_caution_distance_m` | `12.0` / `30.0` | Vehicle hazard distance thresholds |
| `vehicle_warning_ttc_sec` / `_caution_ttc_sec` | `2.5` / `5.0` | Vehicle hazard TTC thresholds |
| `vru_warning_distance_m` / `_caution_distance_m` | `4.0` / `10.0` | VRU hazard distance thresholds |
| `heading_conflict_min_deg` | `65.0` | Heading delta to label a remote vehicle as crossing/oncoming |
| `remote_track_timeout_sec` | `2.5` | TTL on remote BSM/PSM tracks |
| `spat_timeout_sec` | `3.0` | Max age of cached SPAT before we refuse to gate on it |
| `evaluator_rate_hz` | `10.0` | RTOR evaluation cadence |
| `dedupe_window_sec` | `1.0` | Suppress identical hazard signatures within this window |
| `enable_deep_scan` | `True` | Brute-force UPER framing recovery on otherwise-undecodable bytes |
| `log_unknown_lights` | `True` | Warn once if BSM partII turn-signal flags can't be located |

## Run

Via the package's launch file (off by default):

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py enable_rtor_node:=True
```

Standalone:

```bash
ros2 run v2x_ros_driver v2x_rtor_node.py --ros-args \
  -p inbound_topic:=/comms/inbound_binary_msg \
  -p obu_reference_bsm_id:=e153df70 \
  -p require_right_turn_signal:=False
```

## Diagnostics for first-bringup

* The node logs once if it cannot find any `lights` field inside an ego BSM.
  If you see that warning, dump a few BSMs (`ros2 topic echo
  /comms/inbound_binary_msg --field content`, then decode manually) to see
  which key carries the partII `VehicleSafetyExtensions.lights`. Either
  extend `_extract_bsm_lights_flags` to recognise that shape, or set
  `require_right_turn_signal:=False` so the gate doesn't block testing.
* If MAP messages are flowing but no alerts ever fire, check whether
  `connectsTo[].connectingLane.maneuver` is populated for your local
  intersection. The node treats unknown maneuvers as candidate right-turn
  lanes, so the more likely failure is `lane.signal_group is None`, in
  which case the SPAT-red gate cannot be evaluated.
* The `/v2x/rtor_alerts` JSON includes `intersection`, `lane_id`, and
  `signal_group` for each hazard cycle so you can verify the gate is
  picking the right intersection.
