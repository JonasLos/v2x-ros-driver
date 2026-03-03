// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipYesNo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_precip_yes_no.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'PRECIP'.
/**
  * Enumeration values for precip_yes_no
 */
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__PRECIP = 1
};

/// Constant 'NO_PRECIP'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__NO_PRECIP = 2
};

/// Constant 'ERROR'.
enum
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__ERROR = 3
};

/// Struct defined in msg/NTCIPEssPrecipYesNo in the package j2735_v2x_msgs.
/**
  * NTCIPEssPrecipYesNo.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo
{
  /// EssPrecipYesNo ::= ENUMERATED {precip (1), noPrecip (2), error (3)}
  uint8_t precip_yes_no;
} j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo;

// Struct for a sequence of j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo.
typedef struct j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__Sequence
{
  j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__STRUCT_H_
