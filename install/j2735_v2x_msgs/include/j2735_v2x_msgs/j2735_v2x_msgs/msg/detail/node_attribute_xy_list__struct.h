// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXYList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_xy_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'node_attribute_xy_list'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__struct.h"

/// Struct defined in msg/NodeAttributeXYList in the package j2735_v2x_msgs.
/**
  * NodeAttributeXYList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The NodeAttributeXYList data frame consists of a list of NodeAttributeXY entries.
  *
  * NodeAttributeXYList ::= SEQUENCE (SIZE(1..8)) OF NodeAttributeXY
 */
typedef struct j2735_v2x_msgs__msg__NodeAttributeXYList
{
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence node_attribute_xy_list;
} j2735_v2x_msgs__msg__NodeAttributeXYList;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeAttributeXYList.
typedef struct j2735_v2x_msgs__msg__NodeAttributeXYList__Sequence
{
  j2735_v2x_msgs__msg__NodeAttributeXYList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeAttributeXYList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__STRUCT_H_
