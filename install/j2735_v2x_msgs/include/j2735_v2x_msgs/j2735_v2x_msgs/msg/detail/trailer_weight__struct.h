// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrailerWeight.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_weight.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TRAILER_WEIGHT_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrailerWeight__TRAILER_WEIGHT_MAX = 64255
};

/// Struct defined in msg/TrailerWeight in the package j2735_v2x_msgs.
/**
  * TrailerWeight.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__TrailerWeight
{
  /// TrailerWeight ::= INTEGER (0..64255)
  /// A data element re-used from the SAE J1939 standard and encoded as: 2 kg/bit, 0 degree offset, Range: 0 to
  /// +128510 kg. See SPN 180, PGN reference 65258.
  uint16_t trailer_weight;
} j2735_v2x_msgs__msg__TrailerWeight;

// Struct for a sequence of j2735_v2x_msgs__msg__TrailerWeight.
typedef struct j2735_v2x_msgs__msg__TrailerWeight__Sequence
{
  j2735_v2x_msgs__msg__TrailerWeight * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrailerWeight__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_WEIGHT__STRUCT_H_
