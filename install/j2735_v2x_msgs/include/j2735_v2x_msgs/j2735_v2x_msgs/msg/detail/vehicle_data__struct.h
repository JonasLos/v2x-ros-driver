// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_data.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_HEIGHT'.
enum
{
  j2735_v2x_msgs__msg__VehicleData__HAS_HEIGHT = 1
};

/// Constant 'HAS_BUMPERS'.
enum
{
  j2735_v2x_msgs__msg__VehicleData__HAS_BUMPERS = 2
};

/// Constant 'HAS_MASS'.
enum
{
  j2735_v2x_msgs__msg__VehicleData__HAS_MASS = 4
};

/// Constant 'HAS_TRAILER_WEIGHT'.
enum
{
  j2735_v2x_msgs__msg__VehicleData__HAS_TRAILER_WEIGHT = 8
};

// Include directives for member types
// Member 'height'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__struct.h"
// Member 'bumpers'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.h"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__struct.h"
// Member 'trailer_weight'
#include "j2735_v2x_msgs/msg/detail/trailer_weight__struct.h"

/// Struct defined in msg/VehicleData in the package j2735_v2x_msgs.
/**
  * VehicleData.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__VehicleData
{
  /// VehicleData ::= SEQUENCE {
  ///    -- Values for width and length are sent in BSM part I
  ///    height        VehicleHeight   OPTIONAL,
  ///    bumpers       BumperHeights   OPTIONAL,
  ///    mass          VehicleMass     OPTIONAL,
  ///    trailerWeight TrailerWeight   OPTIONAL,
  ///    ...
  ///    }
  /// A BIT STRING defining the presence of optional fields.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_PATH_HISTORY) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_PATH_HISTORY
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__VehicleHeight height;
  j2735_v2x_msgs__msg__BumperHeights bumpers;
  j2735_v2x_msgs__msg__VehicleMass mass;
  j2735_v2x_msgs__msg__TrailerWeight trailer_weight;
} j2735_v2x_msgs__msg__VehicleData;

// Struct for a sequence of j2735_v2x_msgs__msg__VehicleData.
typedef struct j2735_v2x_msgs__msg__VehicleData__Sequence
{
  j2735_v2x_msgs__msg__VehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_H_
