// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MsgCount.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/msg_count.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MSG_COUNT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MSG_COUNT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MSG_COUNT_MAX'.
enum
{
  j2735_v2x_msgs__msg__MsgCount__MSG_COUNT_MAX = 127
};

/// Struct defined in msg/MsgCount in the package j2735_v2x_msgs.
/**
  * MsgCount.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of MsgCount from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * MsgCount ::= INTEGER (0..127)
 */
typedef struct j2735_v2x_msgs__msg__MsgCount
{
  uint8_t msg_cnt;
} j2735_v2x_msgs__msg__MsgCount;

// Struct for a sequence of j2735_v2x_msgs__msg__MsgCount.
typedef struct j2735_v2x_msgs__msg__MsgCount__Sequence
{
  j2735_v2x_msgs__msg__MsgCount * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MsgCount__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MSG_COUNT__STRUCT_H_
