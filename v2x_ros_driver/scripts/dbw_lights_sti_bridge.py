#!/usr/bin/env python3
#
# Standalone ROS2 node: DBW vehicle state → Commsignia OBU STI bridge.
#
# Subscribes to raptor_dbw_can reports and pushes exterior lights, brake
# pedal, and transmission state into the OBU via the pycmssdk STI API.
# The OBU includes these in every BSM it broadcasts automatically.
#
# Hazard detection: vehicles often alternate LEFT/RIGHT at the blink rate
# instead of sending HAZARDS=3. This node infers HAZARD mode when both
# LEFT and RIGHT have been seen within a configurable sliding window.

import threading
import time

import rclpy
from rclpy.node import Node

from raptor_dbw_msgs.msg import (
    BrakeReport,
    GearReport,
    OtherActuatorsReport,
    TurnSignal,
    Gear,
    ParkingBrake,
)

_SENTINEL = object()


class DbwLightsStiBridge(Node):

    def __init__(self) -> None:
        super().__init__("dbw_lights_sti_bridge")

        self.declare_parameter("obu_host", "127.0.0.1")
        self.declare_parameter("obu_port", 7942)
        self.declare_parameter("actuators_topic",
                               "/raptor_dbw_interface/other_actuators_report")
        self.declare_parameter("brake_topic",
                               "/raptor_dbw_interface/brake_report")
        self.declare_parameter("gear_topic",
                               "/raptor_dbw_interface/gear_report")
        self.declare_parameter("reconnect_delay_sec", 2.0)
        # Hazard is inferred when both LEFT and RIGHT are seen within this window.
        self.declare_parameter("hazard_window_sec", 0.5)

        self._obu_host = self.get_parameter("obu_host").get_parameter_value().string_value
        self._obu_port = self.get_parameter("obu_port").get_parameter_value().integer_value
        self._reconnect_delay = self.get_parameter("reconnect_delay_sec").get_parameter_value().double_value
        self._hazard_window = self.get_parameter("hazard_window_sec").get_parameter_value().double_value

        # SDK connection state.
        self._api = None
        self._api_lock = threading.Lock()
        self._stop = threading.Event()

        # Change-detection caches (per-group).
        self._last_lights: dict = {}
        self._last_brake: dict = {}
        self._last_gear: dict = {}

        # Hazard inference: track last time each blink direction was seen.
        self._last_left_ts: float | None = None
        self._last_right_ts: float | None = None

        act_topic = self.get_parameter("actuators_topic").get_parameter_value().string_value
        brk_topic = self.get_parameter("brake_topic").get_parameter_value().string_value
        gear_topic = self.get_parameter("gear_topic").get_parameter_value().string_value

        self._sub_act = self.create_subscription(
            OtherActuatorsReport, act_topic, self._actuators_cb, 10)
        self._sub_brk = self.create_subscription(
            BrakeReport, brk_topic, self._brake_cb, 10)
        self._sub_gear = self.create_subscription(
            GearReport, gear_topic, self._gear_cb, 10)

        self._worker = threading.Thread(target=self._sdk_loop, daemon=True)
        self._worker.start()

        self.get_logger().info(
            "dbw_lights_sti_bridge started. obu=%s:%d hazard_window=%.1fs"
            % (self._obu_host, self._obu_port, self._hazard_window)
        )

    # ------------------------------------------------------------------
    # SDK session thread
    # ------------------------------------------------------------------

    def _sdk_loop(self) -> None:
        while rclpy.ok() and not self._stop.is_set():
            try:
                from pycmssdk import create_cms_api
            except ImportError:
                self.get_logger().error(
                    "pycmssdk not installed. Install the Commsignia Remote Python SDK wheel."
                )
                return

            try:
                with create_cms_api(host=self._obu_host, port=self._obu_port) as api:
                    with self._api_lock:
                        self._api = api
                        self._last_lights.clear()
                        self._last_brake.clear()
                        self._last_gear.clear()

                    self.get_logger().info(
                        "Connected to OBU STI API at %s:%d" % (self._obu_host, self._obu_port)
                    )
                    while rclpy.ok() and not self._stop.is_set():
                        time.sleep(0.1)

            except Exception as exc:
                self.get_logger().warn(
                    "OBU STI session error (%s). Reconnecting in %.1fs"
                    % (str(exc), self._reconnect_delay)
                )
            finally:
                with self._api_lock:
                    self._api = None

            if not self._stop.is_set():
                time.sleep(self._reconnect_delay)

    def destroy_node(self) -> bool:
        self._stop.set()
        if self._worker.is_alive():
            self._worker.join(timeout=3.0)
        return super().destroy_node()

    # ------------------------------------------------------------------
    # Helpers
    # ------------------------------------------------------------------

    def _get_api(self):
        with self._api_lock:
            return self._api

    def _push_sti(self, items_dict: dict, cache: dict) -> bool:
        """Call sti_set only if items_dict differs from cache. Returns True on success."""
        if items_dict == cache:
            return True

        api = self._get_api()
        if api is None:
            return False

        try:
            from pycmssdk import StiItem, StiSetItems
            items = tuple(StiItem(type=k, value=v) for k, v in items_dict.items())
            api.sti_set(StiSetItems(items=items))
            cache.clear()
            cache.update(items_dict)
            return True
        except Exception as exc:
            self.get_logger().warn("sti_set failed: %s" % str(exc))
            cache.clear()   # force retry next message
            return False

    def _infer_turn_signals(self, ts_value: int):
        """
        Return (left_on, right_on, hazard_on).

        Latches LEFT/RIGHT across the blink-OFF half of the cycle: NONE
        frames are ignored, and a direction stays asserted for
        hazard_window_sec after the most recent active frame. Hazard is
        inferred when both LEFT and RIGHT have been seen within that
        window — handles vehicles that alternate LEFT/RIGHT at the blink
        rate instead of sending an explicit HAZARDS value.
        """
        now = time.monotonic()

        if ts_value == TurnSignal.LEFT:
            self._last_left_ts = now
        elif ts_value == TurnSignal.RIGHT:
            self._last_right_ts = now
        elif ts_value == TurnSignal.HAZARDS:
            # Explicit HAZARDS — stamp both directions.
            self._last_left_ts = now
            self._last_right_ts = now

        left_recent = (
            self._last_left_ts is not None
            and (now - self._last_left_ts) < self._hazard_window
        )
        right_recent = (
            self._last_right_ts is not None
            and (now - self._last_right_ts) < self._hazard_window
        )

        is_hazard = left_recent and right_recent
        is_left   = left_recent and not is_hazard
        is_right  = right_recent and not is_hazard

        return is_left, is_right, is_hazard

    # ------------------------------------------------------------------
    # Subscription callbacks
    # ------------------------------------------------------------------

    def _actuators_cb(self, msg: OtherActuatorsReport) -> None:
        try:
            from pycmssdk import StiState, StiType
        except ImportError:
            return

        is_left, is_right, is_hazard = self._infer_turn_signals(
            msg.turn_signal_state.value
        )

        on  = StiState.STI_STATE_ON
        off = StiState.STI_STATE_OFF

        items = {
            StiType.STI_EXT_LIGHT_LEFT_TURN_SIGNAL:  on if is_left  or is_hazard else off,
            StiType.STI_EXT_LIGHT_RIGHT_TURN_SIGNAL: on if is_right or is_hazard else off,
            StiType.STI_EXT_LIGHT_HAZARD_LIGHT:      on if is_hazard              else off,
            StiType.STI_EXT_LIGHT_HIGHBEAM_HEAD:     on if msg.high_beam_state.value == 2 else off,
            StiType.STI_EXT_LIGHT_LOWBEAM_HEAD:      on if msg.low_beam_state.status == 2 else off,
        }

        if self._push_sti(items, self._last_lights):
            self.get_logger().debug(
                "lights → left=%s right=%s hazard=%s hi=%s lo=%s"
                % (is_left, is_right, is_hazard,
                   msg.high_beam_state.value == 2,
                   msg.low_beam_state.status == 2)
            )

    def _brake_cb(self, msg: BrakeReport) -> None:
        try:
            from pycmssdk import StiAuxBrakes, StiType
        except ImportError:
            return

        # STI_BRAKE_PEDAL: parts-per-thousand (0–1000). pedal_position is 0–100 %.
        brake_ppt = max(0, min(1000, int(msg.pedal_position * 10.0)))

        # STI_AUX_BRAKES: parking brake state.
        aux = (StiAuxBrakes.STI_AUX_BRAKES_ON
               if msg.parking_brake.status == ParkingBrake.ON
               else StiAuxBrakes.STI_AUX_BRAKES_OFF)

        items = {
            StiType.STI_BRAKE_PEDAL: brake_ppt,
            StiType.STI_AUX_BRAKES:  aux,
        }

        if self._push_sti(items, self._last_brake):
            self.get_logger().debug(
                "brake → pedal_ppt=%d aux=%s" % (brake_ppt, aux.name)
            )

    def _gear_cb(self, msg: GearReport) -> None:
        try:
            from pycmssdk import StiTransmissionState, StiType
        except ImportError:
            return

        gear = msg.state.gear

        _MAP = {
            Gear.NONE:            StiTransmissionState.STI_TRANSMISSION_STATE_NEUTRAL,
            Gear.PARK:            StiTransmissionState.STI_TRANSMISSION_PARK,
            Gear.REVERSE:         StiTransmissionState.STI_TRANSMISSION_REVERSE_GEARS,
            Gear.NEUTRAL:         StiTransmissionState.STI_TRANSMISSION_STATE_NEUTRAL,
            Gear.DRIVE:           StiTransmissionState.STI_TRANSMISSION_FWD_GEARS,
            Gear.LOW:             StiTransmissionState.STI_TRANSMISSION_FWD_GEARS,
            Gear.AUTO_HOLD:       StiTransmissionState.STI_TRANSMISSION_PARK,
            Gear.AUTO_SHIFT_UP:   StiTransmissionState.STI_TRANSMISSION_FWD_GEARS,
            Gear.AUTO_SHIFT_DOWN: StiTransmissionState.STI_TRANSMISSION_FWD_GEARS,
        }

        trans = _MAP.get(gear, StiTransmissionState.STI_TRANSMISSION_STATE_NEUTRAL)

        items = {StiType.STI_TRANSMISSION_STATE: trans}

        if self._push_sti(items, self._last_gear):
            self.get_logger().debug("gear → %s → %s" % (gear, trans.name))


def main(args=None) -> None:
    rclpy.init(args=args)
    node = DbwLightsStiBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
