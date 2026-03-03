// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'lane_list'
#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.h"

/// Struct defined in msg/LaneList in the package j2735_v2x_msgs.
/**
  * LaneList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneList data frame consists of a list of GenericLane entries.
  * LaneList ::= SEQUENCE (SIZE(1..255)) OF GenericLane
 */
typedef struct j2735_v2x_msgs__msg__LaneList
{
  j2735_v2x_msgs__msg__GenericLane__Sequence lane_list;
} j2735_v2x_msgs__msg__LaneList;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneList.
typedef struct j2735_v2x_msgs__msg__LaneList__Sequence
{
  j2735_v2x_msgs__msg__LaneList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_LIST__STRUCT_H_
