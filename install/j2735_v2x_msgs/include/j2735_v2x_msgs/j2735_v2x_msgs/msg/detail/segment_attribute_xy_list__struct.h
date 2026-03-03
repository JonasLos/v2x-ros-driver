// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXYList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/segment_attribute_xy_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'segment_attribute_xy'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__struct.h"

/// Struct defined in msg/SegmentAttributeXYList in the package j2735_v2x_msgs.
/**
  *  NodeAttributeXYList.msg
  *
  *  J2735 2016 message format.
  *
  *  @author Mae Fromm
  *  @version 0.1
  *
  * The DF_SegmentAttributeXYList data frame consists of a list of SegmentAttributeXY entries.
 */
typedef struct j2735_v2x_msgs__msg__SegmentAttributeXYList
{
  /// SegmentAttributeXYList ::= SEQUENCE (SIZE(1..8)) OF SegmentAttributeXY
  j2735_v2x_msgs__msg__SegmentAttributeXY__Sequence segment_attribute_xy;
} j2735_v2x_msgs__msg__SegmentAttributeXYList;

// Struct for a sequence of j2735_v2x_msgs__msg__SegmentAttributeXYList.
typedef struct j2735_v2x_msgs__msg__SegmentAttributeXYList__Sequence
{
  j2735_v2x_msgs__msg__SegmentAttributeXYList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SegmentAttributeXYList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__STRUCT_H_
