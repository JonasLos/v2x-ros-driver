// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DYear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_year.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__STRUCT_H_

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
  j2735_v2x_msgs__msg__DYear__UNAVAILABLE = 0
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__DYear__MAX = 4095
};

/// Struct defined in msg/DYear in the package j2735_v2x_msgs.
/**
  * DYear.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DYear from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DYear ::= INTEGER (0..4095) -- units of years
 */
typedef struct j2735_v2x_msgs__msg__DYear
{
  uint16_t year;
} j2735_v2x_msgs__msg__DYear;

// Struct for a sequence of j2735_v2x_msgs__msg__DYear.
typedef struct j2735_v2x_msgs__msg__DYear__Sequence
{
  j2735_v2x_msgs__msg__DYear * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DYear__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__STRUCT_H_
