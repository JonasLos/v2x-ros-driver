// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/srv/set_traffic_event.h"


#ifndef CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_H_
#define CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetTrafficEvent in the package carma_msgs.
typedef struct carma_msgs__srv__SetTrafficEvent_Request
{
  /// Request - set the traffic event values
  /// Used by Traffic Incident Node
  /// This should contain the desired parameters of traffic event, not just the ones
  /// intended to be changed
  /// Distance (meters) from the center of the vehicle to the beginning of geofence
  double up_track;
  /// Distance (meters) between center of the vehicle to the end of the geofence
  double down_track;
  /// Road vehicles minimum following distance (meters)
  double minimum_gap;
  /// Recommended speed within geofence (MPH)
  double advisory_speed;
} carma_msgs__srv__SetTrafficEvent_Request;

// Struct for a sequence of carma_msgs__srv__SetTrafficEvent_Request.
typedef struct carma_msgs__srv__SetTrafficEvent_Request__Sequence
{
  carma_msgs__srv__SetTrafficEvent_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__SetTrafficEvent_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetTrafficEvent in the package carma_msgs.
typedef struct carma_msgs__srv__SetTrafficEvent_Response
{
  /// Response
  bool success;
} carma_msgs__srv__SetTrafficEvent_Response;

// Struct for a sequence of carma_msgs__srv__SetTrafficEvent_Response.
typedef struct carma_msgs__srv__SetTrafficEvent_Response__Sequence
{
  carma_msgs__srv__SetTrafficEvent_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__SetTrafficEvent_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  carma_msgs__srv__SetTrafficEvent_Event__request__MAX_SIZE = 1
};
// response
enum
{
  carma_msgs__srv__SetTrafficEvent_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetTrafficEvent in the package carma_msgs.
typedef struct carma_msgs__srv__SetTrafficEvent_Event
{
  service_msgs__msg__ServiceEventInfo info;
  carma_msgs__srv__SetTrafficEvent_Request__Sequence request;
  carma_msgs__srv__SetTrafficEvent_Response__Sequence response;
} carma_msgs__srv__SetTrafficEvent_Event;

// Struct for a sequence of carma_msgs__srv__SetTrafficEvent_Event.
typedef struct carma_msgs__srv__SetTrafficEvent_Event__Sequence
{
  carma_msgs__srv__SetTrafficEvent_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_msgs__srv__SetTrafficEvent_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_MSGS__SRV__DETAIL__SET_TRAFFIC_EVENT__STRUCT_H_
