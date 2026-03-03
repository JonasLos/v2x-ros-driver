// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_class_assignment.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RestrictionClassAssignment in the package j2735_v2x_msgs.
/**
  * RestrictionClassAssignment.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_RestrictionClassAssignment data frame is used to assign (or bind) a single RestrictionClassID data
  * element to a list of all user classes to which it applies. A collection of these bindings is conveyed in the
  * RestrictionClassList data frame in the MAP message to travelers.
  *
  * RestrictionClassAssignment ::= SEQUENCE {
  * id RestrictionClassID,
  * -- the unique value (within an intersection or local region)
  * -- that is assigned to this group of users
  * users RestrictionUserTypeList
  * -- The list of user types/classes
  * -- to which this restriction ID applies
  * }
 */
typedef struct j2735_v2x_msgs__msg__RestrictionClassAssignment
{
  /// RestrictionClassID ::= INTEGER (0..255)
  uint8_t id;
} j2735_v2x_msgs__msg__RestrictionClassAssignment;

// Struct for a sequence of j2735_v2x_msgs__msg__RestrictionClassAssignment.
typedef struct j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence
{
  j2735_v2x_msgs__msg__RestrictionClassAssignment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RestrictionClassAssignment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_H_
