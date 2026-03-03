// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ITIScodes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/iti_scodes.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ITI_SCODES__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ITI_SCODES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ITIScodes in the package j2735_v2x_msgs.
/**
  * ITIScodes.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ITIScodes
{
  /// ITIScodes ::= INTEGER (0.. 65535)
  /// -- The defined list of ITIS codes is too long to list here
  /// -- Many smaller lists use a sub-set of these codes as defined elements
  /// -- Also enumerated values expressed as text constant are very common,
  /// -- and in many deployments the list codes are used as a shorthand for
  /// -- this text. Also the XML expressions commonly use a union of the
  /// -- code values and the textual expressions.
  /// -- Consult SAE J2540 for further details.
  uint16_t code;
} j2735_v2x_msgs__msg__ITIScodes;

// Struct for a sequence of j2735_v2x_msgs__msg__ITIScodes.
typedef struct j2735_v2x_msgs__msg__ITIScodes__Sequence
{
  j2735_v2x_msgs__msg__ITIScodes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ITIScodes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ITI_SCODES__STRUCT_H_
