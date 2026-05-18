#!/usr/bin/python3

"""Publish local detections as outbound J2735 SDSM (Sensor Data Sharing Message).

SDSM is better suited for sharing sensor detections than PSM because:
- SDSM is designed for cooperative sensor data sharing
- Can include object lists, velocity, acceleration, classification confidence
- More appropriate for LiDAR/radar/vision-based detection data
- Uses PSID 0x8004

This implementation mirrors v2x_psm_publisher.py but uses SDSM instead of PSM.
"""

import hashlib
import importlib
import importlib.util
import datetime
import math
import sys
import threading
import time
from abc import ABC, abstractmethod
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Optional, Tuple
import utm
import rclpy
from carma_driver_msgs.msg import ByteArray
from geometry_msgs.msg import PointStamped
from nav_msgs.msg import Odometry
from rclpy.duration import Duration
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix
import tf2_ros
import tf2_geometry_msgs

try:
    GPSFix = importlib.import_module("gps_msgs.msg").GPSFix
except Exception:
    GPSFix = None

try:
    VisionDetectionArray = importlib.import_module("vision_msgs.msg").Detection3DArray
except Exception:
    VisionDetectionArray = None

try:
    CoPerceptionDetectionList = importlib.import_module("carma_cooperative_perception_interfaces.msg").DetectionList
except Exception:
    CoPerceptionDetectionList = None

try:
    YoloDetectionArray = importlib.import_module("yolo_msgs.msg").DetectionArray
except Exception:
    YoloDetectionArray = None

EARTH_RADIUS_M = 6378137.0
# J2735 MessageFrame ID for SensorDataSharingMessage in j2735_202409.
SDSM_MESSAGE_ID = 41
SDSM_PSID = 0x8004  # J2735 SDSM PSID


def _select_detection_msg_type():
    if YoloDetectionArray is not None:
        return YoloDetectionArray, "yolo_msgs.msg.DetectionArray"
    if VisionDetectionArray is not None:
        return VisionDetectionArray, "vision_msgs.msg.Detection3DArray"
    if CoPerceptionDetectionList is not None:
        return CoPerceptionDetectionList, "carma_cooperative_perception_interfaces.msg.DetectionList"
    return None, None





