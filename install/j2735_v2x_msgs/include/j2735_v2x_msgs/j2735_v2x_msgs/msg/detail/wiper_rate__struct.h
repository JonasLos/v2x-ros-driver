// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_rate.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'WIPER_RATE_MIN'.
enum
{
  j2735_v2x_msgs__msg__WiperRate__WIPER_RATE_MIN = 1
};

/// Constant 'WIPER_RATE_MAX'.
enum
{
  j2735_v2x_msgs__msg__WiperRate__WIPER_RATE_MAX = 127
};

/// Struct defined in msg/WiperRate in the package j2735_v2x_msgs.
/**
  * WiperRate.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__WiperRate
{
  /// WiperRate ::= INTEGER (0..127) -- units of sweeps per minute
  /// The current rate at which wiper sweeps are taking place on the subject vehicle, in units of sweeps per minute. A value
  /// of one is used for any sweep rate with a period greater than 60 seconds.
  uint8_t wiper_rate;
} j2735_v2x_msgs__msg__WiperRate;

// Struct for a sequence of j2735_v2x_msgs__msg__WiperRate.
typedef struct j2735_v2x_msgs__msg__WiperRate__Sequence
{
  j2735_v2x_msgs__msg__WiperRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__WiperRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__STRUCT_H_
