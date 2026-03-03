// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesSidewalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_sidewalk.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneAttributesSidewalk in the package j2735_v2x_msgs.
/**
  * LaneAttributesSidewalk.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneAttributes-Sidewalk data element relates specific properties found in a sidewalk lane type
  *
  * LaneAttributes-Sidewalk ::= BIT STRING {
  * -- With bits as defined:
  * sidewalk-RevocableLane (0),
  * -- this lane may be activated or not based
  * -- on the current SPAT message contents
  * -- if not asserted, the lane is ALWAYS present
  * bicyleUseAllowed (1),
  * -- The path allows bicycle traffic,
  * -- if not set, this mode is prohibited
  * isSidewalkFlyOverLane (2),
  * -- path of lane is not at grade
  * walkBikes (3)
  * -- bike traffic must dismount and walk
  * -- Bits 4~15 reserved and set to zero
  * } (SIZE (16))
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributesSidewalk
{
  uint16_t lane_attributes_sidewalk;
} j2735_v2x_msgs__msg__LaneAttributesSidewalk;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesSidewalk.
typedef struct j2735_v2x_msgs__msg__LaneAttributesSidewalk__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesSidewalk * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesSidewalk__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__STRUCT_H_