class FacilitiesSdsmBackend:
    """Commsignia facilities-layer SDSM backend.

    Pushes individual DetectedObjectData UPERs into the OBU's SDSM facilities module via
    sdsm_set_object / sdsm_delete_object / sdsm_update_ref_position.  The OBU assembles,
    signs, and broadcasts the full SDSM autonomously, making messages visible to other OBUs.
    """

    def __init__(self, host: str = "192.168.0.54", port: int = 7942, logger=None) -> None:
        self.host = host
        self.port = port
        self.logger = logger
        self._api = None
        self._api_lock = threading.Lock()
        self._sdk_thread: Optional[threading.Thread] = None
        self._stop_event = threading.Event()
        self._set_ok_count = 0
        self._set_fail_count = 0
        self._last_not_ready_warn_monotonic = 0.0

        try:
            from pycmssdk import create_cms_api, SdsmSetObject, SdsmDeleteObject, SdsmRefPosition
            self._create_cms_api = create_cms_api
            self._SdsmSetObject = SdsmSetObject
            self._SdsmDeleteObject = SdsmDeleteObject
            self._SdsmRefPosition = SdsmRefPosition
        except ImportError:
            raise ImportError("pycmssdk required for FacilitiesSdsmBackend")

    def _log_info(self, msg: str) -> None:
        if self.logger is not None:
            self.logger.info(msg)

    def _log_warn(self, msg: str) -> None:
        if self.logger is not None:
            self.logger.warn(msg)

    def _log_error(self, msg: str) -> None:
        if self.logger is not None:
            self.logger.error(msg)

    def _sdk_connection_loop(self) -> None:
        """Background thread: maintain persistent SDK session with reconnect."""
        backoff_sec = 0.5
        while not self._stop_event.is_set():
            try:
                with self._create_cms_api(host=self.host, port=self.port) as api:
                    with self._api_lock:
                        self._api = api
                    self._log_info(f"SDSM FAC session connected: {self.host}:{self.port}")
                    backoff_sec = 0.5
                    while not self._stop_event.is_set() and self._api is api:
                        time.sleep(0.1)
            except Exception as e:
                with self._api_lock:
                    self._api = None
                self._log_warn(f"SDSM FAC session error: {e}; reconnecting in {backoff_sec:.1f}s")
                time.sleep(backoff_sec)
                backoff_sec = min(5.0, backoff_sec * 1.5)
            finally:
                with self._api_lock:
                    self._api = None

    def _get_api(self):
        with self._api_lock:
            return self._api

    def start(self) -> None:
        if self._sdk_thread is None:
            self._stop_event.clear()
            self._sdk_thread = threading.Thread(target=self._sdk_connection_loop, daemon=True)
            self._sdk_thread.start()

    def stop(self) -> None:
        self._stop_event.set()
        with self._api_lock:
            self._api = None
        if self._sdk_thread is not None:
            self._sdk_thread.join(timeout=2.0)
            self._sdk_thread = None

    def update_ref_position(self, lat_deg: float, lon_deg: float, timestamp_ms: int) -> bool:
        """Push ego reference position to OBU SDSM facilities module."""
        api = self._get_api()
        if api is None:
            return False
        try:
            ref_pos = self._SdsmRefPosition(
                timestamp=timestamp_ms,
                latitude=int(lat_deg * 1e7),   # 0.1 microdegree units
                longitude=int(lon_deg * 1e7),
                altitude=0,
                altitude_confidence=0,
                pce_semi_major=0,
                pce_semi_minor=0,
                pce_orientation=0,
            )
            api.sdsm_update_ref_position(ref_pos)
            return True
        except Exception as e:
            with self._api_lock:
                if self._api is api:
                    self._api = None
            self._log_error(f"SDSM FAC sdsm_update_ref_position failed: {e}")
            return False

    def set_object(self, obj_id: int, priority: int, uper_bytes: bytes) -> bool:
        """Push a detected object into the OBU's SDSM object store."""
        api = self._get_api()
        if api is None:
            now_mono = time.monotonic()
            if (now_mono - self._last_not_ready_warn_monotonic) > 5.0:
                self._log_warn("SDSM FAC session not ready; dropping set_object")
                self._last_not_ready_warn_monotonic = now_mono
            self._set_fail_count += 1
            return False
        try:
            api.sdsm_set_object(self._SdsmSetObject(id=obj_id, priority=priority), uper_bytes)
            self._set_ok_count += 1
            return True
        except Exception as e:
            self._set_fail_count += 1
            with self._api_lock:
                if self._api is api:
                    self._api = None
            self._log_error(f"SDSM FAC sdsm_set_object failed: id={obj_id} {e}")
            return False

    def delete_object(self, obj_id: int) -> bool:
        """Remove a detected object from the OBU's SDSM object store."""
        api = self._get_api()
        if api is None:
            return False
        try:
            api.sdsm_delete_object(self._SdsmDeleteObject(id=obj_id))
            return True
        except Exception as e:
            with self._api_lock:
                if self._api is api:
                    self._api = None
            self._log_error(f"SDSM FAC sdsm_delete_object failed: id={obj_id} {e}")
            return False


@dataclass
class TrackState:
    """Detected object state for SDSM."""
    track_id: str
    label: str
    confidence: float
    x_m: float
    y_m: float
    z_m: float
    lat_deg: float
    lon_deg: float
    speed_mps: float
    heading_deg: Optional[float]
    last_update_ns: int
    last_sent_ns: int = 0
    last_sent_x_m: float = 0.0
    last_sent_y_m: float = 0.0
    last_sent_speed_mps: float = 0.0


