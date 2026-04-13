# v2x_ros_driver

`v2x_ros_driver` receives UDP V2X traffic from an on-board unit (OBU), extracts SAE J2735 frames, and publishes ROS messages for CARMA interfaces.

## What this package provides

- ROS 2 composable node: `v2x_ros_driver_node`
- Inbound topic: `/comms/inbound_binary_msg` (`carma_driver_msgs/msg/ByteArray`)
- Outbound topic: `/comms/outbound_binary_msg` (`carma_driver_msgs/msg/ByteArray`)
- Runtime params:
	- `v2x_radio_address` (OBU IP)
	- `v2x_radio_listening_port` (OBU-side UDP port used for outbound transmission to radio)
	- `listening_port` (host UDP port this driver binds for inbound OBU data)

Default params are in `config/params.yaml`. Override values are typically supplied via `global_params_override_file`.

## Quick start

1. Build

```bash
colcon build --packages-up-to v2x_ros_driver
source install/setup.bash
```

2. Launch with lifecycle enabled

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
	enable_v2x_driver_lifecycle:=True \
	configuration_delay:=2.0 \
	log_level:=INFO \
	global_params_override_file:=/absolute/path/to/v2x_ros_driver/GlobalParamsOverride.yaml
```

3. Confirm node and topic

```bash
ros2 node list | grep v2x_ros_driver_node
ros2 topic echo /comms/inbound_binary_msg
```

## SDK safety bridge (Commsignia)

`v2x_safety_alert_bridge.py` runs alongside raw transport and subscribes to the
Commsignia SDK `fac_subscribe` callback stream.

Topic behavior:

- `/v2x/safety_alerts`: safety-relevant FAC messages only
- `/v2x/safety_alerts_debug_raw`: all FAC messages received via SDK

This split is intentional so downstream consumers can use a filtered safety
stream while operators can still inspect full FAC ingress on debug.

Enable in launch:

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
	enable_safety_alert_bridge:=True \
	safety_bridge_obu_host:=192.168.0.54 \
	safety_alert_topic:=/v2x/safety_alerts \
	safety_bridge_enable_debug_topic:=True \
	safety_bridge_debug_topic:=/v2x/safety_alerts_debug_raw
```

Key launch arguments:

- `enable_safety_alert_bridge` (bool): start SDK safety bridge node
- `safety_bridge_obu_host` (string): OBU RPC endpoint
- `safety_bridge_subscription_key` (int): FAC subscription key (`0` subscribes to all FAC types)
- `safety_bridge_min_publish_interval` (double): de-duplication interval for repeated safety emits
- `safety_bridge_enablement_json` (string): JSON override of safety app enablement map
- `safety_bridge_enable_debug_topic` (bool): publish all FAC payloads to debug topic
- `safety_bridge_debug_topic` (string): debug output topic name

Optional fallback knobs (default disabled):

- `safety_bridge_enable_raw_inbound_fallback` (bool)
- `safety_bridge_publish_safety_from_raw_inbound` (bool)

These remain `False` by default so production behavior stays FAC-SDK-driven.

## Bird's-eye MAP/SPAT visualization

There are two visualization modes:

1. Decoder-backed mode (default): decodes J2735 directly from `/comms/inbound_binary_msg` and renders markers.
2. Pre-decoded mode (optional): consumes external decoded MAP/SPAT/BSM topics.

Decoder-backed mode behavior:

- uses a global georeference anchor so intersections are placed by real relative position and do not overlap
- initializes anchor at the center of the first MAP message intersections (map-centered start)
- republishes markers only when decoded MAP/SPAT/BSM state changes
- when BSM ID `e153df70` is available, it can be used as preferred dynamic anchor reference (OBU vehicle GPS)
- logs live receive/decode counters to the terminal
- supports screen-space RViz text overlays when `rviz_2d_overlay_msgs` and `rviz_2d_overlay_plugins` are installed

Output topic:

