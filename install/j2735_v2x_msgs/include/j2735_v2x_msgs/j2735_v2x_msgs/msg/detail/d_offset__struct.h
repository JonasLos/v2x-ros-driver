// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DOffset.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_offset.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_OFFSET__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_OFFSET__STRUCT_H_

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
  j2735_v2x_msgs__msg__DOffset__MIN = -840
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__DOffset__MAX = 840
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__DOffset__UNAVAILABLE = 0
};

/// Struct defined in msg/DOffset in the package j2735_v2x_msgs.
/**
  * DOffset.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DOffset from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DOffset ::= INTEGER (-840..840) -- units of minutes from UTC time
 */
typedef struct j2735_v2x_msgs__msg__DOffset
{
  int16_t offset_minute;
} j2735_v2x_msgs__msg__DOffset;

// Struct for a sequence of j2735_v2x_msgs__msg__DOffset.
typedef struct j2735_v2x_msgs__msg__DOffset__Sequence
{
  j2735_v2x_msgs__msg__DOffset * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DOffset__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_OFFSET__STRUCT_H_
