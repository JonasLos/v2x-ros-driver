// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ConnectsToList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connects_to_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTS_TO_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTS_TO_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'connect_to_list'
#include "j2735_v2x_msgs/msg/detail/connection__struct.h"

/// Struct defined in msg/ConnectsToList in the package j2735_v2x_msgs.
/**
  * ConnectsToList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The ConnectsToList data structure is used in the generic lane descriptions to provide a sequence of other defined
  * lanes to which each lane connects beyond its stop point. See the Connection data frame entry for details. Note that this
  * data frame is not used in some lane object types.
  *
  * ConnectsToList ::= SEQUENCE (SIZE(1..16)) OF Connection
 */
typedef struct j2735_v2x_msgs__msg__ConnectsToList
{
  j2735_v2x_msgs__msg__Connection__Sequence connect_to_list;
} j2735_v2x_msgs__msg__ConnectsToList;

// Struct for a sequence of j2735_v2x_msgs__msg__ConnectsToList.
typedef struct j2735_v2x_msgs__msg__ConnectsToList__Sequence
{
  j2735_v2x_msgs__msg__ConnectsToList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ConnectsToList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTS_TO_LIST__STRUCT_H_
