// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position3_d.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Position3D__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__Position3D__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__Position3D__LATITUDE_MIN = -900000000l
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Position3D__LONGITUDE_UNAVAILABLE = 1800000001l
};

/// Constant 'LONGITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__Position3D__LONGITUDE_MAX = 1800000000l
};

/// Constant 'LONGITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__Position3D__LONGITUDE_MIN = -1799999999l
};

/// Constant 'ELEVATION_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__Position3D__ELEVATION_UNAVAILABLE = -4096l
};

/// Constant 'ELEVATION_MAX'.
enum
{
  j2735_v2x_msgs__msg__Position3D__ELEVATION_MAX = 61439l
};

/// Constant 'ELEVATION_MIN'.
enum
{
  j2735_v2x_msgs__msg__Position3D__ELEVATION_MIN = -4095l
};

/// Struct defined in msg/Position3D in the package j2735_v2x_msgs.
/**
  * Position3D.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  * Provides a precise location in the WGS-84 coordinate system, from which short offsets may be used
  * to create additional data using a flat earth projection centered on this location.
 */
typedef struct j2735_v2x_msgs__msg__Position3D
{
  ///  Position3D ::= SEQUENCE {
  /// Latitude ::= INTEGER (-900000000..900000001)
  ///   -- LSB = 1/10 micro degree
  ///   -- Providing a range of plus-minus 90 degrees
  ///   -- Convert to degree with factor 0.0000001 when field is used
  int32_t latitude;
  /// Longitude ::= INTEGER (-1799999999..1800000001)
  ///   -- LSB = 1/10 micro degree
  ///   -- Providing a range of plus-minus 180 degrees
  ///   -- Convert to degree with factor 0.0000001 when field is used
  int32_t longitude;
  /// Elevation ::= INTEGER (-4096..61439)
  ///   -- In units of 10 cm steps above or below the reference ellipsoid
  ///   -- Providing a range of -409.5 to + 6143.9 meters
  ///   -- The value -4096 shall be used when Unknown is to be sent
  ///   -- Convert to meter with factor 0.1 when field is used
  int32_t elevation;
  bool elevation_exists;
} j2735_v2x_msgs__msg__Position3D;

// Struct for a sequence of j2735_v2x_msgs__msg__Position3D.
typedef struct j2735_v2x_msgs__msg__Position3D__Sequence
{
  j2735_v2x_msgs__msg__Position3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__Position3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__STRUCT_H_
