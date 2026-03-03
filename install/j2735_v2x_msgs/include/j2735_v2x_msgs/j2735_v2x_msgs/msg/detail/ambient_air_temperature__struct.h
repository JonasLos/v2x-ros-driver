// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AmbientAirTemperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ambient_air_temperature.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TERMPERATURE_MIN'.
enum
{
  j2735_v2x_msgs__msg__AmbientAirTemperature__TERMPERATURE_MIN = 0
};

/// Constant 'TEMPERATURE_MAX'.
enum
{
  j2735_v2x_msgs__msg__AmbientAirTemperature__TEMPERATURE_MAX = 190
};

/// Constant 'TEMPERATURE_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__AmbientAirTemperature__TEMPERATURE_UNKNOWN = 191
};

/// Struct defined in msg/AmbientAirTemperature in the package j2735_v2x_msgs.
/**
  * AmbientAirTemperature.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__AmbientAirTemperature
{
  /// AmbientAirTemperature ::= INTEGER (0..191) -- in deg C with a -40 offset
  ///     -- The value 191 shall indicate an unknown value
  uint8_t temperature;
} j2735_v2x_msgs__msg__AmbientAirTemperature;

// Struct for a sequence of j2735_v2x_msgs__msg__AmbientAirTemperature.
typedef struct j2735_v2x_msgs__msg__AmbientAirTemperature__Sequence
{
  j2735_v2x_msgs__msg__AmbientAirTemperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AmbientAirTemperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_TEMPERATURE__STRUCT_H_