- `/v2x/map_spat_markers` (`visualization_msgs/msg/MarkerArray`)
- `/v2x/bsm_markers` (`visualization_msgs/msg/MarkerArray`)
- `/v2x/psm_markers` (`visualization_msgs/msg/MarkerArray`)
- `/v2x/tim_markers` (`visualization_msgs/msg/MarkerArray`)
- `/v2x/map_spat_overlay_text` (`rviz_2d_overlay_msgs/msg/OverlayText`, optional)
- `/v2x/bsm_overlay_text` (`rviz_2d_overlay_msgs/msg/OverlayText`, optional)
- `/v2x/psm_overlay_text` (`rviz_2d_overlay_msgs/msg/OverlayText`, optional)
- `/v2x/tim_overlay_text` (`rviz_2d_overlay_msgs/msg/OverlayText`, optional)

Direct decoder run command (from inbound binary topic):

Decoder dependency prerequisite:

`j2735_202409` is provided as a Python wheel from the USDOT FHWA STOL j2735decoder repository (not from this repo). The known working wheel used in this workspace is:

- https://raw.githubusercontent.com/usdot-fhwa-stol/j2735decoder/develop/wheels/j2735_202409-0.1.0-py3-none-any.whl

```bash
python3 -m venv /home/jonaslo96/ros2_drivers/.venv
source /home/jonaslo96/ros2_drivers/.venv/bin/activate
pip3 install --upgrade pip pycrate
pip3 install "https://raw.githubusercontent.com/usdot-fhwa-stol/j2735decoder/develop/wheels/j2735_202409-0.1.0-py3-none-any.whl"
# optional alternative if you already downloaded the wheel locally:
# pip3 install j2735_202409*.whl
```

Optional RViz overlay prerequisite on ROS 2 Jazzy:

```bash
sudo apt-get install -y ros-jazzy-rviz-2d-overlay-msgs ros-jazzy-rviz-2d-overlay-plugins
```

```bash
source /home/jonaslo96/ros2_drivers/.venv/bin/activate
source /opt/ros/jazzy/setup.bash
source /home/jonaslo96/ros2_drivers/v2x-ros-driver/install/setup.bash
ros2 run v2x_ros_driver v2x_inbound_marker_visualizer.py --ros-args \
	-p inbound_topic:=/comms/inbound_binary_msg \
	-p marker_topic:=/v2x/map_spat_markers \
	-p bsm_marker_topic:=/v2x/bsm_markers \
	-p psm_marker_topic:=/v2x/psm_markers \
	-p tim_marker_topic:=/v2x/tim_markers \
	-p enable_text_overlay:=true \
	-p prefer_obu_bsm_anchor:=true \
	-p obu_reference_bsm_id:=e153df70 \
	-p frame_id:=map
```

Launch decoder-backed mode:

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
	enable_inbound_binary_visualizer:=True \
	inbound_binary_topic:=/comms/inbound_binary_msg \
	enable_map_spat_visualizer:=False \
	marker_topic:=/v2x/map_spat_markers \
	bsm_marker_topic:=/v2x/bsm_markers \
	psm_marker_topic:=/v2x/psm_markers \
	tim_marker_topic:=/v2x/tim_markers
```

Optional pre-decoded mode launch:

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
	enable_inbound_binary_visualizer:=False \
	enable_map_spat_visualizer:=True \
	map_topic:=/message/incoming_map \
	spat_topic:=/message/incoming_spat \
	bsm_topic:=/message/incoming_bsm \
	marker_topic:=/v2x/map_spat_markers
```

RViz setup:

1. Add a `MarkerArray` display and set topic to `/v2x/map_spat_markers`.
2. Add a second `MarkerArray` display and set topic to `/v2x/bsm_markers`.
3. Add a third `MarkerArray` display and set topic to `/v2x/psm_markers`.
4. Add a fourth `MarkerArray` display and set topic to `/v2x/tim_markers`.
5. Set fixed frame to `map` (or override visualizer `frame_id` parameter to match your frame).
6. Optional: add four `OverlayText` displays from `rviz_2d_overlay_plugins` for `/v2x/map_spat_overlay_text`, `/v2x/bsm_overlay_text`, `/v2x/psm_overlay_text`, and `/v2x/tim_overlay_text`.
7. Check the terminal running `v2x_inbound_marker_visualizer.py` for periodic counter logs (`encoded`, `decoded`, `not_decoded`, `bsm_tracked`, `psm_tracked`, `tim_tracked`).
8. Verify live updates as SPAT changes: lanes switch color (green/yellow/red) and labels update continuously.
9. Verify BSM updates: cyan vehicle markers and labels appear/move on `/v2x/bsm_markers`.
10. Verify PSM updates: cylinder markers and labels appear on `/v2x/psm_markers` with heading arrows when heading is available.
11. Verify TIM updates: advisory markers and verbose labels appear on `/v2x/tim_markers`; advisories without geolocation are rendered near the map anchor.

