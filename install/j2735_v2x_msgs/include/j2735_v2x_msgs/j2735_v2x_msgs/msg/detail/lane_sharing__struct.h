// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneSharing.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_sharing.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_SHARING__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_SHARING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneSharing in the package j2735_v2x_msgs.
/**
  * LaneSharing.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * LaneSharing ::= BIT STRING {
  * -- With bits as defined:
  * overlappingLaneDescriptionProvided (0),
  * -- Assert when another lane object is present to describe the
  * -- path of the overlapping shared lane
  * -- this construct is not used for lane objects which simply cross
  * multipleLanesTreatedAsOneLane(1),
  * -- Assert if the lane object path and width details represents
  * -- multiple lanes within it that are not further described
  * -- Various modes and type of traffic that may share this lane:
  * otherNonMotorizedTrafficTypes (2), -- horse drawn etc.
  * individualMotorizedVehicleTraffic (3),
  * busVehicleTraffic (4),
  * taxiVehicleTraffic (5),
  * pedestriansTraffic (6),
  * cyclistVehicleTraffic (7),
  * trackedVehicleTraffic (8),
  * pedestrianTraffic (9)
  * } (SIZE (10))
  * -- All zeros would indicate 'not shared' and 'not overlapping'
 */
typedef struct j2735_v2x_msgs__msg__LaneSharing
{
  uint16_t lane_sharing;
} j2735_v2x_msgs__msg__LaneSharing;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneSharing.
typedef struct j2735_v2x_msgs__msg__LaneSharing__Sequence
{
  j2735_v2x_msgs__msg__LaneSharing * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneSharing__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_SHARING__STRUCT_H_
