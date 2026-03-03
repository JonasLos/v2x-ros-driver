// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/elevation.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ELEVATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Elevation__ELEVATION_UNAVAILABLE = -4096l
};

/// Constant 'ELEVATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__Elevation__ELEVATION_MAX = 61439l
};

/// Constant 'ELEVATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__Elevation__ELEVATION_MIN = -4095l
};

/// Struct defined in msg/Elevation in the package j2735_v2x_msgs.
/**
  * Elevation.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of Elevation from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * elevation Elevation, -- in 10 cm units
  * Elevation ::= INTEGER (-4096..61439)
  *  -- In units of 10 cm steps above or below the reference ellipsoid
  *  -- Providing a range of -409.5 to + 6143.9 meters
  *  -- The value -4096 shall be used when Unknown is to be sent
  *  -- Convert to meter with factor 0.1 when field is used
 */
typedef struct j2735_v2x_msgs__msg__Elevation
{
  int32_t elevation;
} j2735_v2x_msgs__msg__Elevation;

// Struct for a sequence of j2735_v2x_msgs__msg__Elevation.
typedef struct j2735_v2x_msgs__msg__Elevation__Sequence
{
  j2735_v2x_msgs__msg__Elevation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Elevation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION__STRUCT_H_
