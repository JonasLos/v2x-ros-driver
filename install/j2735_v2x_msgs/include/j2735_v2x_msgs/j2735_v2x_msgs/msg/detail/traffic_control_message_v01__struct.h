// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_message_v01.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__struct.h"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/id128b__struct.h"
// Member 'package'
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.h"
// Member 'params'
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.h"
// Member 'geometry'
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__struct.h"

/// Struct defined in msg/TrafficControlMessageV01 in the package j2735_v2x_msgs.
/**
  * TrafficControlMessageV01.msg
  *
  * Part of the CARMA Cloud geo-fence specification not part of the official SAE j2735 standard
  *
  * J2735 2016 message format.
  *
  *
  * @version 0.1
  *
  * Description
  * ...
 */
typedef struct j2735_v2x_msgs__msg__TrafficControlMessageV01
{
  /// TrafficControlMessageV01 ::= SEQUENCE
  /// {
  ///  reqid Id64b, -- ephemeral identifier of originating request
  ///  reqseq INTEGER (0..255), -- sequential counter for originating request
  ///  msgtot INTEGER (0..65535), -- total expected traffic control message responses
  ///  msgnum INTEGER (0..65535), -- message index for each response out of total responses
  ///  id Id128b, -- unique traffic control id
  ///  updated EpochMins,
  ///  package [0] TrafficControlPackage OPTIONAL, -- related traffic control ids
  ///  params [1] TrafficControlParams OPTIONAL,
  ///  geometry [2] TrafficControlGeometry OPTIONAL
  /// }
  /// reqid ::= Id64b
  j2735_v2x_msgs__msg__Id64b reqid;
  /// reqseq ::= INTEGER (0..255)
  uint8_t reqseq;
  /// msgtot INTEGER (0..65535), -- total expected traffic control message responses
  uint16_t msgtot;
  /// msgnum INTEGER (0..65535), -- message index for each response out of total responses
  uint16_t msgnum;
  /// id Id128b, -- unique traffic control id
  j2735_v2x_msgs__msg__Id128b id;
  /// updated EpochMins
  uint64_t updated;
  /// package TrafficControlPackage OPTIONAL, -- related traffic control ids
  j2735_v2x_msgs__msg__TrafficControlPackage package;
  bool package_exists;
  /// params TrafficControlParams OPTIONAL
  j2735_v2x_msgs__msg__TrafficControlParams params;
  bool params_exists;
  /// geometry TrafficControlGeometry OPTIONAL
  j2735_v2x_msgs__msg__TrafficControlGeometry geometry;
  bool geometry_exists;
} j2735_v2x_msgs__msg__TrafficControlMessageV01;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlMessageV01.
typedef struct j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlMessageV01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlMessageV01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_H_
