// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/get_drivers_with_capabilities.h"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__STRUCT_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'capabilities'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDriversWithCapabilities in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriversWithCapabilities_Request
{
  /// Request #####
  /// Capabilities is a list of descriptive strings. The complete set of possible capabilities strings can
  /// be found by referencing the ROS messages.xlsx spreadsheet in the detailed design folder of the Carma platform
  /// software engineering library. In that file the string to be used here comes from the
  /// "Name (in code)" column. Only names that apply to Drivers listed under the Package column are applicable.
  /// Of those names, the following topics & services should be ignored, as they are not capabilities: bind, bond,
  /// get_driver_api, driver_discovery.  With the remaining information in the "Name (in code)" column of the
  /// spreadsheet, there are two ways to identify a desired capability.
  ///   1) if the requestor doesn't care about what driver provides the capability, then just list the data name
  ///      itself (the part after the right-most '/').  For example, "heading".
  ///   2) if the requestor only wants the capability from a particular type of driver, then that driver type
  ///      can be included in the capability request, separated from the capability name by a '/'.  For example,
  ///      "position/heading". Such a request will ensure that other data sources are not considered. In this
  ///      example, if there was a compass sensor that also provided heading, it would not be returned in the
  ///      response because it would be identified as "sensor/heading".
  /// The specific list of supported capabilities is not documented here because it may change from time
  /// to time.  The ROS messages.xlsx is the official source for that information.
  rosidl_runtime_c__String__Sequence capabilities;
} carma_driver_msgs__srv__GetDriversWithCapabilities_Request;

// Struct for a sequence of carma_driver_msgs__srv__GetDriversWithCapabilities_Request.
typedef struct carma_driver_msgs__srv__GetDriversWithCapabilities_Request__Sequence
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriversWithCapabilities_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'driver_data'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDriversWithCapabilities in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriversWithCapabilities_Response
{
  /// Response #####
  /// a list of drivers and their capabilities that meet the given criteria. Each element is reported as a
  /// fully-qualified name of the form [driver_name]/[driver_type]/[capability].  If the request included
  /// only [capability] fields without the [driver_type] qualifier, then this return list may show multiple
  /// drivers of different types that provide the same capability.
  rosidl_runtime_c__String__Sequence driver_data;
} carma_driver_msgs__srv__GetDriversWithCapabilities_Response;

// Struct for a sequence of carma_driver_msgs__srv__GetDriversWithCapabilities_Response.
typedef struct carma_driver_msgs__srv__GetDriversWithCapabilities_Response__Sequence
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriversWithCapabilities_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Event__request__MAX_SIZE = 1
};
// response
enum
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetDriversWithCapabilities in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__GetDriversWithCapabilities_Event
{
  service_msgs__msg__ServiceEventInfo info;
  carma_driver_msgs__srv__GetDriversWithCapabilities_Request__Sequence request;
  carma_driver_msgs__srv__GetDriversWithCapabilities_Response__Sequence response;
} carma_driver_msgs__srv__GetDriversWithCapabilities_Event;

// Struct for a sequence of carma_driver_msgs__srv__GetDriversWithCapabilities_Event.
typedef struct carma_driver_msgs__srv__GetDriversWithCapabilities_Event__Sequence
{
  carma_driver_msgs__srv__GetDriversWithCapabilities_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__GetDriversWithCapabilities_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__STRUCT_H_
