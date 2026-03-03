// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/HeadingStamped.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/heading_stamped.h"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/HeadingStamped in the package carma_driver_msgs.
/**
  * HeadingStamped.msg
  * Orientation of the vehicle in global frame
 */
typedef struct carma_driver_msgs__msg__HeadingStamped
{
  std_msgs__msg__Header header;
  /// Heading of the vehicle east of north
  float heading;
} carma_driver_msgs__msg__HeadingStamped;

// Struct for a sequence of carma_driver_msgs__msg__HeadingStamped.
typedef struct carma_driver_msgs__msg__HeadingStamped__Sequence
{
  carma_driver_msgs__msg__HeadingStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__HeadingStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__HEADING_STAMPED__STRUCT_H_
