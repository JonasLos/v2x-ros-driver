// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetB12.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_b12.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B12__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B12__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OFFSET_MIN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB12__OFFSET_MIN = -2047
};

/// Constant 'OFFSET_MAX'.
enum
{
  j2735_v2x_msgs__msg__OffsetB12__OFFSET_MAX = 2047
};

/// Constant 'OFFSET_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB12__OFFSET_UNKNOWN = -2048
};

/// Struct defined in msg/OffsetB12 in the package j2735_v2x_msgs.
/**
  * OffsetB12.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__OffsetB12
{
  /// Offset-B12 ::= INTEGER (-2048..2047)
  ///    -- a range of +- 20.47 meters
  /// A 12-bit delta offset in X, Y, or Z direction from some known point. For non-vehicle centric coordinate frames of
  /// reference, non-vehicle centric coordinate frames of reference, offset is positive to the east (X) and to the north (Y) directions.
  /// The most negative value shall be used to indicate an unknown value
  int16_t offset;
} j2735_v2x_msgs__msg__OffsetB12;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetB12.
typedef struct j2735_v2x_msgs__msg__OffsetB12__Sequence
{
  j2735_v2x_msgs__msg__OffsetB12 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetB12__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B12__STRUCT_H_
