# V2X RTOR Hazard Node

`v2x_rtor_node.py` is a Python ROS 2 node that detects right-turn-on-red
(RTOR) hazards by consuming the OBU's raw inbound V2X stream.

It decodes MAP, SPAT, BSM, PSM, and SDSM messages from `/comms/inbound_binary_msg`,
tracks the ego vehicle by looped-back BSM TemporaryID, caches MAP geometry,
and publishes both RTOR hazard alerts and lane-status/debug state for the
matched approach lane.

Inbound message routing uses driver-provided type labels when available, then
confirms structure for ambiguous PSM labels. If a message arrives labeled PSM
but payload structure matches BSM (`coreData`) or SDSM (`objects` + `refPos` or
SDSM messageId), RTOR re-routes it away from VRU tracking.

## Inputs

The node subscribes to a single topic and decodes UPER frames inline using
the `j2735_202409` Python decoder (same as the inbound marker visualizer):

| Topic | Type | Source |
| --- | --- | --- |
| `/comms/inbound_binary_msg` | `carma_driver_msgs/ByteArray` | `v2x_ros_driver_node` (radio bridge) |

The OBU loops back its own outgoing BSM into the inbound stream; the node
identifies the ego vehicle by matching the BSM `coreData.id` against the
`obu_reference_bsm_id` parameter (default `e153df70`).

The node also subscribes to a DBW turn-signal report topic when available:

| Topic | Type | Source |
| --- | --- | --- |
| `/raptor_dbw_interface/other_actuators_report` | `raptor_dbw_msgs/OtherActuatorsReport` | DBW interface, used to gate on turn signal state |

## Gating logic

A RTOR hazard cycle fires only when **all** of the following hold:

1. An ego BSM has been received recently.
2. There is a cached MAP intersection within `intersection_radius_m` of the ego.
3. The ego's lat/lon matches one of that intersection's lanes within
   `lane_match_max_distance_m` (point-to-polyline distance).
4. The matched lane's `connectsTo[].connectingLane.maneuver` is accepted by
   one of these paths:
   - it explicitly allows a right turn,
   - it is missing/unknown, or
   - it explicitly disallows right turn but
     `allow_alerts_without_map_right_turn=True`.
5. If `require_right_turn_signal=True`, the ego BSM partII has the
   right-turn-signal bit set and the left-turn-signal bit clear.
6. The SPAT signal-group governing the matched lane is in `stop-And-Remain`
   or `stop-Then-Proceed` (red), with a fresh-enough timestamp.

When all six hold, the node classifies remote vehicles and VRUs near the
intersection by distance and TTC, and publishes hazards.

Before hazard gating completes, the node also publishes a `lane_status` JSON
message to `alerts_topic` whenever the matched lane or lane-allowance state
changes. That message includes `right_turn_allowed`, a normalized
`right_turn_allowance` string, the current right-turn-signal state, and the
`allow_alerts_without_map_right_turn` override.

## Map cache

When `enable_map_cache=True`, decoded MAP intersections are written to
`map_cache_file` and reloaded on startup. This allows RTOR evaluation to start
using the last known MAP geometry before fresh MAP messages arrive.

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
| **WARNING** | `d_ref ≤ vru_warning_distance_m` (default 2 m) | Red — VRU is on/inside the crosswalk |
| **CAUTION** | `d_ref ≤ vru_caution_distance_m` (default 10 m) | Amber — VRU is near the crosswalk |
| Vicinity | VRU within `intersection_radius_m` but outside caution zone | Light-blue — VRU in intersection area |
| Clear | No VRUs in vicinity | Grey — none |

WARNING is a strict subset of CAUTION (a VRU counted as WARNING is also
counted as CAUTION internally).

## Outputs

