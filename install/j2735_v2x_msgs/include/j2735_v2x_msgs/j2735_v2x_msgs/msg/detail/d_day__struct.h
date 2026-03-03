// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DDay.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_day.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_DAY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_DAY__STRUCT_H_

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
  j2735_v2x_msgs__msg__DDay__UNAVAILABLE = 0
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__DDay__MAX = 31
};

/// Struct defined in msg/DDay in the package j2735_v2x_msgs.
/**
  * DDay.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DDay from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DDay ::= INTEGER (0..31)  -- units of days
 */
typedef struct j2735_v2x_msgs__msg__DDay
{
  uint8_t day;
} j2735_v2x_msgs__msg__DDay;

// Struct for a sequence of j2735_v2x_msgs__msg__DDay.
typedef struct j2735_v2x_msgs__msg__DDay__Sequence
{
  j2735_v2x_msgs__msg__DDay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DDay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_DAY__STRUCT_H_
