// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/set_light_bar_indicator.h"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__STRUCT_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Request__OFF = 0
};

/// Constant 'ON'.
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Request__ON = 1
};

// Include directives for member types
// Member 'requester_name'
#include "rosidl_runtime_c/string.h"
// Member 'indicator'
#include "carma_msgs/msg/detail/light_bar_indicator__struct.h"
// Member 'cda_type'
#include "carma_msgs/msg/detail/light_bar_cda_type__struct.h"

/// Struct defined in srv/SetLightBarIndicator in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SetLightBarIndicator_Request
{
  uint8_t state;
  rosidl_runtime_c__String requester_name;
  carma_msgs__msg__LightBarIndicator indicator;
  carma_msgs__msg__LightBarCDAType cda_type;
} carma_driver_msgs__srv__SetLightBarIndicator_Request;

// Struct for a sequence of carma_driver_msgs__srv__SetLightBarIndicator_Request.
typedef struct carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence
{
  carma_driver_msgs__srv__SetLightBarIndicator_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence;

// Constants defined in the message

/// Constant 'SUCCESS'.
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Response__SUCCESS = 0
};

/// Constant 'PERMISSION_DENIED'.
/**
  * if the requester is no longer controlling the indicator
 */
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Response__PERMISSION_DENIED = 1
};

/// Constant 'ERROR'.
/**
  * any other reason the request failed, including hardware issue
 */
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Response__ERROR = 2
};

/// Struct defined in srv/SetLightBarIndicator in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SetLightBarIndicator_Response
{
  uint8_t status_code;
} carma_driver_msgs__srv__SetLightBarIndicator_Response;

// Struct for a sequence of carma_driver_msgs__srv__SetLightBarIndicator_Response.
typedef struct carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence
{
  carma_driver_msgs__srv__SetLightBarIndicator_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Event__request__MAX_SIZE = 1
};
// response
enum
{
  carma_driver_msgs__srv__SetLightBarIndicator_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLightBarIndicator in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SetLightBarIndicator_Event
{
  service_msgs__msg__ServiceEventInfo info;
  carma_driver_msgs__srv__SetLightBarIndicator_Request__Sequence request;
  carma_driver_msgs__srv__SetLightBarIndicator_Response__Sequence response;
} carma_driver_msgs__srv__SetLightBarIndicator_Event;

// Struct for a sequence of carma_driver_msgs__srv__SetLightBarIndicator_Event.
typedef struct carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence
{
  carma_driver_msgs__srv__SetLightBarIndicator_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SetLightBarIndicator_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__STRUCT_H_
