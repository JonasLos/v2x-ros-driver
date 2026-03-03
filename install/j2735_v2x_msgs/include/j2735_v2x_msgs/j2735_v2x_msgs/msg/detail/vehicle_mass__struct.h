// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleMass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_mass.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'MASS_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VehicleMass__MASS_UNAVAILABLE = 255
};

/// Struct defined in msg/VehicleMass in the package j2735_v2x_msgs.
/**
  * VehicleMass.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__VehicleMass
{
  /// VehicleMass ::= INTEGER (0..255)
  ///     -- Values 000 to 080 in steps of 50kg
  ///     -- Values 081 to 200 in steps of 500kg
  ///     -- Values 201 to 253 in steps of 2000kg
  ///     -- The Value 254 shall be used for weights above 170000 kg
  ///     -- The Value 255 shall be used when the value is unknown or unavailable
  ///     -- Encoded such that the values:
  ///     --  81 represents   4500 kg
  ///     -- 181 represents  54500 kg
  ///     -- 253 represents 170000 kg
  uint8_t vehicle_mass;
} j2735_v2x_msgs__msg__VehicleMass;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleMass.
typedef struct j2735_v2x_msgs__msg__VehicleMass__Sequence
{
  j2735_v2x_msgs__msg__VehicleMass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleMass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_
