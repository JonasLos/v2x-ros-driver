// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DMonth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_month.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_MONTH__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_MONTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__DMonth__UNAVAILABLE = 0
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__DMonth__MAX = 12
};

/// Struct defined in msg/DMonth in the package j2735_v2x_msgs.
/**
  * DMonth.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DMonth from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DMonth ::= INTEGER (0..12) -- units of months
 */
typedef struct j2735_v2x_msgs__msg__DMonth
{
  uint8_t month;
} j2735_v2x_msgs__msg__DMonth;

// Struct for a sequence of j2735_v2x_msgs__msg__DMonth.
typedef struct j2735_v2x_msgs__msg__DMonth__Sequence
{
  j2735_v2x_msgs__msg__DMonth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DMonth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_MONTH__STRUCT_H_
