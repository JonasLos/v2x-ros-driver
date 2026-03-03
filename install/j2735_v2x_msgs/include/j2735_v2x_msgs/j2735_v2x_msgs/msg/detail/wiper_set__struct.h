// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_set.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'HAS_STATUS_REAR'.
enum
{
  j2735_v2x_msgs__msg__WiperSet__HAS_STATUS_REAR = 1
};

/// Constant 'HAS_RATE_REAR'.
enum
{
  j2735_v2x_msgs__msg__WiperSet__HAS_RATE_REAR = 2
};

// Include directives for member types
// Member 'status_front'
// Member 'status_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_status__struct.h"
// Member 'rate_front'
// Member 'rate_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_rate__struct.h"

/// Struct defined in msg/WiperSet in the package j2735_v2x_msgs.
/**
  * WiperSet.msg
  *
  * J2735 2016 message format.
 */
typedef struct j2735_v2x_msgs__msg__WiperSet
{
  /// WiperSet ::= SEQUENCE {
  ///    statusFront    WiperStatus,
  ///    rateFront      WiperRate,
  ///    statusRear     WiperStatus      OPTIONAL,
  ///    rateRear       WiperRate        OPTIONAL
  ///    }
  /// A BIT STRING defining the presence of optional feilds.
  /// Compare with bitwise-and
  /// if (presence_vector & HAS_STATUS_REAR) etc.
  /// Create with bitwise-or
  /// presence_vector = presence_vector | HAS_STATUS_REAR
  uint16_t presence_vector;
  j2735_v2x_msgs__msg__WiperStatus status_front;
  j2735_v2x_msgs__msg__WiperRate rate_front;
  /// OPTIONAL FIELDS
  /// All fields below this section are optional.
  /// The presence of a given field can be idenfied by checking the presence_vector
  j2735_v2x_msgs__msg__WiperStatus status_rear;
  j2735_v2x_msgs__msg__WiperRate rate_rear;
} j2735_v2x_msgs__msg__WiperSet;

// Struct for a sequence of j2735_v2x_msgs__msg__WiperSet.
typedef struct j2735_v2x_msgs__msg__WiperSet__Sequence
{
  j2735_v2x_msgs__msg__WiperSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__WiperSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__STRUCT_H_
