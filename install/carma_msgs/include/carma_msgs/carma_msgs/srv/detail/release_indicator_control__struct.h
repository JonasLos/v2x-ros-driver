// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:srv/ReleaseIndicatorControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/srv/release_indicator_control.h"


#ifndef CARMA_MSGS__SRV__DETAIL__RELEASE_INDICATOR_CONTROL__STRUCT_H_
#define CARMA_MSGS__SRV__DETAIL__RELEASE_INDICATOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ind_list'
#include "carma_msgs/msg/detail/light_bar_indicator__struct.h"
// Member 'cda_list'
#include "carma_msgs/msg/detail/light_bar_cda_type__struct.h"
// Member 'requester_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReleaseIndicatorControl in the package carma_msgs.
typedef struct carma_msgs__srv__ReleaseIndicatorControl_Request
{
  /// Request - List of indicators the component release control of
  carma_msgs__msg__LightBarIndicator__Sequence ind_list;
  carma_msgs__msg__LightBarCDAType__Sequence cda_list;
  rosidl_runtime_c__String requester_name;
} carma_msgs__srv__ReleaseIndicatorControl_Request;

// Struct for a sequence of carma_msgs__srv__ReleaseIndicatorControl_Request.
typedef struct carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence
{
  carma_msgs__srv__ReleaseIndicatorControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ReleaseIndicatorControl in the package carma_msgs.
typedef struct carma_msgs__srv__ReleaseIndicatorControl_Response
{
  uint8_t structure_needs_at_least_one_member;
} carma_msgs__srv__ReleaseIndicatorControl_Response;

// Struct for a sequence of carma_msgs__srv__ReleaseIndicatorControl_Response.
typedef struct carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence
{
  carma_msgs__srv__ReleaseIndicatorControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  carma_msgs__srv__ReleaseIndicatorControl_Event__request__MAX_SIZE = 1
};
// response
enum
{
  carma_msgs__srv__ReleaseIndicatorControl_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ReleaseIndicatorControl in the package carma_msgs.
typedef struct carma_msgs__srv__ReleaseIndicatorControl_Event
{
  service_msgs__msg__ServiceEventInfo info;
  carma_msgs__srv__ReleaseIndicatorControl_Request__Sequence request;
  carma_msgs__srv__ReleaseIndicatorControl_Response__Sequence response;
} carma_msgs__srv__ReleaseIndicatorControl_Event;

// Struct for a sequence of carma_msgs__srv__ReleaseIndicatorControl_Event.
typedef struct carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence
{
  carma_msgs__srv__ReleaseIndicatorControl_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__ReleaseIndicatorControl_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__SRV__DETAIL__RELEASE_INDICATOR_CONTROL__STRUCT_H_
