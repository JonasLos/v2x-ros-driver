// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_precip_rate.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ERROR_OR_MISSING_VALUE'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipRate__ERROR_OR_MISSING_VALUE = 65535
};

/// Struct defined in msg/NTCIPEssPrecipRate in the package j2735_v2x_msgs.
/**
  * NTCIPEssPrecipRate.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipRate
{
  /// EssPrecipRate ::= INTEGER (0..65535)
  /// The rainfall, or water equivalent of snow, rate in tenths of grams per square meter per second. For rain, this is
  /// approximately to 0.36 mm/h. A value of 65535 shall indicate an error condition or missing value.
  uint16_t precip_rate;
} j2735_v2x_msgs__msg__NTCIPEssPrecipRate;

// Struct for a sequence of j2735_v2x_msgs__msg__NTCIPEssPrecipRate.
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipRate__Sequence
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NTCIPEssPrecipRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_RATE__STRUCT_H_
