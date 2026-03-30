# Scripts

This directory contains runtime diagnostics and decode helpers for `v2x_ros_driver`.

## Visualizer runtime prerequisites

The inbound binary visualizer installed by `v2x_ros_driver` depends on:

- `pycrate>=0.7.11`
- `j2735_202409` wheel in the Python environment used to launch `ros2 run`
- optional RViz overlay packages on ROS 2 Jazzy:
	- `ros-jazzy-rviz-2d-overlay-msgs`
	- `ros-jazzy-rviz-2d-overlay-plugins`

Suggested setup:

```bash
python3 -m venv /home/jonaslo96/ros2_drivers/.venv
source /home/jonaslo96/ros2_drivers/.venv/bin/activate
pip3 install --upgrade pip pycrate
pip3 install j2735_202409*.whl
sudo apt-get install -y ros-jazzy-rviz-2d-overlay-msgs ros-jazzy-rviz-2d-overlay-plugins
```

Run:

```bash
source /home/jonaslo96/ros2_drivers/.venv/bin/activate
source /opt/ros/jazzy/setup.bash
source /home/jonaslo96/ros2_drivers/v2x-ros-driver/install/setup.bash
ros2 run v2x_ros_driver v2x_inbound_marker_visualizer.py --ros-args \
	-p enable_text_overlay:=true \
	-p inbound_topic:=/comms/inbound_binary_msg \
	-p marker_topic:=/v2x/map_spat_markers \
	-p bsm_marker_topic:=/v2x/bsm_markers \
	-p psm_marker_topic:=/v2x/psm_markers \
	-p prefer_obu_bsm_anchor:=true \
	-p obu_reference_bsm_id:=e153df70 \
	-p frame_id:=map
```

Behavior:

- lane and BSM visualization remains on `MarkerArray` topics
- receive/decode counters are printed in terminal logs
- counter overlays are published only when overlay packages are installed

## `v2x_decoder_forwarder.py`

Receives UDP V2X traffic, attempts J2735 decode, and forwards structured JSON via UDP.

### Requirements

- `pycrate>=0.7.11`
- `j2735_202409` wheel

Install:

```bash
pip3 install pycrate --upgrade
pip3 install j2735_202409*.whl
```

### Usage

```bash
python3 scripts/v2x_decoder_forwarder.py --port 7943 --fwd_ip 127.0.0.1 --fwd_port 5400
```

### Expected output

- Startup line: `Waiting for data at <ip>:<port>...`
- Then JSON objects for structured decodes only (`value` as object/list)
- Undecodable wrapper/marker frames are skipped

## `check_udp_reception.py`

Checks whether raw UDP packets are arriving on a host interface/port, independent of ROS.

### Usage

```bash
python3 scripts/check_udp_reception.py --port 7943 --duration 15
```

### Expected output

- Summary block with packet/byte stats
- `result: OK` when packets are present
- `result: NO_UDP_PACKETS` when none are received

## `check_v2x_reception.py`

Checks ROS-level reception from `/comms/inbound_binary_msg` and reports message statistics plus current node parameters.

### Usage

```bash
python3 scripts/check_v2x_reception.py --duration 20 --expected-listening-port 7943
```

### Expected output

- Driver parameter snapshot (`listening_port`, radio address/port)
- Message statistics (`total_messages`, payload sizes, message type counts)
- Result codes:
	- `result: OK` (messages present and optional expected port matches)
	- `result: NO_MESSAGES`
	- `result: PARAM_MISMATCH`

## `decode_inbound_mcap.py`

Decodes all `/comms/inbound_binary_msg` entries from a rosbag2 mcap into:

- per-message JSONL records
- summary JSON with counts by decoded J2735 message ID/type

### Usage

```bash
python3 scripts/decode_inbound_mcap.py \
	--bag /path/to/rosbag2_xxx/rosbag2_xxx_0.mcap \
	--out-jsonl /tmp/inbound_decoded.jsonl \
	--out-summary /tmp/inbound_decoded_summary.json
```

### Expected output

- Printed summary JSON (decode rate + message counts)
- JSONL file containing raw metadata and decoded payloads when available

## `plot_inbound_latlon.py`

Plots decoded BSM lat/lon tracks from JSONL output.

### Usage

```bash
python3 scripts/plot_inbound_latlon.py \
	--input /tmp/inbound_decoded.jsonl \
	--output /tmp/inbound_latlon_map.png
```

## `plot_spat_signals.py`

Plots decoded SPAT signal states over time, grouped by signal group.

### Usage

```bash
python3 scripts/plot_spat_signals.py \
	--input /tmp/inbound_decoded.jsonl \
	--output /tmp/spat_signal_timeline.png
```

## `plot_sdsm_maplike.py`

Produces:

- SDSM object position plot (lat/lon)
- map-like lane geometry plot from decoded SRM intersection/lane fields

### Usage

```bash
python3 scripts/plot_sdsm_maplike.py \
	--input /tmp/inbound_decoded.jsonl \
	--sdsm-out /tmp/sdsm_positions.png \
	--map-out /tmp/maplike_srm_lanes_georef.png \
	--node-unit-m 0.01
```

### Notes

- The map-like geometry plot is georeferenced using intersection `refPoint`.
- If decoded MAP (`messageId=31`) is absent, map-like visuals may still come from decoded SRM/SDSM content in mixed streams.
