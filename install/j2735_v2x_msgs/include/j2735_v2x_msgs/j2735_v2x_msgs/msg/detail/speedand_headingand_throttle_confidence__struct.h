// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speedand_headingand_throttle_confidence.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.h"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.h"
// Member 'throttle'
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__struct.h"

/// Struct defined in msg/SpeedandHeadingandThrottleConfidence in the package j2735_v2x_msgs.
/**
  * SpeedandHeadingandThrottleConfidence.msg
  *
  * J2735 2016 message format.
  *
  * Parsed description of SpeedandHeadingandThrottleConfidence from the SAE J2735 2016 specification.
  * For further usage details consult the specification.
  *
  * SpeedandHeadingandThrottleConfidence ::= SEQUENCE {
  *    heading   HeadingConfidence,    
  *    speed     SpeedConfidence,      
  *    throttle  ThrottleConfidence    
  *    }
 */
typedef struct j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence
{
  j2735_v2x_msgs__msg__HeadingConfidence heading;
  j2735_v2x_msgs__msg__SpeedConfidence speed;
  j2735_v2x_msgs__msg__ThrottleConfidence throttle;
} j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence;

// Struct for a sequence of j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence.
typedef struct j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence
{
  j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_H_
