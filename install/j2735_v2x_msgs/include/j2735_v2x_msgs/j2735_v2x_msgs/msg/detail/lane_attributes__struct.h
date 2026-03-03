// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes.h"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'directional_use'
#include "j2735_v2x_msgs/msg/detail/lane_direction__struct.h"
// Member 'shared_with'
#include "j2735_v2x_msgs/msg/detail/lane_sharing__struct.h"
// Member 'lane_type'
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.h"

/// Struct defined in msg/LaneAttributes in the package j2735_v2x_msgs.
/**
  * LaneAttributes.msg
  *
  * J2735 2016 message format.
  *
  * @author Mae Fromm
  * @version 0.1
  *
  * directionalUse LaneDirection, -- directions of lane use
 */
typedef struct j2735_v2x_msgs__msg__LaneAttributes
{
  j2735_v2x_msgs__msg__LaneDirection directional_use;
  /// sharedWith LaneSharing  -- co-users of the lane path
  j2735_v2x_msgs__msg__LaneSharing shared_with;
  /// laneType LaneTypeAttributes, -- specific lane type data
  j2735_v2x_msgs__msg__LaneTypeAttributes lane_type;
} j2735_v2x_msgs__msg__LaneAttributes;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributes.
typedef struct j2735_v2x_msgs__msg__LaneAttributes__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_H_
