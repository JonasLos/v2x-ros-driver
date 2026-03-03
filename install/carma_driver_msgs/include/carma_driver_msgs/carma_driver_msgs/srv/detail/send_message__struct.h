// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/send_message.h"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__STRUCT_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message_to_send'
#include "carma_driver_msgs/msg/detail/byte_array__struct.h"

/// Struct defined in srv/SendMessage in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SendMessage_Request
{
  /// Request
  /// The message to be sent
  carma_driver_msgs__msg__ByteArray message_to_send;
} carma_driver_msgs__srv__SendMessage_Request;

// Struct for a sequence of carma_driver_msgs__srv__SendMessage_Request.
typedef struct carma_driver_msgs__srv__SendMessage_Request__Sequence
{
  carma_driver_msgs__srv__SendMessage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SendMessage_Request__Sequence;

// Constants defined in the message

/// Constant 'NO_ERROR'.
/**
  * enumeration values for errorStatus:
 */
enum
{
  carma_driver_msgs__srv__SendMessage_Response__NO_ERROR = 0
};

/// Constant 'MSG_FAILURE'.
enum
{
  carma_driver_msgs__srv__SendMessage_Response__MSG_FAILURE = 1
};

/// Struct defined in srv/SendMessage in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SendMessage_Response
{
  /// Response
  /// An enumeration representing a service execution error as defined in the route design document.
  uint8_t error_status;
} carma_driver_msgs__srv__SendMessage_Response;

// Struct for a sequence of carma_driver_msgs__srv__SendMessage_Response.
typedef struct carma_driver_msgs__srv__SendMessage_Response__Sequence
{
  carma_driver_msgs__srv__SendMessage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SendMessage_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  carma_driver_msgs__srv__SendMessage_Event__request__MAX_SIZE = 1
};
// response
enum
{
  carma_driver_msgs__srv__SendMessage_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SendMessage in the package carma_driver_msgs.
typedef struct carma_driver_msgs__srv__SendMessage_Event
{
  service_msgs__msg__ServiceEventInfo info;
  carma_driver_msgs__srv__SendMessage_Request__Sequence request;
  carma_driver_msgs__srv__SendMessage_Response__Sequence response;
} carma_driver_msgs__srv__SendMessage_Event;

// Struct for a sequence of carma_driver_msgs__srv__SendMessage_Event.
typedef struct carma_driver_msgs__srv__SendMessage_Event__Sequence
{
  carma_driver_msgs__srv__SendMessage_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__srv__SendMessage_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__STRUCT_H_
