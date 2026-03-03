// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection_maneuver_assist.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ConnectionManeuverAssist in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__ConnectionManeuverAssist
{
  /// The ConnectionManeuverAssist data frame contains information about the the dynamic flow of traffic for the lane(s)
  /// and maneuvers in question (as determined by the LaneConnectionID). Note that this information can be sent regarding
  /// any lane-to-lane movement; it need not be limited to the lanes with active (non-red) phases when sent.
  ///
  /// ConnectionManeuverAssist ::= SEQUENCE {
  /// connectionID LaneConnectionID,
  /// -- the common connectionID used by all lanes to which
  /// -- this data applies
  /// -- (this value traces to ConnectsTo entries in lanes)
  /// -- Expected Clearance Information
  /// queueLength ZoneLength OPTIONAL,
  /// -- Unit = 1 meter, 0 = no queue
  /// -- The distance from the stop line to the back
  /// -- edge of the last vehicle in the queue,
  /// -- as measured along the lane center line.
  /// availableStorageLength ZoneLength OPTIONAL,
  /// -- Unit = 1 meter, 0 = no space remains
  /// -- Distance (e.g. beginning from the downstream
  /// -- stop-line up to a given distance) with a high
  /// -- probability for successfully executing the
  /// -- connecting maneuver between the two lanes
  /// -- during the current cycle.
  /// -- Used for enhancing the awareness of vehicles
  /// -- to anticipate if they can pass the stop line
  /// -- of the lane. Used for optimizing the green wave,
  /// -- due to knowledge of vehicles waiting in front
  /// -- of a red light (downstream).
  /// -- The element nextTime in TimeChangeDetails
  /// -- in the containing data frame contains the next
  /// -- timemark at which an active phase is expected,
  /// -- a form of storage flush interval.
  /// waitOnStop WaitOnStopline OPTIONAL,
  /// -- If "true", the vehicles on this specific connecting
  /// -- maneuver have to stop on the stop-line and not
  /// -- to enter the collision area
  /// pedBicycleDetect PedestrianBicycleDetect OPTIONAL,
  /// -- true if ANY ped or bicycles are detected crossing
  /// -- the above lanes. Set to false ONLY if there is a
  /// -- high certainty that there are none present,
  /// -- otherwise element is not sent.
  /// regional SEQUENCE (SIZE(1..4)) OF RegionalExtension {{REGION.Reg-ConnectionManeuverAssist}} OPTIONAL,
  /// ...
  /// }
  /// LaneConnectionID ::= INTEGER (0..255)
  uint8_t connection_id;
  /// ZoneLength ::= INTEGER (0..10000)
  /// -- Unit = 1 meter, 0 = unknown,
  /// -- The value 10000 to be used for Distances >=10000 m
  /// -- (e.g. from known point to another point along a
  /// -- known path, often against traffic flow direction
  /// -- when used for measuring queues)
  uint16_t queue_length;
  bool queue_length_exists;
  /// ZoneLength ::= INTEGER (0..10000)
  uint16_t available_storage_length;
  bool available_storage_length_exists;
  /// WaitOnStopline ::= BOOLEAN --- True or False
  /// -- If "true", the vehicles on this specific connecting
  /// -- maneuver have to stop on the stop-line
  /// -- and not to enter the collision area
  bool wait_on_stop;
  bool wait_on_stop_exists;
  /// PedestrianBicycleDetect ::= BOOLEAN
  /// -- true if ANY Pedestrians or Bicyclists are
  /// -- detected crossing the target lane or lanes
  bool ped_bicycle_detect;
  bool ped_bicycle_detect_exists;
} j2735_v2x_msgs__msg__ConnectionManeuverAssist;

// Struct for a sequence of j2735_v2x_msgs__msg__ConnectionManeuverAssist.
typedef struct j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence
{
  j2735_v2x_msgs__msg__ConnectionManeuverAssist * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ConnectionManeuverAssist__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__STRUCT_H_
