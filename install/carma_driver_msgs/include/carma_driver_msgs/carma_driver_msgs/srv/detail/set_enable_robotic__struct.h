// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:srv/SetEnableRobotic.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/set_enable_robotic.h"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__STRUCT_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISABLE'.
enum
{
  carma_driver_msgs__srv__SetEnableRobotic_Request__DISABLE = 0
};

/// Constant 'ENABLE'.
enum
{
  carma_driver_msgs__srv__SetEnableRobotic_Request__ENABLE = 1
};

/// Struct defined in srv/SetEnableRobotic in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SetEnableRobotic_Request
{
  /// Request
  uint8_t set;
} carma_driver_msgs__srv__SetEnableRobotic_Request;

// Struct for a sequence of carma_driver_msgs__srv__SetEnableRobotic_Request.
typedef struct carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence
{
  carma_driver_msgs__srv__SetEnableRobotic_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetEnableRobotic in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SetEnableRobotic_Response
{
  uint8_t structure_needs_at_least_one_member;
} carma_driver_msgs__srv__SetEnableRobotic_Response;

// Struct for a sequence of carma_driver_msgs__srv__SetEnableRobotic_Response.
typedef struct carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence
{
  carma_driver_msgs__srv__SetEnableRobotic_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  carma_driver_msgs__srv__SetEnableRobotic_Event__request__MAX_SIZE = 1
};
// response
enum
{
  carma_driver_msgs__srv__SetEnableRobotic_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetEnableRobotic in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SetEnableRobotic_Event
{
  service_msgs__msg__ServiceEventInfo info;
  carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence request;
  carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence response;
} carma_driver_msgs__srv__SetEnableRobotic_Event;

// Struct for a sequence of carma_driver_msgs__srv__SetEnableRobotic_Event.
typedef struct carma_driver_msgs__srv__SetEnableRobotic_Event__Sequence
{
  carma_driver_msgs__srv__SetEnableRobotic_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SetEnableRobotic_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__STRUCT_H_
