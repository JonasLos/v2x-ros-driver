// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrailerMass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_mass.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TRAILER_MASS_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__TrailerMass__TRAILER_MASS_UNKNOWN = 0
};

/// Constant 'TRAILER_MASS_MAX'.
enum
{
  j2735_v2x_msgs__msg__TrailerMass__TRAILER_MASS_MAX = 255
};

/// Constant 'TRAILER_MASS_MIN'.
enum
{
  j2735_v2x_msgs__msg__TrailerMass__TRAILER_MASS_MIN = 1
};

/// Struct defined in msg/TrailerMass in the package j2735_v2x_msgs.
/**
  * TrailerMass.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__TrailerMass
{
  /// TrailerMass ::= INTEGER (0..255)
  ///    -- object mass with LSB steps of 500 kg (~1100 lbs)
  ///    -- the value zero shall be used for an unknown mass value
  ///    -- the value 255 shall be used any mass larger than 127,500kg
  ///    -- a useful range of 0~127.5 metric tons.
  uint8_t trailer_mass;
} j2735_v2x_msgs__msg__TrailerMass;

// Struct for a sequence of j2735_v2x_msgs__msg__TrailerMass.
typedef struct j2735_v2x_msgs__msg__TrailerMass__Sequence
{
  j2735_v2x_msgs__msg__TrailerMass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrailerMass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__STRUCT_H_