Notes:

- The visualizer auto-detects `j2735_202409` from the active Python environment and also falls back to a nearby workspace `.venv` when available.
- On ROS 2 Jazzy, `jsk_rviz_plugins` is typically not packaged; use `rviz_2d_overlay_msgs` and `rviz_2d_overlay_plugins` instead.
- If overlay packages are unavailable, map/SPAT/BSM markers still render normally and only the counter overlay is skipped.

## IFM vs C2P mode selection

Use the override file that matches your OBU stream mode:

- IFM mode override: `GlobalParamsOverride.ifm.yaml` (`listening_port: 5398`)
- C2P mode override: `GlobalParamsOverride.c2p.yaml` (`listening_port: 7943`)

Example launch in C2P mode:

```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
	enable_v2x_driver_lifecycle:=True \
	configuration_delay:=2.0 \
	log_level:=INFO \
	global_params_override_file:=/absolute/path/to/v2x_ros_driver/GlobalParamsOverride.c2p.yaml
```

## Expected output and behavior

### ROS topic output

On healthy reception, `/comms/inbound_binary_msg` publishes `ByteArray` messages with:

- `message_type` mapped from decoded message ID (for recognized J2735 IDs)
- `content` containing extracted framed payload bytes

In mixed C2P streams, you may see a mix of payload sizes:

- small frames (marker/wrapper-like)
- larger frames (full decodable J2735 content)

Both can be expected depending on OBU stream composition.

## Supported messages

The driver currently recognizes and labels the following DSRCmsgID values from
`etc/wave.json`.

### J2735 UPER message set

| DSRCmsgID | Name | Basic information |
| --- | --- | --- |
| 18 | MAP | MapData geometry and lane topology for intersections/segments. |
| 19 | SPAT | Signal phase and timing states for one or more intersections. |
| 20 | BSM | BasicSafetyMessage vehicle kinematics and status heartbeat. |
| 21 | CommonSafetyRequest | Request-style safety coordination/control message. |
| 22 | EmergencyVehicleAlert | Emergency vehicle alert/prioritization signaling. |
| 23 | IntersectionCollision | Intersection collision warning information. |
| 24 | NMEACorrections | Encapsulated NMEA GNSS correction payloads. |
| 25 | ProbeDataManagement | Probe data collection policy/control message. |
| 26 | ProbeVehicleData | Probe vehicle report payload. |
| 27 | RoadSideAlert | Roadside hazard/event alert message. |
| 28 | RTCMCorrections | Encapsulated RTCM correction payloads. |
| 29 | SignalRequestMessage | Priority/preemption request toward infrastructure. |
| 30 | SignalStatusMessage | Status/outcome for pending signal requests. |
| 31 | TIM | Traveler information/advisory and geofenced notices. |
| 32 | PSM | PersonalSafetyMessage for vulnerable road users/devices. |
| 33 | RoadSafetyMessage | Road safety message profile (RSM). |
| 34 | RoadWeatherMessage | Road weather condition message profile (RWM). |
| 35 | ProbeDataConfigMessage | Probe data configuration instruction message. |
| 36 | ProbeDataReportMessage | Probe data reporting payload message. |
| 37 | TollAdvertisementMessage | Toll system advertisement/instruction message. |
| 38 | TollUsageMessage | Toll usage transaction/report message. |
| 39 | TollUsageAckMessage | Toll usage acknowledgement message. |
| 40 | CooperativeControlMessage | Cooperative control/coordination message. |
| 41 | SensorDataSharingMessage | Shared detected object/sensor observations (SDSM). |
| 42 | ManeuverSharingAndCoordinatingMessage | Maneuver sharing and coordination dialog (MSCM). |
| 43 | RoadGeometryAndAttributes | Road geometry and attributes payload (RGA). |
| 44 | PersonalSafetyMessage2 | Newer personal safety message profile (PSM2). |
| 45 | TrafficSignalPhaseAndTiming | Traffic signal phase/timing profile variant. |
| 46 | SignalControlAndPrioritizationRequest | Signal control/prioritization request (SCPR). |
| 47 | SignalControlAndPrioritizationStatus | Signal control/prioritization status (SCPS). |

