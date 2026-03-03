// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneDataAttributeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_data_attribute_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'lane_attribute_list'
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__struct.h"

/// Struct defined in msg/LaneDataAttributeList in the package j2735_v2x_msgs.
/**
  * LaneDataAttributeList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneDataAttributeList data frame consists of a list of LaneDataAttribute entries.
  *
  * LaneDataAttributeList ::= SEQUENCE (SIZE(1..8)) OF LaneDataAttribute
 */
typedef struct j2735_v2x_msgs__msg__LaneDataAttributeList
{
  j2735_v2x_msgs__msg__LaneDataAttribute__Sequence lane_attribute_list;
} j2735_v2x_msgs__msg__LaneDataAttributeList;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneDataAttributeList.
typedef struct j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence
{
  j2735_v2x_msgs__msg__LaneDataAttributeList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneDataAttributeList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE_LIST__STRUCT_H_
