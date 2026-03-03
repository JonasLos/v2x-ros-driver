// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescriptionList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_unit_description_list.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MIN_SIZE'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__MIN_SIZE = 1
};

/// Constant 'MAX_SIZE'.
enum
{
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList__MAX_SIZE = 8
};

// Include directives for member types
// Member 'trailer_unit_descriptions'
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.h"

/// Struct defined in msg/TrailerUnitDescriptionList in the package j2735_v2x_msgs.
/**
  * TrailerUnitDescriptionList.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__TrailerUnitDescriptionList
{
  /// TrailerUnitDescriptionList ::= SEQUENCE (SIZE(1..8)) OF TrailerUnitDescription
  j2735_v2x_msgs__msg__TrailerUnitDescription__Sequence trailer_unit_descriptions;
} j2735_v2x_msgs__msg__TrailerUnitDescriptionList;

// Struct for a sequence of j2735_v2x_msgs__msg__TrailerUnitDescriptionList.
typedef struct j2735_v2x_msgs__msg__TrailerUnitDescriptionList__Sequence
{
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrailerUnitDescriptionList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__STRUCT_H_
