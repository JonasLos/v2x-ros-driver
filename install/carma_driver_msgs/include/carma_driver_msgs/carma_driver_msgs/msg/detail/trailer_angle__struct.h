// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/TrailerAngle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/trailer_angle.h"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__STRUCT_H_

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

/// Struct defined in msg/TrailerAngle in the package carma_driver_msgs.
/**
  * Trailer Angle Message
  *
  * This message gives the truck trailer angle in radians
  *
  * @author Aswath Suresh
  * @version 0.1
 */
typedef struct carma_driver_msgs__msg__TrailerAngle
{
  /// timestamp in the header is the time the sensor returned the angle reading
  std_msgs__msg__Header header;
  /// trailer angle in raidans. Note if the sensor 1 is mounted on the left and sensor 2 is mounted on the right. Then the left turn will produce negative radians whereas the right turn will produce positive radians. If sensor placement are swapped, the signs become opposite to previous setup.
  double angle;
} carma_driver_msgs__msg__TrailerAngle;

// Struct for a sequence of carma_driver_msgs__msg__TrailerAngle.
typedef struct carma_driver_msgs__msg__TrailerAngle__Sequence
{
  carma_driver_msgs__msg__TrailerAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__TrailerAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__STRUCT_H_
