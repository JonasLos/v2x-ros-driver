// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/ResponseType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/response_type.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'NOT_IN_USE_OR_NOT_EQUIPPED'.
/**
  * enumeration values for response_type:
 */
enum
{
  j2735_v2x_msgs__msg__ResponseType__NOT_IN_USE_OR_NOT_EQUIPPED = 0
};

/// Constant 'EMERGENCY'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__EMERGENCY = 1
};

/// Constant 'NON_EMERGENCY'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__NON_EMERGENCY = 2
};

/// Constant 'PURSUIT'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__PURSUIT = 3
};

/// Constant 'STATIONARY'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__STATIONARY = 4
};

/// Constant 'SLOW_MOVING'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__SLOW_MOVING = 5
};

/// Constant 'STOP_AND_GO_MOVEMENT'.
enum
{
  j2735_v2x_msgs__msg__ResponseType__STOP_AND_GO_MOVEMENT = 6
};

/// Struct defined in msg/ResponseType in the package j2735_v2x_msgs.
/**
  * ResponseType.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__ResponseType
{
  /// ResponseType ::= ENUMERATED {
  /// notInUseOrNotEquipped (0),
  /// emergency (1), -- active service call at emergency level
  /// nonEmergency (2), -- also used when returning from service call
  /// pursuit (3), -- sender driving may be erratic
  /// stationary (4), -- sender is not moving, stopped along roadside
  /// slowMoving (5), -- such a mowers, litter trucks, etc.
  /// stopAndGoMovement (6), -- such as school bus or garbage truck
  /// ...
  /// }
  uint8_t response_type;
} j2735_v2x_msgs__msg__ResponseType;

// Struct for a sequence of j2735_v2x_msgs__msg__ResponseType.
typedef struct j2735_v2x_msgs__msg__ResponseType__Sequence
{
  j2735_v2x_msgs__msg__ResponseType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__ResponseType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESPONSE_TYPE__STRUCT_H_