### CARMA/local relayed message IDs

These IDs are in the local/test range but are intentionally mapped for
CARMA platform message flows.

| DSRCmsgID | Name | Basic information |
| --- | --- | --- |
| 240 | MobilityRequest | CARMA cooperative mobility request message. |
| 241 | MobilityResponse | CARMA cooperative mobility response message. |
| 242 | MobilityPath | CARMA planned path broadcast/update. |
| 243 | MobilityOperation | CARMA operational intent/status payload. |
| 244 | TrafficControlRequest | CARMA traffic control request. |
| 245 | TrafficControlMessage | CARMA traffic control message payload. |
| 246 | EmergencyVehicleResponse | CARMA emergency vehicle response/status. |
| 247 | EmergencyVehicleAck | CARMA emergency vehicle acknowledgement. |

### Remaining local/test IDs

| DSRCmsgID | Name | Basic information |
| --- | --- | --- |
| 248 | TestMessage08 | Local/test message slot from J2735 test range. |
| 249 | TestMessage09 | Local/test message slot from J2735 test range. |
| 250 | TestMessage10 | Local/test message slot from J2735 test range. |
| 251 | TestMessage11 | Local/test message slot from J2735 test range. |
| 252 | TestMessage12 | Local/test message slot from J2735 test range. |
| 253 | TestMessage13 | Local/test message slot from J2735 test range. |
| 254 | TestMessage14 | Local/test message slot from J2735 test range. |
| 255 | TestMessage15 | Local/test message slot from J2735 test range. |

Notes:

- Message labels published on `/comms/inbound_binary_msg` come from the `name`
	field in `etc/wave.json`.
- Unknown IDs that are not in `etc/wave.json` are published as `message_type:
	Unknown`.

### Quick reference by use case

This compact view groups supported message IDs by practical operational area.

| Use case | Messages (DSRCmsgID: Name) |
| --- | --- |
| Intersection geometry and signal operations | 18: MAP, 19: SPAT, 29: SignalRequestMessage, 30: SignalStatusMessage, 45: TrafficSignalPhaseAndTiming, 46: SignalControlAndPrioritizationRequest, 47: SignalControlAndPrioritizationStatus |
| Vehicle and vulnerable-road-user safety | 20: BSM, 22: EmergencyVehicleAlert, 23: IntersectionCollision, 27: RoadSideAlert, 32: PSM, 33: RoadSafetyMessage, 34: RoadWeatherMessage, 41: SensorDataSharingMessage, 44: PersonalSafetyMessage2 |
| Traveler, tolling, and advisories | 31: TIM, 37: TollAdvertisementMessage, 38: TollUsageMessage, 39: TollUsageAckMessage |
| Probe and telemetry collection/reporting | 24: NMEACorrections, 25: ProbeDataManagement, 26: ProbeVehicleData, 28: RTCMCorrections, 35: ProbeDataConfigMessage, 36: ProbeDataReportMessage |
| Cooperative planning and control | 21: CommonSafetyRequest, 40: CooperativeControlMessage, 42: ManeuverSharingAndCoordinatingMessage, 43: RoadGeometryAndAttributes |
| CARMA relayed/local operational set | 240: MobilityRequest, 241: MobilityResponse, 242: MobilityPath, 243: MobilityOperation, 244: TrafficControlRequest, 245: TrafficControlMessage, 246: EmergencyVehicleResponse, 247: EmergencyVehicleAck |
| Local test range | 248: TestMessage08, 249: TestMessage09, 250: TestMessage10, 251: TestMessage11, 252: TestMessage12, 253: TestMessage13, 254: TestMessage14, 255: TestMessage15 |

### Driver logs

Expected at startup:

- lifecycle transitions to `configuring` then `active`
- log entries indicating UDP bind on configured `listening_port`

If inbound traffic exists but no ROS messages appear, verify host firewall rules for the selected UDP listening port.

## Runtime verification commands

### Verify configured params

