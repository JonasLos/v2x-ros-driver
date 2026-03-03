// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/acceleration_set4_way.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ACCELERATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_UNAVAILABLE = 2001
};

/// Constant 'ACCELERATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_MAX = 2000
};

/// Constant 'ACCELERATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_MIN = -2000
};

/// Constant 'ACCELERATION_VERTICAL_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_UNAVAILABLE = -127
};

/// Constant 'ACCELERATION_VERTICAL_MAX'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_MAX = 127
};

/// Constant 'ACCELERATION_VERTICAL_MIN'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__ACCELERATION_VERTICAL_MIN = -126
};

/// Constant 'YAWRATE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_UNAVAILABLE = 0
};

/// Constant 'YAWRATE_MAX'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_MAX = 32767
};

/// Constant 'YAWRATE_MIN'.
enum
{
  j2735_v2x_msgs__msg__AccelerationSet4Way__YAWRATE_MIN = -32767
};

/// Struct defined in msg/AccelerationSet4Way in the package j2735_v2x_msgs.
/**
  * AccelerationSet4Way.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Set of acceleration values in 3 orthogonal directions of the vehicle and with yaw rotation rates expressed as a structure. 
  * The positive longitudinal axis is to the front of the vehicle. 
  * The positive lateral axis is to the right side of the vehicle (facing forward)
  * Positive yaw is to the right (clockwise)
  * The positive vertical "z" axis is downward with the zero point at the bottom of the vehicle's tires. 
 */
typedef struct j2735_v2x_msgs__msg__AccelerationSet4Way
{
  /// AccelerationSet4Way ::= SEQUENCE {
  ///    long Acceleration,          -- Along the Vehicle Longitudinal axis
  ///    lat  Acceleration,          -- Along the Vehicle Lateral axis
  ///    vert VerticalAcceleration,  -- Along the Vehicle Vertical axis
  ///    yaw  YawRate
  /// }
  /// Acceleration ::= INTEGER (-2000..2001)
  ///    -- LSB units are 0.01 m/s^2
  ///    -- the value 2000 shall be used for values greater than 2000
  ///    -- the value -2000 shall be used for values less than -2000
  ///    -- a value of 2001 shall be used for Unavailable
  ///    -- Convert to m/s^2 with factor 0.01 when this field is used
  int16_t longitudinal;
  int16_t lateral;
  /// VerticalAcceleration ::= INTEGER (-127..127)
  ///    -- LSB units of 0.02 G steps over -2.52 to +2.54 G
  ///    -- The value +127 shall be used for ranges >= 2.54 G
  ///    -- The value -126 shall be used for ranges <= 2.52 G
  ///    -- The value -127 shall be used for unavailable
  ///    -- Convert to m/s^2 with factor 0.196 when this field is used
  int8_t vert;
  /// YawRate ::= INTEGER (-32767..32767)
  ///    -- LSB units of 0.01 degrees per second (signed)
  ///    -- Convert to degree with factor 0.01 when this field is used
  int16_t yaw_rate;
} j2735_v2x_msgs__msg__AccelerationSet4Way;

// Struct for a sequence of j2735_v2x_msgs__msg__AccelerationSet4Way.
typedef struct j2735_v2x_msgs__msg__AccelerationSet4Way__Sequence
{
  j2735_v2x_msgs__msg__AccelerationSet4Way * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AccelerationSet4Way__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__STRUCT_H_