| Topic | Type | Notes |
| --- | --- | --- |
| `/v2x/rtor_alerts` | `std_msgs/String` | JSON string topic used for both `lane_status` state updates and hazard alerts |
| `/v2x/rtor_markers` | `visualization_msgs/MarkerArray` | One coloured cylinder per hazard, in `frame_id` (default `world`) |
| `/v2x/rtor_overlay_text` | `rviz_2d_overlay_msgs/OverlayText` | Lane status overlay plus active hazard summary text |
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
| `require_right_turn_signal` | `False` | Gate evaluation on ego right-turn-signal flag |
| `allow_alerts_without_map_right_turn` | `True` | Testing override: allow alerts even when MAP lane maneuver data explicitly disallows right turn |
| `intersection_radius_m` | `80.0` | Max ego-to-refPoint distance to consider an intersection |
| `lane_match_max_distance_m` | `4.5` | Max point-to-polyline distance to claim a lane |
| `vehicle_warning_distance_m` / `_caution_distance_m` | `12.0` / `30.0` | Vehicle hazard distance thresholds |
| `vehicle_warning_ttc_sec` / `_caution_ttc_sec` | `2.5` / `5.0` | Vehicle hazard TTC thresholds |
| `vru_warning_distance_m` / `_caution_distance_m` | `2.0` / `10.0` | VRU hazard distance thresholds |
| `heading_conflict_min_deg` | `65.0` | Heading delta to label a remote vehicle as crossing/oncoming |
| `remote_track_timeout_sec` | `2.5` | TTL on remote BSM/PSM tracks |
| `spat_timeout_sec` | `3.0` | Max age of cached SPAT before we refuse to gate on it |
| `evaluator_rate_hz` | `10.0` | RTOR evaluation cadence |
| `dedupe_window_sec` | `1.0` | Suppress identical hazard signatures within this window |
| `enable_deep_scan` | `True` | Brute-force UPER framing recovery on otherwise-undecodable bytes |
| `log_unknown_lights` | `True` | Warn once if BSM partII turn-signal flags can't be located |
| `dbw_actuators_topic` | `/raptor_dbw_interface/other_actuators_report` | Preferred turn-signal source when DBW reports are available |
| `log_ego_partii_once` / `log_ego_partii_max_chars` | `False` / `6000` | Dump the ego BSM partII payload once for decoder-shape debugging |
| `debug_status_enable` / `debug_status_period_sec` | `True` / `1.0` | Periodic gate-state logging |
| `debug_turn_signal_changes` | `True` | Log DBW turn-signal state transitions |
| `debug_rx_counters_enable` / `debug_rx_counter_period_sec` | `True` / `5.0` | Periodic message-type counters |
| `debug_lane_match_enable` / `debug_lane_match_period_sec` | `True` / `2.0` | Log nearest-lane information when lane match fails |
| `turn_signal_latch_sec` | `1.2` | Keep right-turn asserted across a brief off portion of the blink cycle |
| `enable_map_cache` / `map_cache_file` | `True` / `/tmp/v2x_rtor_map_cache.json` | Persist and reload decoded MAP geometry |

## Launch surface

Base package launch arguments in `v2x_ros_driver.launch.py` default the RTOR
node on and the MAP-right-turn override off:

| Launch Argument | Default |
| --- | --- |
| `enable_rtor_node` | `True` |
| `rtor_allow_alerts_without_map_right_turn` | `False` |

The wrapper bringup in `v2x_system_bringup.launch.py` currently exposes the
same RTOR arguments with V2X-prefixed names and defaults the testing override
on:

| Launch Argument | Default |
| --- | --- |
| `enable_rtor_node` | `true` |
| `v2x_rtor_allow_alerts_without_map_right_turn` | `true` |

## Run

Via the package's launch file (off by default):

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py enable_rtor_node:=True
```

Via the wrapper bringup launch (RTOR enabled and the map-right-turn testing
override currently enabled by default):

```bash
ros2 launch v2x_ros_driver v2x_system_bringup.launch.py
```

To force alerts even when MAP explicitly says right turn is not allowed:

```bash
ros2 launch v2x_ros_driver v2x_system_bringup.launch.py \
   v2x_rtor_allow_alerts_without_map_right_turn:=true
```

Standalone:

```bash
ros2 run v2x_ros_driver v2x_rtor_node.py --ros-args \
  -p inbound_topic:=/comms/inbound_binary_msg \
  -p obu_reference_bsm_id:=e153df70 \
   -p require_right_turn_signal:=False \
   -p allow_alerts_without_map_right_turn:=true
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
   lanes, and can also be told to ignore explicit "not allowed" lane data via
   `allow_alerts_without_map_right_turn`. If alerts still do not fire, the more
   likely failure is `lane.signal_group is None`, in which case the SPAT-red
   gate cannot be evaluated.
* The `/v2x/rtor_alerts` JSON now carries both lane-status messages and hazard
   alerts. Lane-status messages include `type: lane_status`; hazard alerts carry
   `severity` and `hazards[]`.
