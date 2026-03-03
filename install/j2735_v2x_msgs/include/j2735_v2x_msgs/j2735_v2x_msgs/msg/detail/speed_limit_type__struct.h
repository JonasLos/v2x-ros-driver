// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SpeedLimitType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_limit_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__UNKNOWN = 0
};

/// Constant 'MAXSPEEDINSCHOOLZONE'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__MAXSPEEDINSCHOOLZONE = 1
};

/// Constant 'MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT = 2
};

/// Constant 'MAXSPEEDINCONSTRUCTIONZONE'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__MAXSPEEDINCONSTRUCTIONZONE = 3
};

/// Constant 'VEHICLEMINSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__VEHICLEMINSPEED = 4
};

/// Constant 'VEHICLEMAXSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__VEHICLEMAXSPEED = 5
};

/// Constant 'VEHICLENIGHTMAXSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__VEHICLENIGHTMAXSPEED = 6
};

/// Constant 'TRUCKMINSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__TRUCKMINSPEED = 7
};

/// Constant 'TRUCKMAXSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__TRUCKMAXSPEED = 8
};

/// Constant 'TRUCKNIGHTMAXSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__TRUCKNIGHTMAXSPEED = 9
};

/// Constant 'VEHICLESWITHTRAILERSMINSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__VEHICLESWITHTRAILERSMINSPEED = 10
};

/// Constant 'VEHICLESWITHTRAILERSMAXSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__VEHICLESWITHTRAILERSMAXSPEED = 11
};

/// Constant 'VEHICLESWITHTRAILERSNIGHTMAXSPEED'.
enum
{
  j2735_v2x_msgs__msg__SpeedLimitType__VEHICLESWITHTRAILERSNIGHTMAXSPEED = 12
};

/// Struct defined in msg/SpeedLimitType in the package j2735_v2x_msgs.
/**
  * SpeedLimitType.msg
  *
  * The SpeedLimitType data element relates the type of speed limit to which a given speed refers.
  *
  * SpeedLimitType ::= ENUMERATED {
  *
  * unknown, -- Speed limit type not available
  * maxSpeedInSchoolZone, -- Only sent when the limit is active
  * maxSpeedInSchoolZoneWhenChildrenArePresent, -- Sent at any time
  * maxSpeedInConstructionZone, -- Used for work zones, incident zones, etc. where a reduced speed is present
  *
  * vehicleMinSpeed,
  * vehicleMaxSpeed, -- Regulatory speed limit for general traffic
  * vehicleNightMaxSpeed,
  *
  * truckMinSpeed,
  * truckMaxSpeed,
  * truckNightMaxSpeed,
  *
  * vehiclesWithTrailersMinSpeed,
  * vehiclesWithTrailersMaxSpeed,
  * vehiclesWithTrailersNightMaxSpeed,
  * ...
  * }
 */
typedef struct j2735_v2x_msgs__msg__SpeedLimitType
{
  uint8_t speed_limit_type;
} j2735_v2x_msgs__msg__SpeedLimitType;

// Struct for a sequence of j2735_v2x_msgs__msg__SpeedLimitType.
typedef struct j2735_v2x_msgs__msg__SpeedLimitType__Sequence
{
  j2735_v2x_msgs__msg__SpeedLimitType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SpeedLimitType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_H_