class V2XSdsmPublisher(Node):
    """ROS 2 node for publishing detections as SDSM messages."""

    def __init__(self) -> None:
        super().__init__("v2x_sdsm_publisher")

        self.detection_topic = str(self.declare_parameter("detection_topic", "/fused_bbox").value)
        self.outbound_topic = str(self.declare_parameter("outbound_topic", "/comms/outbound_binary_msg").value)
        self.gps_topic = str(self.declare_parameter("gps_topic", "/novatel/oem7/fix").value)
        self.gps_fix_topic = str(self.declare_parameter("gps_fix_topic", "/novatel/oem7/gps").value)
        self.odom_topic = str(self.declare_parameter("odom_topic", "/novatel/oem7/odom").value)
        self.target_frame = str(self.declare_parameter("target_frame", "odom").value)
        self.publish_rate_hz = float(self.declare_parameter("publish_rate_hz", 5.0).value)
        self.min_confidence = float(self.declare_parameter("min_confidence", 0.0).value)
        self.track_timeout_sec = float(self.declare_parameter("track_timeout_sec", 1.0).value)
        self.delta_distance_m = float(self.declare_parameter("delta_distance_m", 0.8).value)
        self.delta_speed_mps = float(self.declare_parameter("delta_speed_mps", 0.6).value)
        self.id_salt = str(self.declare_parameter("id_salt", "v2x_sdsm").value)

        # Backend (FAC layer only)
        self.obu_host = str(self.declare_parameter("obu_host", "127.0.0.1").value)
        self.obu_port = int(self.declare_parameter("obu_port", 7942).value)

        self._gps_lat_lon: Optional[Tuple[float, float]] = None
        self._ego_xy: Optional[Tuple[float, float]] = None
        self._ego_pose_xyz: Optional[Tuple[float, float, float]] = None
        self._ego_orientation_xyzw: Optional[Tuple[float, float, float, float]] = None
        self._odom_child_frame: str = "base_link"
        self._tracks: Dict[str, TrackState] = {}
        self._msg_count = 0
        self._send_ok_total = 0
        self._send_fail_total = 0
        self._encode_fail_total = 0
        self._last_health_log_ns = 0
        self._registered_obj_ids: set = set()  # obj IDs currently held in OBU (FAC mode)
        self._detection_msg_type, self._detection_msg_type_name = _select_detection_msg_type()

        # Load j2735 decoder
        self._decoder_module = self._try_load_j2735_decoder_module()
        self._message_frame = None
        self._sdsm_type = None
        self._detected_object_data_type = None
        if self._decoder_module is not None:
            try:
                self._message_frame = self._decoder_module.MessageFrame.MessageFrame
                self._sdsm_type = self._decoder_module.SensorDataSharingMessage.SensorDataSharingMessage
                self._detected_object_data_type = (
                    self._decoder_module.SensorDataSharingMessage.DetectedObjectData
                )
                self.get_logger().info("Using j2735_202409 SDSM encoder path")
            except Exception as exc:
                self.get_logger().warn(f"j2735_202409 present but SDSM init failed: {exc}")

        # Try pycmssdk ASN.1 encode
        self._asn1_encode_fn = None
        self._asn1_type = None
        try:
            from pycmssdk.asn1 import Asn1Type, asn1_encode
            self._asn1_encode_fn = asn1_encode
            self._asn1_type = Asn1Type.US_MESSAGE_FRAME
            self.get_logger().info("Using pycmssdk ASN.1 encode path for SDSM")
        except Exception:
            pass

        self._tf_buffer = tf2_ros.Buffer(cache_time=Duration(seconds=10.0))
        self._tf_listener = tf2_ros.TransformListener(self._tf_buffer, self)

        # Publisher (Phase 1)
        self._out_pub = self.create_publisher(ByteArray, self.outbound_topic, 20)

        # Backend
        self._backend = self._create_backend()
        self._backend.start()

        # Subscriptions
        self.create_subscription(NavSatFix, self.gps_topic, self._on_gps, 20)
        if GPSFix is not None and self.gps_fix_topic:
            self.create_subscription(GPSFix, self.gps_fix_topic, self._on_gps_fix, 20)
        self.create_subscription(Odometry, self.odom_topic, self._on_odom, 20)
        if self._detection_msg_type is None:
            self.get_logger().error(
                "No supported detection message type found; SDSM publisher will run without detection subscription"
            )
        else:
            self.get_logger().info(f"Using detection input type: {self._detection_msg_type_name}")
            self.create_subscription(self._detection_msg_type, self.detection_topic, self._on_detections, 20)

        # Heartbeat timer
        heartbeat_period = 1.0 / max(0.1, self.publish_rate_hz)
        self.create_timer(heartbeat_period, self._on_heartbeat)

        self.get_logger().info(
            f"V2X SDSM Publisher initialized: backend=fac_layer "
            f"rate={self.publish_rate_hz}Hz obu={self.obu_host}:{self.obu_port}"
        )

    def _try_load_j2735_decoder_module(self):
        """Load j2735_202409 ASN.1 decoder."""
        try:
            spec = importlib.util.find_spec("j2735_202409")
            if spec is not None and spec.origin is not None:
                return importlib.import_module("j2735_202409")
        except Exception:
            pass
        return None

    def _create_backend(self):
        """Create FAC layer transmission backend."""
        return FacilitiesSdsmBackend(host=self.obu_host, port=self.obu_port, logger=self.get_logger())

    def destroy_node(self) -> None:
        """Cleanup."""
        self._backend.stop()
        super().destroy_node()

    def _on_gps(self, msg: NavSatFix) -> None:
        """Update ego GPS position."""
        if msg.status.status >= 0:
            self._gps_lat_lon = (msg.latitude, msg.longitude)

    def _on_gps_fix(self, msg) -> None:
        """Update ego GPS position from gps_msgs/GPSFix."""
        latitude = getattr(msg, "latitude", None)
        longitude = getattr(msg, "longitude", None)
        if not isinstance(latitude, (int, float)) or not isinstance(longitude, (int, float)):
            return
        if not math.isfinite(latitude) or not math.isfinite(longitude):
            return
        self._gps_lat_lon = (float(latitude), float(longitude))

    def _on_odom(self, msg: Odometry) -> None:
        """Update ego odometry."""
        self._ego_xy = (msg.pose.pose.position.x, msg.pose.pose.position.y)
        self._ego_pose_xyz = (msg.pose.pose.position.x, msg.pose.pose.position.y, msg.pose.pose.position.z)
        quat = msg.pose.pose.orientation
        self._ego_orientation_xyzw = (quat.x, quat.y, quat.z, quat.w)
        self._odom_child_frame = msg.child_frame_id

    def _on_detections(self, msg) -> None:
        """Process incoming detections."""
        now_ns = time.time_ns()
        detections_frame = msg.header.frame_id or "lidar_tc"

        for det in msg.detections:
            point = self._extract_point(det)
            if point is None:
                continue

            confidence = self._extract_confidence(det)
            if confidence < self.min_confidence:
                continue

            label = self._extract_label(det)
            
            # Convert to odom frame
            pt = PointStamped()
            # Detection center comes from the active detection message type, so use the list frame.
            pt.header.frame_id = detections_frame
            pt.header.stamp = msg.header.stamp
            pt.point.x = point[0]
            pt.point.y = point[1]
            pt.point.z = point[2]

            try:
                transformed = self._tf_buffer.transform(pt, self.target_frame, timeout=Duration(seconds=0.05))
                x_m, y_m, z_m = transformed.point.x, transformed.point.y, transformed.point.z
            except Exception:
                pt_fallback = self._transform_point_via_odom_pose(pt, pt.header.frame_id)
                if pt_fallback is None:
                    continue
                x_m, y_m, z_m = pt_fallback
            # Convert to lat/lon
            latlon = utm.to_latlon(x_m, y_m, 14, 'N')
            if latlon is None:
                continue

            lat_deg, lon_deg = latlon

            # Generate deterministic track ID
            track_id = f"{label}_{hashlib.md5(f'{x_m:.2f}_{y_m:.2f}'.encode()).hexdigest()[:8]}"

            # Estimate speed (rough)
            speed_mps = 0.0

            # Update or create track
            if track_id in self._tracks:
                state = self._tracks[track_id]
                state.confidence = confidence
                state.x_m = x_m
                state.y_m = y_m
                state.z_m = z_m
                state.lat_deg = lat_deg
                state.lon_deg = lon_deg
                state.last_update_ns = now_ns
            else:
                state = TrackState(
                    track_id=track_id,
                    label=label,
                    confidence=confidence,
                    x_m=x_m,
                    y_m=y_m,
                    z_m=z_m,
                    lat_deg=lat_deg,
                    lon_deg=lon_deg,
                    speed_mps=speed_mps,
                    heading_deg=None,
                    last_update_ns=now_ns,
                )
                self._tracks[track_id] = state

    def _on_heartbeat(self) -> None:
        """Periodic SDSM publication."""
        now_ns = time.time_ns()
        self._prune_stale_tracks(now_ns)

        if (now_ns - self._last_health_log_ns) > int(2e9):
            self.get_logger().info(
                "SDSM health: "
                f"tracks={len(self._tracks)} "
                f"gps_ready={self._gps_lat_lon is not None} "
                f"odom_ready={self._ego_xy is not None} "
                f"j2735_ready={self._detected_object_data_type is not None} "
                f"send_ok={self._send_ok_total} send_fail={self._send_fail_total} "
                f"encode_fail={self._encode_fail_total}"
            )
            self._last_health_log_ns = now_ns

        self._on_heartbeat_fac()

    def _on_heartbeat_fac(self) -> None:
        """Heartbeat for facilities-layer backend: push individual objects to OBU."""
        backend: FacilitiesSdsmBackend = self._backend  # type: ignore[assignment]

        # Always push ref position so the OBU knows where the sensor host is.
        if self._gps_lat_lon is not None:
            lat_deg, lon_deg = self._gps_lat_lon
            backend.update_ref_position(lat_deg, lon_deg, int(time.time() * 1000))

        current_obj_ids: set = set()

        for state in self._tracks.values():
            obj_id = self._track_obj_id(state)
            current_obj_ids.add(obj_id)

            uper_bytes = self._encode_detected_object_data(state)
            if uper_bytes is None:
                continue

            if self._ego_xy is not None:
                dx = state.x_m - self._ego_xy[0]
                dy = state.y_m - self._ego_xy[1]
                # Higher priority (less negative) for closer objects.
                priority = int(-math.sqrt(dx * dx + dy * dy) * 100)
            else:
                priority = 0

            if backend.set_object(obj_id, priority, uper_bytes):
                self._send_ok_total += 1
            else:
                self._send_fail_total += 1

        # Delete objects that expired since last heartbeat.
        for stale_id in self._registered_obj_ids - current_obj_ids:
            backend.delete_object(stale_id)

        self._registered_obj_ids = current_obj_ids

    @staticmethod
    def _track_obj_id(state: "TrackState") -> int:
        """Deterministic uint16 object ID for a track (matches J2735 objectID field)."""
        return int(hashlib.md5(state.track_id.encode()).hexdigest(), 16) % 65536

    def _encode_detected_object_data(self, state: "TrackState") -> Optional[bytes]:
        """Encode a single DetectedObjectData to UPER bytes for sdsm_set_object buffer."""
        if self._detected_object_data_type is None:
            return None
        if self._ego_xy is None:
            return None

        # J2735 OffsetB12 and VertOffset-B12: 0.1 m per LSB, range -2048..2047 (-204.7 m to +204.7 m).
        ego_z = self._ego_pose_xyz[2] if self._ego_pose_xyz is not None else state.z_m
        def _to_j2735_offset(meters: float) -> int:
            return max(-2048, min(2047, int(meters * 10.0)))

        offsetX = _to_j2735_offset(state.x_m - self._ego_xy[0])   # East, positive = East
        offsetY = _to_j2735_offset(state.y_m - self._ego_xy[1])   # North, positive = North
        offsetZ = _to_j2735_offset(state.z_m - ego_z)              # Up, relative to ego elevation

        obj_id = self._track_obj_id(state)

        det_obj = {
            "detObjCommon": {
                "objectID": obj_id,
                "measurementTime": 0,
                "timeConfidence": "unavailable",
                "pos": {
                    "offsetX": offsetX,
                    "offsetY": offsetY,
                    "offsetZ": offsetZ,
                },
                "posConfidence": {
                    "pos": "a10m",
                    "elevation": "unavailable",
                },
                "speed": int(max(0.0, state.speed_mps) * 50.0),
                "speedConfidence": "unavailable",
                "heading": 0,
                "headingConf": "unavailable",
                "objType": self._map_label_to_obj_type(state.label),
                "objTypeCfd": 80,
            }
        }

        try:
            self._detected_object_data_type.set_val(det_obj)
            return bytes(self._detected_object_data_type.to_uper())
        except Exception as e:
            self._encode_fail_total += 1
            self.get_logger().warn(f"DetectedObjectData encode failed: {e} | det_obj={det_obj}")
            return None

    def _transform_point_via_odom_pose(self, pt: PointStamped, source_frame: str) -> Optional[Tuple[float, float, float]]:
        """Transform using stored odometry pose (fallback)."""
        if self.target_frame != "odom":
            return None
        if self._ego_pose_xyz is None or self._ego_orientation_xyzw is None:
            return None

        rx, ry, rz = self._rotate_point_by_quaternion(
            pt.point.x, pt.point.y, pt.point.z, self._ego_orientation_xyzw
        )
        ex, ey, ez = self._ego_pose_xyz
        return ex + ry, ey + rx, ez + rz

    @staticmethod
    def _rotate_point_by_quaternion(
        x: float, y: float, z: float, quat_xyzw: Tuple[float, float, float, float]
    ) -> Tuple[float, float, float]:
        """Rotate point by quaternion."""
        qx, qy, qz, qw = quat_xyzw
        norm = math.sqrt(qx * qx + qy * qy + qz * qz + qw * qw)
        if norm <= 1e-9:
            return x, y, z

        qx /= norm
        qy /= norm
        qz /= norm
        qw /= norm

        r00 = 1.0 - 2.0 * (qy * qy + qz * qz)
        r01 = 2.0 * (qx * qy - qz * qw)
        r02 = 2.0 * (qx * qz + qy * qw)
        r10 = 2.0 * (qx * qy + qz * qw)
        r11 = 1.0 - 2.0 * (qx * qx + qz * qz)
        r12 = 2.0 * (qy * qz - qx * qw)
        r20 = 2.0 * (qx * qz - qy * qw)
        r21 = 2.0 * (qy * qz + qx * qw)
        r22 = 1.0 - 2.0 * (qx * qx + qy * qy)

        return (
            r00 * x + r01 * y + r02 * z,
            r10 * x + r11 * y + r12 * z,
            r20 * x + r21 * y + r22 * z,
        )

    def _extract_yaw_from_quaternion(self, quat_xyzw: Tuple[float, float, float, float]) -> float:
        """Extract yaw (Z-axis rotation) from quaternion."""
        qx, qy, qz, qw = quat_xyzw
        # Normalize quaternion
        norm = math.sqrt(qx * qx + qy * qy + qz * qz + qw * qw)
        if norm <= 1e-9:
            return 0.0
        qx /= norm
        qy /= norm
        qz /= norm
        qw /= norm
        
        # Extract yaw from quaternion
        # yaw = atan2(2*(qw*qz + qx*qy), 1 - 2*(qy^2 + qz^2))
        yaw = math.atan2(2.0 * (qw * qz + qx * qy), 1.0 - 2.0 * (qy * qy + qz * qz))
        return yaw

    def _extract_label(self, det) -> str:
        for attr in ("label", "class_name", "name", "class_id", "id"):
            value = getattr(det, attr, None)
            if isinstance(value, str) and value:
                return value

        semantic_class = getattr(det, "semantic_class", None)
        if isinstance(semantic_class, int):
            semantic_labels = {
                0: "unknown",
                1: "vehicle",
                2: "vehicle",
                3: "pedestrian",
                4: "motorcycle",
            }
            return semantic_labels.get(semantic_class, str(semantic_class))

        results = getattr(det, "results", None)
        if results:
            first = results[0]
            hypothesis = getattr(first, "hypothesis", None)
            if hypothesis is not None:
                class_id = getattr(hypothesis, "class_id", None)
                if isinstance(class_id, str) and class_id:
                    return class_id
        return "unknown"

    def _extract_point(self, det) -> Optional[Tuple[float, float, float]]:
        candidates = [
            ("bbox3d", "center", "position"),
            ("bbox", "center", "position"),
            ("pose", "pose", "position"),
            ("pose", "position"),
            ("position",),
            ("center", "position"),
            ("center",),
        ]

        for path in candidates:
            cur = det
            ok = True
            for name in path:
                if not hasattr(cur, name):
                    ok = False
                    break
                cur = getattr(cur, name)
            if not ok:
                continue
            x = getattr(cur, "x", None)
            y = getattr(cur, "y", None)
            z = getattr(cur, "z", 0.0)
            if isinstance(x, (int, float)) and isinstance(y, (int, float)):
                return float(x), float(y), float(z) if isinstance(z, (int, float)) else 0.0
        return None

    def _extract_confidence(self, det) -> float:
        for attr in ("confidence", "score", "probability"):
            value = getattr(det, attr, None)
            if isinstance(value, (int, float)):
                return float(value)

        semantic_class = getattr(det, "semantic_class", None)
        if isinstance(semantic_class, int):
            return 1.0

        results = getattr(det, "results", None)
        if results:
            first = results[0]
            for attr in ("score", "confidence"):
                value = getattr(first, attr, None)
                if isinstance(value, (int, float)):
                    return float(value)
            hypothesis = getattr(first, "hypothesis", None)
            if hypothesis is not None:
                value = getattr(hypothesis, "score", None)
                if isinstance(value, (int, float)):
                    return float(value)

        return 1.0

    def _prune_stale_tracks(self, now_ns: int) -> None:
        """Remove old tracks."""
        timeout_ns = int(max(0.1, self.track_timeout_sec) * 1e9)
        stale = [tid for tid, st in self._tracks.items() if (now_ns - st.last_update_ns) > timeout_ns]
        for tid in stale:
            self._tracks.pop(tid, None)

    def _build_sdsm_payload(self) -> Dict:
        """Build SDSM message with detected objects."""
        objects = []

        for state in self._tracks.values():
            # Convert position to SDSM format — J2735 OffsetB12/VertOffset-B12: 0.1 m/LSB
            if self._ego_xy is None:
                continue

            ego_z = self._ego_pose_xyz[2] if self._ego_pose_xyz is not None else state.z_m
            offsetX = max(-2048, min(2047, int((state.x_m - self._ego_xy[0]) * 10.0)))
            offsetY = max(-2048, min(2047, int((state.y_m - self._ego_xy[1]) * 10.0)))
            offsetZ = max(-2048, min(2047, int((state.z_m - ego_z) * 10.0)))

            obj = {
                "detObjCommon": {
                    # J2735 SDSM constrains objectID to 0..65535.
                    "objectID": int(hashlib.md5(state.track_id.encode()).hexdigest(), 16) % 65536,
                    "measurementTime": 0,
                    "timeConfidence": "unavailable",
                    "pos": {
                        "offsetX": offsetX,
                        "offsetY": offsetY,
                        "offsetZ": offsetZ,
                    },
                    "posConfidence": {
                        "pos": "a10m",
                        "elevation": "unavailable",
                    },
                    "speed": int(max(0.0, state.speed_mps) * 50.0),
                    "speedConfidence": "unavailable",
                    "heading": 0,
                    "headingConf": "unavailable",
                    "objType": self._map_label_to_obj_type(state.label),
                    "objTypeCfd": 80,
                }
            }
            objects.append(obj)

        now_utc = datetime.datetime.now(datetime.timezone.utc)
        sec_of_minute = now_utc.second * 1000 + int(now_utc.microsecond / 1000)
        sec_of_minute = max(0, min(65535, sec_of_minute))

        # Stable 4-byte source identifier required by J2735 SDSM.
        source_id = hashlib.sha256(self.id_salt.encode("utf-8")).digest()[:4]

        if self._gps_lat_lon is not None:
            ref_lat_deg, ref_lon_deg = self._gps_lat_lon
        elif objects:
            first = next(iter(self._tracks.values()))
            ref_lat_deg, ref_lon_deg = first.lat_deg, first.lon_deg
        else:
            ref_lat_deg, ref_lon_deg = 0.0, 0.0

        payload = {
            "msgCnt": self._msg_count,
            "sourceID": source_id,
            "equipmentType": "obu",
            "sDSMTimeStamp": {
                "year": now_utc.year,
                "month": now_utc.month,
                "day": now_utc.day,
                "hour": now_utc.hour,
                "minute": now_utc.minute,
                "second": sec_of_minute,
                "offset": 0,
            },
            "refPos": {
                "lat": int(round(ref_lat_deg * 1e7)),
                "long": int(round(ref_lon_deg * 1e7)),
                "elevation": 0,
            },
            "refPosXYConf": {
                "semiMajor": 255,
                "semiMinor": 255,
                "orientation": 0,
            },
            "refPosElConf": "unavailable",
            "objects": objects,
        }

        self._msg_count = (self._msg_count + 1) % 128

        return payload

    @staticmethod
    def _map_label_to_obj_type(label: str) -> str:
        """Map detection label to SDSM object type."""
        key = (label or "").strip().lower()
        if any(token in key for token in ("vehicle", "car", "truck", "bus")):
            return "vehicle"
        if any(token in key for token in ("ped", "person", "human", "walker")):
            return "vru"
        if any(token in key for token in ("cycl", "bike", "bicy")):
            return "vru"
        if any(token in key for token in ("dog", "deer", "animal")):
            return "animal"
        return "unknown"

    def _encode_sdsm(self, sdsm: Dict) -> Optional[bytes]:
        """Encode SDSM to UPER bytes."""
        if self._asn1_encode_fn is not None and self._asn1_type is not None:
            frame = {
                "messageId": SDSM_MESSAGE_ID,
                "value": ("SensorDataSharingMessage", sdsm),
            }
            try:
                encoded = self._asn1_encode_fn(frame, self._asn1_type)
                return bytes(encoded)
            except Exception as e:
                self.get_logger().debug(f"SDSM pycmssdk ASN.1 encode failed: {e}")

        if self._message_frame is None:
            return None

        try:
            self._message_frame.set_val({"messageId": SDSM_MESSAGE_ID, "value": ("SensorDataSharingMessage", sdsm)})
            return bytes(self._message_frame.to_uper())
        except Exception as e:
            self.get_logger().error(f"SDSM encode failed: {e}")
            return None


def main() -> None:
    """Main entry point."""
    rclpy.init()
    node = V2XSdsmPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
