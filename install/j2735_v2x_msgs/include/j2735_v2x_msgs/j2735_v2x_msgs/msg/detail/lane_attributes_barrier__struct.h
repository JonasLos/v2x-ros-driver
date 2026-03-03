// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBarrier.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_barrier.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneAttributesBarrier in the package j2735_v2x_msgs.
/**
  * LaneAttributesBarrier.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneAttributes-Barrier data element relates specific properties found in a Barrier
  * or Median lane type (a type of lane object used to separate traffic lanes).
  *
  * LaneAttributes-Barrier ::= BIT STRING {
  * -- With bits as defined:
  * median-RevocableLane (0),
  * -- this lane may be activated or not based
  * -- on the current SPAT message contents
  * -- if not asserted, the lane is ALWAYS present
  * median (1),
  * whiteLineHashing (2),
  * stripedLines (3),
  * doubleStripedLines (4),
  * trafficCones (5),
  * constructionBarrier(6),
  * trafficChannels(7),
  * lowCurbs(8),
  * highCurbs(9)
  * -- Bits 10~15 reserved and set to zero
  * } (SIZE (16))
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributesBarrier
{
  uint16_t lane_attributes_barrier;
} j2735_v2x_msgs__msg__LaneAttributesBarrier;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesBarrier.
typedef struct j2735_v2x_msgs__msg__LaneAttributesBarrier__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesBarrier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesBarrier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_H_
