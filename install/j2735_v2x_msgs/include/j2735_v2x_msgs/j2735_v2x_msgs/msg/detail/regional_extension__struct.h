// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RegionalExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/regional_extension.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RegionalExtension in the package j2735_v2x_msgs.
/**
  * RegionalExtension.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The formal definition used by each regional extension point follows the style of a unique indexing
  * integer and a type definition bound into a set.
 */
typedef struct j2735_v2x_msgs__msg__RegionalExtension
{
  uint8_t structure_needs_at_least_one_member;
} j2735_v2x_msgs__msg__RegionalExtension;

// Struct for a sequence of j2735_v2x_msgs__msg__RegionalExtension.
typedef struct j2735_v2x_msgs__msg__RegionalExtension__Sequence
{
  j2735_v2x_msgs__msg__RegionalExtension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RegionalExtension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REGIONAL_EXTENSION__STRUCT_H_
