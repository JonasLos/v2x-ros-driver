// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RestrictionUserTypeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_user_type_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'restriction_user_type_list'
#include "j2735_v2x_msgs/msg/detail/restriction_user_type__struct.h"

/// Struct defined in msg/RestrictionUserTypeList in the package j2735_v2x_msgs.
/**
  * RestrictionUserTypeList.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The DF_RestrictionUserTypeList data frame consists of a list of RestrictionUserType entries.
  *
  * RestrictionUserTypeList ::= SEQUENCE (SIZE(1..16)) OF RestrictionUserType
 */
typedef struct j2735_v2x_msgs__msg__RestrictionUserTypeList
{
  j2735_v2x_msgs__msg__RestrictionUserType__Sequence restriction_user_type_list;
} j2735_v2x_msgs__msg__RestrictionUserTypeList;

// Struct for a sequence of j2735_v2x_msgs__msg__RestrictionUserTypeList.
typedef struct j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence
{
  j2735_v2x_msgs__msg__RestrictionUserTypeList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__STRUCT_H_
