// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/latitude.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Latitude__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__Latitude__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__Latitude__LATITUDE_MIN = -900000000l
};

/// Struct defined in msg/Latitude in the package j2735_v2x_msgs.
/**
  * Latitude.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of Latitude from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * lat Latitude, -- in 1/10th micro degrees
  * Latitude ::= INTEGER (-900000000..900000001)
  *  -- LSB = 1/10 micro degree
  *  -- Providing a range of plus-minus 90 degrees
  *  -- Convert to degree with factor 0.0000001 when field is used
 */
typedef struct j2735_v2x_msgs__msg__Latitude
{
  int32_t latitude;
} j2735_v2x_msgs__msg__Latitude;

// Struct for a sequence of j2735_v2x_msgs__msg__Latitude.
typedef struct j2735_v2x_msgs__msg__Latitude__Sequence
{
  j2735_v2x_msgs__msg__Latitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Latitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
