// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/MultiVehicleResponse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/multi_vehicle_response.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
/**
  * enumeration values for multi_vehicle_response:
 */
enum
{
  j2735_v2x_msgs__msg__MultiVehicleResponse__UNAVAILABLE = 0
};

/// Constant 'SINGLE_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__MultiVehicleResponse__SINGLE_VEHICLE = 1
};

/// Constant 'MULTI_VEHICLE'.
enum
{
  j2735_v2x_msgs__msg__MultiVehicleResponse__MULTI_VEHICLE = 2
};

/// Constant 'RESERVED'.
enum
{
  j2735_v2x_msgs__msg__MultiVehicleResponse__RESERVED = 3
};

/// Struct defined in msg/MultiVehicleResponse in the package j2735_v2x_msgs.
/**
  * MultiVehicleResponse.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__MultiVehicleResponse
{
  /// MultiVehicleResponse ::= ENUMERATED {
  ///      unavailable   (0), -- Not Equipped or unavailable
  ///      singleVehicle (1),
  ///      multiVehicle  (2),
  ///      reserved      (3)  -- for future use
  ///      }
  uint8_t multi_vehicle_response;
} j2735_v2x_msgs__msg__MultiVehicleResponse;

// Struct for a sequence of j2735_v2x_msgs__msg__MultiVehicleResponse.
typedef struct j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence
{
  j2735_v2x_msgs__msg__MultiVehicleResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__MultiVehicleResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MULTI_VEHICLE_RESPONSE__STRUCT_H_
