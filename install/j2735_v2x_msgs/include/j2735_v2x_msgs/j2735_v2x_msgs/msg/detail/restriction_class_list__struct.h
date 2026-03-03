// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RestrictionClassList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_class_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'restriction_class_list'
#include "j2735_v2x_msgs/msg/detail/restriction_class_assignment__struct.h"

/// Struct defined in msg/RestrictionClassList in the package j2735_v2x_msgs.
/**
  * RestrictionClassList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_RestrictionClassList data frame is used to enumerate a list of user classes which belong to a given
  * assigned index. The resulting collection is treated as a group by the signal controller when it issues movement data
  * (signal phase information) with the GroupID for this group. This data frame is typically static for long periods of time
  * (months) and conveyed to the user by means of the MAP message.
 */
typedef struct j2735_v2x_msgs__msg__RestrictionClassList
{
  /// RestrictionClassList ::= SEQUENCE (SIZE(1..254)) OF RestrictionClassAssignment
  j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence restriction_class_list;
} j2735_v2x_msgs__msg__RestrictionClassList;

// Struct for a sequence of j2735_v2x_msgs__msg__RestrictionClassList.
typedef struct j2735_v2x_msgs__msg__RestrictionClassList__Sequence
{
  j2735_v2x_msgs__msg__RestrictionClassList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RestrictionClassList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_LIST__STRUCT_H_
