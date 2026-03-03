// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_request_v01.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_H_

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
// Member 'bounds'
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__struct.h"

/// Struct defined in msg/TrafficControlRequestV01 in the package j2735_v2x_msgs.
/**
  * TrafficControlRequestV01.msg
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
typedef struct j2735_v2x_msgs__msg__TrafficControlRequestV01
{
  /// TrafficControlRequestV01 ::= SEQUENCE
  /// {
  ///  reqid Id64b, -- randomly generated ephemeral request identifier
  ///  reqseq INTEGER (0..255), -- sequential counter used to differentiate traffic control requests
  ///  scale INTEGER (-3..3), -- vertex offset units 10^n meters
  ///  bounds SEQUENCE (SIZE(1..63)) OF TrafficControlBounds
  /// }
  ///  reqid ::= Id64b
  j2735_v2x_msgs__msg__Id64b reqid;
  /// reqseq ::= INTEGER (0..255)
  uint8_t reqseq;
  /// Scale ::= INTEGER (-3..3)
  int8_t scale;
  /// Bounds SEQUENCE (SIZE(1..63)) OF TrafficControlBounds
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence bounds;
} j2735_v2x_msgs__msg__TrafficControlRequestV01;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlRequestV01.
typedef struct j2735_v2x_msgs__msg__TrafficControlRequestV01__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlRequestV01 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlRequestV01__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_H_
