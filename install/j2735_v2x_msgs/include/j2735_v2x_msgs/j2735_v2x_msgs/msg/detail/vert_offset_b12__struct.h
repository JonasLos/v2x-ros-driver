// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VertOffsetB12.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vert_offset_b12.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MIN'.
enum
{
  j2735_v2x_msgs__msg__VertOffsetB12__MIN = -2047
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__VertOffsetB12__MAX = 2047
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VertOffsetB12__UNAVAILABLE = -2048
};

/// Struct defined in msg/VertOffsetB12 in the package j2735_v2x_msgs.
/**
  * VertOffsetB12.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of VertOffset-B12 from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * VertOffset-B12 ::= INTEGER (-2048..2047)  
  *    -- LSB units of of 10 cm
  *    -- with a range of +- 204.7 meters vertical
  *    -- value  2047 to be used for  2047 or greater
  *    -- value -2047 to be used for -2047 or greater
  *    -- value -2048 to be unavailable
 */
typedef struct j2735_v2x_msgs__msg__VertOffsetB12
{
  int16_t offset;
} j2735_v2x_msgs__msg__VertOffsetB12;

// Struct for a sequence of j2735_v2x_msgs__msg__VertOffsetB12.
typedef struct j2735_v2x_msgs__msg__VertOffsetB12__Sequence
{
  j2735_v2x_msgs__msg__VertOffsetB12 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VertOffsetB12__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B12__STRUCT_H_
