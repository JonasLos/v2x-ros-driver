// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DHour.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_hour.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HOUR_OF_DAY_MIN'.
enum
{
  j2735_v2x_msgs__msg__DHour__HOUR_OF_DAY_MIN = 0
};

/// Constant 'HOUR_OF_DAY_MAX'.
enum
{
  j2735_v2x_msgs__msg__DHour__HOUR_OF_DAY_MAX = 31
};

/// Constant 'TRANSITE_SCHEDULE_ADHERENCE_START'.
enum
{
  j2735_v2x_msgs__msg__DHour__TRANSITE_SCHEDULE_ADHERENCE_START = 24
};

/// Constant 'TRANSITE_SCHEDULE_ADHERENCE_END'.
enum
{
  j2735_v2x_msgs__msg__DHour__TRANSITE_SCHEDULE_ADHERENCE_END = 30
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__DHour__UNAVAILABLE = 31
};

/// Struct defined in msg/DHour in the package j2735_v2x_msgs.
/**
  * DHour.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DHour from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * DHour ::= INTEGER (0..31) -- units of hours
  * Hour of day is 0-23, 31 denotes unvailable and 24-30 are reserved for transit schedule adherence
 */
typedef struct j2735_v2x_msgs__msg__DHour
{
  uint8_t hour;
} j2735_v2x_msgs__msg__DHour;

// Struct for a sequence of j2735_v2x_msgs__msg__DHour.
typedef struct j2735_v2x_msgs__msg__DHour__Sequence
{
  j2735_v2x_msgs__msg__DHour * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DHour__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__STRUCT_H_
