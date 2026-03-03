// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetB11.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_b11.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'OFFSET_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB11__OFFSET_UNKNOWN = -1024
};

/// Constant 'OFFSET_MIN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB11__OFFSET_MIN = -1023
};

/// Constant 'OFFSET_MAX'.
enum
{
  j2735_v2x_msgs__msg__OffsetB11__OFFSET_MAX = 1023
};

/// Struct defined in msg/OffsetB11 in the package j2735_v2x_msgs.
/**
  * OffsetB11.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__OffsetB11
{
  /// Offset-B11 ::= INTEGER (-1024..1023)
  ///    -- a range of +- 10.23 meters
  /// An 11-bit delta offset in X or Y direction from some known point. For non-vehicle centric coordinate frames of reference,
  /// offset is positive to the east (X) and to the north (Y) directions. The most negative value shall be used to indicate an unknown value.
  int16_t offset;
} j2735_v2x_msgs__msg__OffsetB11;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetB11.
typedef struct j2735_v2x_msgs__msg__OffsetB11__Sequence
{
  j2735_v2x_msgs__msg__OffsetB11 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetB11__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B11__STRUCT_H_
