// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MovementList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'movement_list'
#include "j2735_v2x_msgs/msg/detail/movement_state__struct.h"

/// Struct defined in msg/MovementList in the package j2735_v2x_msgs.
/**
  * MovementList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The MovementList data frame consists of a list of MovementState entries.
  *
  * MovementList ::= SEQUENCE (SIZE(1..255)) OF MovementState
 */
typedef struct j2735_v2x_msgs__msg__MovementList
{
  j2735_v2x_msgs__msg__MovementState__Sequence movement_list;
} j2735_v2x_msgs__msg__MovementList;

// Struct for a sequence of j2735_v2x_msgs__msg__MovementList.
typedef struct j2735_v2x_msgs__msg__MovementList__Sequence
{
  j2735_v2x_msgs__msg__MovementList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MovementList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_H_
