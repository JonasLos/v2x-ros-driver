// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_l_lm_d64b.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LONGITUDE_UNAVAILABLE = 1800000001l
};

/// Constant 'LONGITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LONGITUDE_MAX = 1800000000l
};

/// Constant 'LONGITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LONGITUDE_MIN = -1799999999l
};

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LATITUDE_UNAVAILABLE = 900000001l
};

/// Constant 'LATITUDE_MAX'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LATITUDE_MAX = 900000000l
};

/// Constant 'LATITUDE_MIN'.
enum
{
  j2735_v2x_msgs__msg__NodeLLmD64b__LATITUDE_MIN = -900000000l
};

/// Struct defined in msg/NodeLLmD64b in the package j2735_v2x_msgs.
/**
  * NodeLLmD64b.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * A 64-bit node type with lat-long values expressed in standard SAE one tenth of a micro degree.
 */
typedef struct j2735_v2x_msgs__msg__NodeLLmD64b
{
  ///  Node-LLmD-64b ::= SEQUENCE {
  ///  lon Longitude,
  ///  lat Latitude
  ///  }
  /// Longitude ::= INTEGER (-1799999999..1800000001)
  ///   -- LSB = 1/10 micro degree
  ///   -- Providing a range of plus-minus 180 degrees
  ///   -- Convert to degree with factor 0.0000001 when field is used
  int32_t longitude;
  /// Latitude ::= INTEGER (-900000000..900000001)
  ///   -- LSB = 1/10 micro degree
  ///   -- Providing a range of plus-minus 90 degrees
  ///   -- Convert to degree with factor 0.0000001 when field is used
  int32_t latitude;
} j2735_v2x_msgs__msg__NodeLLmD64b;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeLLmD64b.
typedef struct j2735_v2x_msgs__msg__NodeLLmD64b__Sequence
{
  j2735_v2x_msgs__msg__NodeLLmD64b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeLLmD64b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__STRUCT_H_
