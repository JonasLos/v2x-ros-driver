// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/IntersectionStateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_state_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'intersection_state_list'
#include "j2735_v2x_msgs/msg/detail/intersection_state__struct.h"

/// Struct defined in msg/IntersectionStateList in the package j2735_v2x_msgs.
/**
  * IntersectionStateList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The IntersectionStateList data frame consists of a list of IntersectionState entries.
 */
typedef struct j2735_v2x_msgs__msg__IntersectionStateList
{
  /// IntersectionStateList ::= SEQUENCE (SIZE(1..32)) OF IntersectionState
  j2735_v2x_msgs__msg__IntersectionState__Sequence intersection_state_list;
} j2735_v2x_msgs__msg__IntersectionStateList;

// Struct for a sequence of j2735_v2x_msgs__msg__IntersectionStateList.
typedef struct j2735_v2x_msgs__msg__IntersectionStateList__Sequence
{
  j2735_v2x_msgs__msg__IntersectionStateList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__IntersectionStateList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE_LIST__STRUCT_H_
