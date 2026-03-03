// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_direction.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LaneDirection in the package j2735_v2x_msgs.
/**
  * LaneDirection.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * The LaneDirection data element is used to denote the allowed direction of travel over a lane object. By convention,
  * the lane object is always described from the stop line outwards away from the intersection. Therefore, the ingress
  * direction is from the end of the path to the stop line and the egress direction is from the stop line outwards. It should be
  * noted that some lane objects are not used for travel and that some lane objects allow bi-directional travel.
  *
  * LaneDirection ::= BIT STRING {
  * -- With bits as defined:
  * -- Allowed directions of travel in the lane object
  * -- All lanes are described from the stop line outwards
  * ingressPath (0),
  * -- travel from rear of path to front is allowed
  * egressPath (1)
  * -- travel from front of path to rear is allowed
  * -- Notes: No Travel, i.e. the lane object type does not support travel (medians, curbs, etc.)
  * is indicated by not asserting any bit value
  * - Bi-Directional Travel (such as a ped crosswalk) is indicated by asserting both of the bits
  * } (SIZE (2))
 */
typedef struct j2735_v2x_msgs__msg__LaneDirection
{
  uint8_t lane_direction;
} j2735_v2x_msgs__msg__LaneDirection;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneDirection.
typedef struct j2735_v2x_msgs__msg__LaneDirection__Sequence
{
  j2735_v2x_msgs__msg__LaneDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__STRUCT_H_
