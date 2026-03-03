# Scripts

This directory contains runtime diagnostics and decode helpers for `v2x_ros_driver`.

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
