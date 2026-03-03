// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBike.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_bike.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneAttributesBike in the package j2735_v2x_msgs.
/**
  * LaneAttributesBike.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneAttributes-Bike data element relates specific properties found in a bicycle lane type.
  *
  * LaneAttributes-Bike ::= BIT STRING {
  * -- With bits as defined:
  * bikeRevocableLane (0),
  *  -- this lane may be activated or not based
  *  -- on the current SPAT message contents
  *  -- if not asserted, the lane is ALWAYS present
  * pedestrianUseAllowed (1),
  *  -- The path allows pedestrian traffic,
  *  -- if not set, this mode is prohibited
  * isBikeFlyOverLane (2),
  *  -- path of lane is not at grade
  * fixedCycleTime (3),
  *  -- the phases use preset times
  *  -- Bits 7~15 reserved and set to zero
  * } (SIZE (16))
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributesBike
{
  uint16_t lane_attributes_bike;
} j2735_v2x_msgs__msg__LaneAttributesBike;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesBike.
typedef struct j2735_v2x_msgs__msg__LaneAttributesBike__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesBike * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesBike__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_H_
