// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_date_time.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNSET'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__UNSET = 0
};

/// Constant 'YEAR'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__YEAR = 1
};

/// Constant 'MONTH'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__MONTH = 2
};

/// Constant 'DAY'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__DAY = 4
};

/// Constant 'HOUR'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__HOUR = 8
};

/// Constant 'MINUTE'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__MINUTE = 16
};

/// Constant 'SECOND'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__SECOND = 32
};

/// Constant 'OFFSET'.
enum
{
  j2735_v2x_msgs__msg__DDateTime__OFFSET = 64
};

// Include directives for member types
// Member 'year'
#include "j2735_v2x_msgs/msg/detail/d_year__struct.h"
// Member 'month'
#include "j2735_v2x_msgs/msg/detail/d_month__struct.h"
// Member 'day'
#include "j2735_v2x_msgs/msg/detail/d_day__struct.h"
// Member 'hour'
#include "j2735_v2x_msgs/msg/detail/d_hour__struct.h"
// Member 'minute'
#include "j2735_v2x_msgs/msg/detail/d_minute__struct.h"
// Member 'second'
#include "j2735_v2x_msgs/msg/detail/d_second__struct.h"
// Member 'offset'
#include "j2735_v2x_msgs/msg/detail/d_offset__struct.h"

/// Struct defined in msg/DDateTime in the package j2735_v2x_msgs.
/**
  * DDateTime.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of DDateTime from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
 */
typedef struct j2735_v2x_msgs__msg__DDateTime
{
  /// DDateTime ::= SEQUENCE {
  ///    year    DYear    OPTIONAL,
  ///    month   DMonth   OPTIONAL,
  ///    day     DDay     OPTIONAL,
  ///    hour    DHour    OPTIONAL,
  ///    minute  DMinute  OPTIONAL,
  ///    second  DSecond  OPTIONAL,
  ///    offset  DOffset  OPTIONAL -- time zone
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & YEAR) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | YEAR
  uint8_t presence_vector;
  j2735_v2x_msgs__msg__DYear year;
  j2735_v2x_msgs__msg__DMonth month;
  j2735_v2x_msgs__msg__DDay day;
  j2735_v2x_msgs__msg__DHour hour;
  j2735_v2x_msgs__msg__DMinute minute;
  j2735_v2x_msgs__msg__DSecond second;
  j2735_v2x_msgs__msg__DOffset offset;
} j2735_v2x_msgs__msg__DDateTime;

// Struct for a sequence of j2735_v2x_msgs__msg__DDateTime.
typedef struct j2735_v2x_msgs__msg__DDateTime__Sequence
{
  j2735_v2x_msgs__msg__DDateTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__DDateTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_H_
