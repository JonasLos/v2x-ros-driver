// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/positional_accuracy.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ACCURACY_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_UNAVAILABLE = 255
};

/// Constant 'ACCURACY_MAX'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_MAX = 254
};

/// Constant 'ACCURACY_MIN'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_MIN = 0
};

/// Constant 'ACCURACY_ORIENTATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_UNAVAILABLE = 65535
};

/// Constant 'ACCURACY_ORIENTATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_MAX = 65534
};

/// Constant 'ACCURACY_ORIENTATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__PositionalAccuracy__ACCURACY_ORIENTATION_MIN = 0
};

/// Struct defined in msg/PositionalAccuracy in the package j2735_v2x_msgs.
/**
  * PositionalAccuracy.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * Used to model the accuracy of the positional determination with respect to each given axis.
 */
typedef struct j2735_v2x_msgs__msg__PositionalAccuracy
{
  /// PositionalAccuracy ::= SEQUENCE {
  ///    -- NMEA-183 values expressed in strict ASN form
  ///    semiMajor     SemiMajorAxisAccuracy,
  ///    semiMinor     SemiMinorAxisAccuracy,
  ///    orientation   SemiMajorAxisOrientation
  ///    }
  /// SemiMajorAxisAccuracy ::= INTEGER (0..255)
  ///    -- semi-major/semi-minor axis accuracy at one standard dev
  ///    -- range 0-12.7 meter, LSB = .05m
  ///    -- 254 = any value equal or greater than 12.70 meter
  ///    -- 255 = unavailable semi-major axis value
  ///    -- Convert to meter with factor 0.05 when this field is used
  uint8_t semi_major;
  uint8_t semi_minor;
  /// SemiMajorAxisOrientation ::= INTEGER (0..65535)
  ///    -- orientation of semi-major axis
  ///    -- relative to true north (0~359.9945078786 degrees)
  ///    -- LSB units of 360/65535 deg  = 0.0054932479
  ///    -- a value of 0 shall be 0 degrees
  ///    -- a value of 1 shall be 0.0054932479 degrees
  ///    -- a value of 65534 shall be 359.9945078786 deg
  ///    -- a value of 65535 shall be used for orientation unavailable
  ///    -- Convert to degree with factor 0.0054932479 when this field is used
  uint16_t orientation;
} j2735_v2x_msgs__msg__PositionalAccuracy;

// Struct for a sequence of j2735_v2x_msgs__msg__PositionalAccuracy.
typedef struct j2735_v2x_msgs__msg__PositionalAccuracy__Sequence
{
  j2735_v2x_msgs__msg__PositionalAccuracy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PositionalAccuracy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
