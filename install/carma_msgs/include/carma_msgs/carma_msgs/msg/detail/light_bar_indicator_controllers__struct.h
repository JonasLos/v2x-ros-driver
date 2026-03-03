// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator_controllers.h"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__STRUCT_H_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'green_solid_owner'
// Member 'green_flash_owner'
// Member 'yellow_sides_owner'
// Member 'yellow_dim_owner'
// Member 'yellow_flash_owner'
// Member 'yellow_arrow_left_owner'
// Member 'yellow_arrow_right_owner'
// Member 'yellow_arrow_out_owner'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LightBarIndicatorControllers in the package carma_msgs.
/**
  * LightBarIndicatorControllers.msg
  *
  * @author Misheel Bayartsengel
  * @version 0.1
  *
  * Published by LightBarManager.
  * This msg indicates which indicators are controlled by which component
 */
typedef struct carma_msgs__msg__LightBarIndicatorControllers
{
  rosidl_runtime_c__String green_solid_owner;
  rosidl_runtime_c__String green_flash_owner;
  rosidl_runtime_c__String yellow_sides_owner;
  rosidl_runtime_c__String yellow_dim_owner;
  rosidl_runtime_c__String yellow_flash_owner;
  rosidl_runtime_c__String yellow_arrow_left_owner;
  rosidl_runtime_c__String yellow_arrow_right_owner;
  rosidl_runtime_c__String yellow_arrow_out_owner;
} carma_msgs__msg__LightBarIndicatorControllers;

// Struct for a sequence of carma_msgs__msg__LightBarIndicatorControllers.
typedef struct carma_msgs__msg__LightBarIndicatorControllers__Sequence
{
  carma_msgs__msg__LightBarIndicatorControllers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__msg__LightBarIndicatorControllers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__STRUCT_H_
