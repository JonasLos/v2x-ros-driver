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