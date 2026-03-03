// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetLLB18.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_llb18.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__STRUCT_H_

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
  j2735_v2x_msgs__msg__OffsetLLB18__MIN = -131071l
};

/// Constant 'MAX'.
enum
{
  j2735_v2x_msgs__msg__OffsetLLB18__MAX = 131071l
};

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__OffsetLLB18__UNAVAILABLE = -131072l
};

/// Struct defined in msg/OffsetLLB18 in the package j2735_v2x_msgs.
/**
  * OffsetLLB18.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of OffsetLL-B18 from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * OffsetLL-B18 ::= INTEGER (-131072..131071)     
  *    -- A range of +- 0.0131071 degrees
  *    -- The value +131071 shall be used for values >= than +0.0131071 degrees
  *    -- The value -131071 shall be used for values <= than -0.0131071 degrees
  *    -- The value -131072 shall be used unknown
  *    -- In LSB units of 0.1 microdegrees (unless a zoom is employed)
 */
typedef struct j2735_v2x_msgs__msg__OffsetLLB18
{
  int32_t offset;
} j2735_v2x_msgs__msg__OffsetLLB18;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetLLB18.
typedef struct j2735_v2x_msgs__msg__OffsetLLB18__Sequence
{
  j2735_v2x_msgs__msg__OffsetLLB18 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetLLB18__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_LLB18__STRUCT_H_
