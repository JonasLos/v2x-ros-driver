# SDSM Publisher (`v2x_sdsm_publisher.py`)

Publishes local sensor detections as J2735 Sensor Data Sharing Messages (SDSM) via OBU's Facilities-Layer API. The OBU autonomously signs and broadcasts SDSM messages to other V2X units.

## Quick Start

```bash
# Single SDSM publisher
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py enable_sdsm_publisher:=True

# With custom detection and GPS topics
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
  enable_sdsm_publisher:=True \
  sdsm_detection_topic:=/your_detector/detections \
  sdsm_gps_topic:=/your_gps/fix
```

## Architecture

### Transmission Path
```
Detection (/fused_bbox)
    ↓
GPS (/novatel/oem7/gps)
    ↓
Odometry (/novatel/oem7/odom)
    ↓
V2XSdsmPublisher node
    ↓
FacilitiesSdsmBackend (FAC-Layer SDK API)
    ↓
OBU (signs + broadcasts)
    ↓
Other V2X Units (receive + decode)
```

### Message Flow
1. **Detection Ingestion**: Subscribes to detection topic (yolo_msgs/DetectionArray preferred, falls back to vision_msgs or carma_msgs)
2. **Frame Transform**: Transforms detection coordinates from detection frame → target frame (default: odom)
3. **GPS Projection**: Projects local x/y coordinates to lat/lon using ego GPS position
4. **Object Tracking**: Maintains track state with last update timestamp
5. **SDSM Encoding**: Encodes detected objects as J2735 DetectedObjectData (UPER format)
6. **FAC Transmission**: Pushes individual objects to OBU via `sdsm_set_object()`
7. **OBU Assembly**: OBU assembles full SDSM message and broadcasts autonomously

## Parameters

### Core Configuration
| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `detection_topic` | string | `/fused_bbox` | Input topic for detections (yolo_msgs/DetectionArray recommended) |
| `gps_topic` | string | `/novatel/oem7/fix` | GPS position input (NavSatFix) |
| `gps_fix_topic` | string | `/novatel/oem7/gps` | Alternative GPS input (gps_msgs/GPSFix, NovAtel-optimized) |
| `odom_topic` | string | `/novatel/oem7/odom` | Ego odometry for local frame transforms |
| `target_frame` | string | `odom` | Local frame for detection coordinates |

### Publish Rate & Filtering
| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `publish_rate_hz` | float | `5.0` | Heartbeat publication rate (Hz) |
| `min_confidence` | float | `0.0` | Minimum detection confidence to include (0.0–1.0) |
| `track_timeout_sec` | float | `1.0` | Remove tracks not updated for this duration (seconds) |

### OBU Connection
| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `obu_host` | string | `127.0.0.1` | OBU IP address for Facilities-Layer API |
| `obu_port` | int | `7942` | OBU port for Facilities-Layer API |

### Miscellaneous
| Parameter | Type | Default | Description |
|-----------|------|---------|-------------|
| `id_salt` | string | `v2x_sdsm` | Salt for deterministic source ID generation |

## Input Topics

### `/fused_bbox` (yolo_msgs/DetectionArray)
**Type**: `yolo_msgs/msg/DetectionArray`

3D detection array from YOLO-based detector. Each detection contains:
- `bbox3d.center.position` — 3D center coordinates (x, y, z)
- `confidence` — Confidence score (0.0–1.0)
- `label` — Object class label (e.g., "vehicle", "pedestrian")

**Fallback Sources** (in order):
1. `vision_msgs/msg/Detection3DArray` (generic vision framework)
2. `carma_cooperative_perception_interfaces/msg/DetectionList` (CARMA platform)

### `/novatel/oem7/gps` (gps_msgs/GPSFix)
**Type**: `gps_msgs/msg/GPSFix`

GPS position from NovAtel receiver (preferred). Contains `latitude`, `longitude` as degrees.

**Fallback**: `/novatel/oem7/fix` (sensor_msgs/NavSatFix) if GPSFix unavailable.

### `/novatel/oem7/odom` (Odometry)
**Type**: `nav_msgs/msg/Odometry`

Ego vehicle odometry in local frame (`child_frame_id`). Used for:
- Detecting frame mismatch with detection topics
- Computing relative object positions for SDSM `offsetX`, `offsetY`, `offsetZ`
- Fallback transform if TF lookup fails

## Output

### FAC Transmission
- Pushes individual detected objects to OBU via `pycmssdk` API:
  - `sdsm_set_object()` — Add/update detected object in OBU store
  - `sdsm_delete_object()` — Remove expired track
  - `sdsm_update_ref_position()` — Publish ego reference position
- OBU signs and broadcasts full SDSM message autonomously every heartbeat
- External receivers decode messageId=41 (SensorDataSharingMessage)

### ROS 2 Logging
```
INFO: SDSM health: tracks=5 gps_ready=True odom_ready=True send_ok=123 send_fail=0 encode_fail=0
```

Logs every 2 seconds showing:
- `tracks` — Number of active tracked detections
- `gps_ready` — Whether GPS position is available
- `odom_ready` — Whether odometry has been received
- `send_ok` — Count of successful FAC `set_object()` calls
- `send_fail` — Count of failed FAC calls
- `encode_fail` — Count of J2735 encoding failures

## J2735 Encoding Details

### SDSM Message Type
- **messageId**: 41 (SensorDataSharingMessage)
- **PSID**: 0x8004
- **Payload Format**: UPER (Unaligned Packed Encoding Rules)

### Object Representation
Each detection is encoded as J2735 `DetectedObjectData`:

```json
{
  "detObjCommon": {
    "objectID": "hash(label + position) % 65536",
    "pos": {
      "offsetX": "(x_m - ego_x) * 10",  // OffsetB12: 0.1 m/LSB
      "offsetY": "(y_m - ego_y) * 10",
      "offsetZ": "(z_m - ego_z) * 10"
    },
    "speed": "speed_mps * 50",          // 0.02 m/s per LSB
    "objType": "vehicle|vru|animal|unknown",
    "objTypeCfd": 80                     // Confidence (0–100)
  }
}
```

### Label-to-Type Mapping
| Detection Label | SDSM objType |
|-----------------|-------------|
| vehicle, car, truck, bus | vehicle |
| pedestrian, person, human, walker | vru |
| motorcycle, cyclist, bike | vru |
| dog, deer, animal | animal |
| other | unknown |

## Diagnostics

### Check Publisher Health
```bash
# Monitor logs every 2 seconds
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
  enable_sdsm_publisher:=True \
  --ros-args --log-level v2x_sdsm_publisher:=DEBUG

# Expected output:
# [v2x_sdsm_publisher-1] Using detection input type: yolo_msgs.msg.DetectionArray
# [v2x_sdsm_publisher-1] Using j2735_202409 SDSM encoder path
# [v2x_sdsm_publisher-1] Using pycmssdk ASN.1 encode path for SDSM
# [v2x_sdsm_publisher-1] SDSM health: tracks=X gps_ready=True odom_ready=True send_ok=N ...
```

### Verify Input Topics Are Active
```bash
# Check if detections are flowing
ros2 topic hz /fused_bbox

# Check if GPS is available
ros2 topic echo /novatel/oem7/gps

# Check if odometry is flowing
ros2 topic echo /novatel/oem7/odom

# Check TF tree
ros2 run tf2_tools view_frames.py
```

### Common Issues

| Issue | Cause | Fix |
|-------|-------|-----|
| `tracks=0` in health log | No detections received | Verify `/fused_bbox` is publishing |
| `gps_ready=False` | GPS topic not flowing | Check `/novatel/oem7/gps` or `/novatel/oem7/fix` |
| `odom_ready=False` | Odometry topic not flowing | Verify `/novatel/oem7/odom` is active |
| `send_fail` increasing | FAC API connection failed | Check OBU host/port; verify `obu_host` is reachable |
| `encode_fail` increasing | J2735 encoding error | Check detection label/confidence values; verify j2735_202409 wheel is installed |
| "No supported detection message type found" | No compatible detection topic available | Install `yolo_msgs`, `vision_msgs`, or `carma_cooperative_perception_interfaces` |

## Performance Considerations

- **Heartbeat Rate**: Default 5 Hz (adjust `publish_rate_hz` for network load)
- **Track Timeout**: Default 1 second (detections older than 1 sec are pruned)
- **Encoding Cost**: ~1–5 ms per object (depends on ASN.1 complexity)
- **FAC API Calls**: One `set_object()` call per active track per heartbeat (~5 Hz with 5–10 objects typical)

## Dependencies

### Python Packages
- `pycmssdk` — Commsignia SDK for FAC API access
- `j2735_202409` — J2735 ASN.1 decoder wheel

### ROS 2 Packages
- `gps_msgs` — GPSFix message type (optional; NavSatFix available as fallback)
- `nav_msgs` — Odometry message type
- `sensor_msgs` — NavSatFix message type (fallback GPS)
- `yolo_msgs` — YOLO detection array (optional; other detection types supported)
- `vision_msgs` — Generic 3D detection array (fallback detection)
- `carma_cooperative_perception_interfaces` — CARMA detection list (fallback)

### System Requirements
- **OBU Reachability**: Facilities-Layer API endpoint (default: 192.168.0.54:7942)
- **TF Tree**: Must have transform from detection frame → target frame (default: lidar_tc → odom)

## Example Configurations

### Minimal (Default Sensors)
```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py enable_sdsm_publisher:=True
```
Uses defaults: `/fused_bbox`, `/novatel/oem7/gps`, `/novatel/oem7/odom`, OBU at 127.0.0.1:7942

### Production (External OBU)
```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
  enable_sdsm_publisher:=True \
  sdsm_obu_host:=192.168.0.54 \
  sdsm_publish_rate_hz:=10
```

### High-Confidence Only
```bash
ros2 launch v2x_ros_driver v2x_ros_driver.launch.py \
  enable_sdsm_publisher:=True \
  sdsm_min_confidence:=0.7
```

## Architecture Evolution

**Before 2026-05-14**:
- SDSM supported two backends: DirectSdkBackend (raw WSMP) and FacilitiesSdsmBackend (FAC-layer)
- Parameter: `backend_mode` could be `phase2_sdk` or `fac_layer`

**After 2026-05-14**:
- Only FacilitiesSdsmBackend (FAC-layer) remains
- `backend_mode` parameter removed; always uses FAC
- Simpler configuration, production-proven path

**Why FAC-Layer?**
- OBU handles signing and broadcast autonomously
- Correct J2735 message assembly guaranteed
- No need for manual UPER encoding on host
- Better separation of concerns (host detects; OBU broadcasts)

## See Also

- [v2x_rtor_node.py](v2x_rtor_node.py) — Processes inbound SDSM/BSM/MAP/SPAT for RTOR warnings
- [v2x_inbound_marker_visualizer.py](v2x_inbound_marker_visualizer.py) — Visualizes received PSM/SDSM/MAP/SPAT markers
- [J2735 Spec](https://standards.ieee.org/standard/2735-2024.html) — Message definitions
- [CHANGELOG_2026-05-14_PSM_REMOVAL_SDSM_FAC.md](../../CHANGELOG_2026-05-14_PSM_REMOVAL_SDSM_FAC.md) — Release notes
