// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PersonalClusterRadius.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_cluster_radius.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CLUSTER_RADIUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CLUSTER_RADIUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CLUSTER_RADIUS_MAX'.
enum
{
  j2735_v2x_msgs__msg__PersonalClusterRadius__CLUSTER_RADIUS_MAX = 100
};

/// Struct defined in msg/PersonalClusterRadius in the package j2735_v2x_msgs.
/**
  * PersonalClusterRadius.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of PersonalClusterRadius from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * PersonalClusterRadius ::= INTEGER (0..100) -- units of meters
 */
typedef struct j2735_v2x_msgs__msg__PersonalClusterRadius
{
  uint8_t cluster_radius;
} j2735_v2x_msgs__msg__PersonalClusterRadius;

// Struct for a sequence of j2735_v2x_msgs__msg__PersonalClusterRadius.
typedef struct j2735_v2x_msgs__msg__PersonalClusterRadius__Sequence
{
  j2735_v2x_msgs__msg__PersonalClusterRadius * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PersonalClusterRadius__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CLUSTER_RADIUS__STRUCT_H_
