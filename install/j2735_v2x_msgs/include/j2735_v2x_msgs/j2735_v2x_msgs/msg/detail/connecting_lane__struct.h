// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connecting_lane.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LANE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__ConnectingLane__LANE_UNAVAILABLE = 0
};

// Include directives for member types
// Member 'maneuver'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.h"

/// Struct defined in msg/ConnectingLane in the package j2735_v2x_msgs.
/**
  * ConnectingLane.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * ConnectingLane ::= SEQUENCE {
  * lane LaneID,
  * -- Index of the connecting lane
  * maneuver AllowedManeuvers OPTIONAL
  * -- The Maneuver between
  * -- the enclosing lane and this lane
  * -- at the stop line to connect them
  * }
 */
typedef struct j2735_v2x_msgs__msg__ConnectingLane
{
  /// LaneID ::= INTEGER (0..255)
  /// -- the value 0 shall be used when the lane ID is
  /// -- not available or not known
  /// -- the value 255 is reserved for future use
  uint16_t lane;
  /// -- the permitted maneuvers for this lane
  /// AllowedManeuvers ::= BIT STRING {
  /// -- With bits as defined:
  /// -- Allowed maneuvers at path end (stop line)
  /// -- *** All maneuvers with bits not set are therefore prohibited ! ***
  /// -- A value of zero shall be used for unknown, indicating no Maneuver
  j2735_v2x_msgs__msg__AllowedManeuvers maneuver;
  bool maneuver_exists;
} j2735_v2x_msgs__msg__ConnectingLane;

// Struct for a sequence of j2735_v2x_msgs__msg__ConnectingLane.
typedef struct j2735_v2x_msgs__msg__ConnectingLane__Sequence
{
  j2735_v2x_msgs__msg__ConnectingLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ConnectingLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_
