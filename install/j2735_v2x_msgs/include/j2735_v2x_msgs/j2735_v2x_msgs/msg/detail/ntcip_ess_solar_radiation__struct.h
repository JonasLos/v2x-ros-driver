// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NTCIPEssSolarRadiation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_solar_radiation.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MISSING_VALUE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__MISSING_VALUE = 65535
};

/// Struct defined in msg/NTCIPEssSolarRadiation in the package j2735_v2x_msgs.
/**
  * NTCIPEssSolarRadiation.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__NTCIPEssSolarRadiation
{
  /// EssSolarRadiation ::= INTEGER (0..65535)
  /// The direct solar radiation integrated over the 24 hours preceding the observation in Joules per square meter. A value
  /// of 65535 shall indicate a missing value.
  uint16_t ess_solar_radiation;
} j2735_v2x_msgs__msg__NTCIPEssSolarRadiation;

// Struct for a sequence of j2735_v2x_msgs__msg__NTCIPEssSolarRadiation.
typedef struct j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__Sequence
{
  j2735_v2x_msgs__msg__NTCIPEssSolarRadiation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NTCIPEssSolarRadiation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_SOLAR_RADIATION__STRUCT_H_