```bash
ros2 param get /v2x_ros_driver_node listening_port
ros2 param get /v2x_ros_driver_node v2x_radio_address
ros2 param get /v2x_ros_driver_node v2x_radio_listening_port
```

### Verify raw UDP reception on host

```bash
python3 scripts/check_udp_reception.py --port 7943 --duration 15
```

Expected success indicator:

- `result: OK`
- non-zero `packet_count`

### Verify ROS-level driver reception

```bash
python3 scripts/check_v2x_reception.py --duration 20 --expected-listening-port 7943
```

Expected success indicator:

- `result: OK`
- non-zero `total_messages`

## Decoder helper

The helper `scripts/v2x_decoder_forwarder.py` can decode and forward structured J2735 JSON from UDP input.

Example:

```bash
python3 scripts/v2x_decoder_forwarder.py --port 7943 --fwd_ip 127.0.0.1 --fwd_port 5400
```

Current decoder output behavior:

- prints only structured decodes (`value` object/array)
- ignores undecodable candidates and noisy wrapper-only candidates
- supports mixed framing including `00 <msg_id> <len> <payload>` (important for SPAT/SRM-style streams)

## Rosbag decode and plotting workflow

Use scripts in `scripts/` to decode and visualize recorded `/comms/inbound_binary_msg` data.

1. Decode bag records to JSONL + summary:

```bash
python3 scripts/decode_inbound_mcap.py \
	--bag /path/to/rosbag2_xxx/rosbag2_xxx_0.mcap \
	--out-jsonl /tmp/inbound_decoded.jsonl \
	--out-summary /tmp/inbound_decoded_summary.json
```

2. Plot decoded BSM trajectories (lat/lon):

```bash
python3 scripts/plot_inbound_latlon.py \
	--input /tmp/inbound_decoded.jsonl \
	--output /tmp/inbound_latlon_map.png
```

3. Plot decoded SPAT signal states over time:

```bash
python3 scripts/plot_spat_signals.py \
	--input /tmp/inbound_decoded.jsonl \
	--output /tmp/spat_signal_timeline.png
```

4. Plot decoded SDSM and map-like geometry:

```bash
python3 scripts/plot_sdsm_maplike.py \
	--input /tmp/inbound_decoded.jsonl \
	--sdsm-out /tmp/sdsm_positions.png \
	--map-out /tmp/maplike_srm_lanes_georef.png
```

Notes:

- In analyzed C2P captures, true decoded MAP (`messageId=31`) may be absent even when driver-level labels show `MAP`.
- Some records labeled `MAP` by driver metadata may decode as other J2735 payloads (for example SRM/SDSM).
- The map-like plot is georeferenced from intersection `refPoint` and local lane-node deltas.

## Known Commsignia C2P caveats

- C2P streams can be mixed: many short wrapper/marker packets plus fewer full J2735 payload packets.
- Seeing UDP on the host does not guarantee immediate structured decode output in short windows.
- If packet sizes are mostly very small (for example, 25-46 bytes), decode helpers may print little or no structured JSON until larger frames appear.

### 1-minute C2P triage flow

1. Validate mode/port alignment:
	- OBU C2P enabled and targeting host IP
	- Driver `listening_port` set to `7943`
2. Validate host packet ingress:
	- Run `python3 scripts/check_udp_reception.py --port 7943 --duration 15`
	- If `result: NO_UDP_PACKETS`, fix OBU route/IP or firewall first
3. Validate ROS publish path:
	- Run `python3 scripts/check_v2x_reception.py --duration 20 --expected-listening-port 7943`
	- If `result: PARAM_MISMATCH`, launch with the correct override file
4. If UDP is present but structured decodes are sparse:
	- Extend capture window (30-120s)
	- Expect mixed traffic; this can be normal for C2P wrapper-heavy streams

## Troubleshooting checklist

1. Confirm OBU can reach host (`ping` and correct host IP configured on OBU).
2. Confirm `listening_port` matches selected OBU stream mode (`5398` IFM, `7943` C2P).
3. Confirm UDP packets arrive on host (`check_udp_reception.py` or `tcpdump`).
4. Confirm firewall allows inbound UDP on the configured listening port.
5. Confirm ROS node params match your intended override file.
6. Confirm `/comms/inbound_binary_msg` has non-zero message count over a sufficient window.