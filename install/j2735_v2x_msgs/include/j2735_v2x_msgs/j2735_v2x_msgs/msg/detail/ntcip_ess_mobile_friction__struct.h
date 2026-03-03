// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NTCIPEssMobileFriction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_mobile_friction.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ESS_MOBILE_FRICTION_MIN'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction__ESS_MOBILE_FRICTION_MIN = 0
};

/// Constant 'ESS_MOBILE_FRICTION_MAX'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction__ESS_MOBILE_FRICTION_MAX = 100
};

/// Constant 'ERROR_OR_MISSING_VALUE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction__ERROR_OR_MISSING_VALUE = 101
};

/// Struct defined in msg/NTCIPEssMobileFriction in the package j2735_v2x_msgs.
/**
  * NTCIPEssMobileFriction.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__NTCIPEssMobileFriction
{
  /// EssMobileFriction ::= INTEGER (0..101)
  /// Indicates measured coefficient of friction in percent. The value 101 shall indicate an error condition or missing value.
  uint8_t ess_mobile_friction;
} j2735_v2x_msgs__msg__NTCIPEssMobileFriction;

// Struct for a sequence of j2735_v2x_msgs__msg__NTCIPEssMobileFriction.
typedef struct j2735_v2x_msgs__msg__NTCIPEssMobileFriction__Sequence
{
  j2735_v2x_msgs__msg__NTCIPEssMobileFriction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NTCIPEssMobileFriction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_MOBILE_FRICTION__STRUCT_H_
