// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesStriping.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_striping.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_STRIPING__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_STRIPING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneAttributesStriping in the package j2735_v2x_msgs.
/**
  * LaneAttributesBarrier.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneAttributes-Striping data element relates specific properties found
  * in various types of ground striping lane types.
  *
  * LaneAttributes-Striping ::= BIT STRING {
  * -- With bits as defined:
  * stripeToConnectingLanesRevocableLane(0),
  * -- this lane may be activated or not activated based
  * -- on the current SPAT message contents
  * -- if not asserted, the lane is ALWAYS present
  * stripeDrawOnLeft(1),
  * stripeDrawOnRight(2),
  * -- which side of lane to mark
  * stripeToConnectingLanesLeft(3),
  * stripeToConnectingLanesRight(4),
  * stripeToConnectingLanesAhead(5)
  * -- the stripe type should be
  * -- presented to the user visually
  * -- to reflect stripes in the
  * -- intersection for the type of
  * -- movement indicated
  * -- Bits 6~15 reserved and set to zero
  * } (SIZE (16))
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributesStriping
{
  uint16_t lane_attributes_striping;
} j2735_v2x_msgs__msg__LaneAttributesStriping;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesStriping.
typedef struct j2735_v2x_msgs__msg__LaneAttributesStriping__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesStriping * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesStriping__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_STRIPING__STRUCT_H_
