// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_message.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlMessage__RESERVED = 0
};

/// Constant 'TCMV01'.
enum
{
  j2735_v2x_msgs__msg__TrafficControlMessage__TCMV01 = 1
};

// Include directives for member types
// Member 'tcm_v01'
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__struct.h"

/// Struct defined in msg/TrafficControlMessage in the package j2735_v2x_msgs.
/**
  * TrafficControlMessage.msg
  *
  * Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard
  *
  * J2735 2016 message format.
  *
  * @version 0.1
  *
  * Description
  * ...
 */
typedef struct j2735_v2x_msgs__msg__TrafficControlMessage
{
  /// TrafficControlMessage ::= CHOICE
  /// {
  ///  reserved NULL, -- skip version zero
  ///  tcmV01 TrafficControlMessageV01, -- traffic control message version 1
  ///  ...
  /// }
  uint8_t choice;
  /// tcrV01 ::= TrafficControlRequestV01
  j2735_v2x_msgs__msg__TrafficControlMessageV01 tcm_v01;
} j2735_v2x_msgs__msg__TrafficControlMessage;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlMessage.
typedef struct j2735_v2x_msgs__msg__TrafficControlMessage__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE__STRUCT_H_
