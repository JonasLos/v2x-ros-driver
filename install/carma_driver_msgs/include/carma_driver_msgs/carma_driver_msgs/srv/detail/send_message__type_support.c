// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_driver_msgs/srv/detail/send_message__rosidl_typesupport_introspection_c.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_driver_msgs/srv/detail/send_message__functions.h"
#include "carma_driver_msgs/srv/detail/send_message__struct.h"


// Include directives for member types
// Member `message_to_send`
#include "carma_driver_msgs/msg/byte_array.h"
// Member `message_to_send`
#include "carma_driver_msgs/msg/detail/byte_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SendMessage_Request__init(message_memory);
}

void carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SendMessage_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_member_array[1] = {
  {
    "message_to_send",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SendMessage_Request, message_to_send),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SendMessage_Request",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SendMessage_Request),
  false,  // has_any_key_member_
  carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_member_array,  // message members
  carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_type_support_handle = {
  0,
  &carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_members,
  get_message_typesupport_handle_function,
  &carma_driver_msgs__srv__SendMessage_Request__get_type_hash,
  &carma_driver_msgs__srv__SendMessage_Request__get_type_description,
  &carma_driver_msgs__srv__SendMessage_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Request)() {
  carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, msg, ByteArray)();
  if (!carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SendMessage_Response__init(message_memory);
}

void carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SendMessage_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_member_array[1] = {
  {
    "error_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SendMessage_Response, error_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SendMessage_Response",  // message name
  1,  // number of fields
  sizeof(carma_driver_msgs__srv__SendMessage_Response),
  false,  // has_any_key_member_
  carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_member_array,  // message members
  carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle = {
  0,
  &carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_members,
  get_message_typesupport_handle_function,
  &carma_driver_msgs__srv__SendMessage_Response__get_type_hash,
  &carma_driver_msgs__srv__SendMessage_Response__get_type_description,
  &carma_driver_msgs__srv__SendMessage_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Response)() {
  if (!carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__functions.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "carma_driver_msgs/srv/send_message.h"
// Member `request`
// Member `response`
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_driver_msgs__srv__SendMessage_Event__init(message_memory);
}

void carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_fini_function(void * message_memory)
{
  carma_driver_msgs__srv__SendMessage_Event__fini(message_memory);
}

size_t carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__size_function__SendMessage_Event__request(
  const void * untyped_member)
{
  const carma_driver_msgs__srv__SendMessage_Request__Sequence * member =
    (const carma_driver_msgs__srv__SendMessage_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_const_function__SendMessage_Event__request(
  const void * untyped_member, size_t index)
{
  const carma_driver_msgs__srv__SendMessage_Request__Sequence * member =
    (const carma_driver_msgs__srv__SendMessage_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_function__SendMessage_Event__request(
  void * untyped_member, size_t index)
{
  carma_driver_msgs__srv__SendMessage_Request__Sequence * member =
    (carma_driver_msgs__srv__SendMessage_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__fetch_function__SendMessage_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_driver_msgs__srv__SendMessage_Request * item =
    ((const carma_driver_msgs__srv__SendMessage_Request *)
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_const_function__SendMessage_Event__request(untyped_member, index));
  carma_driver_msgs__srv__SendMessage_Request * value =
    (carma_driver_msgs__srv__SendMessage_Request *)(untyped_value);
  *value = *item;
}

void carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__assign_function__SendMessage_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_driver_msgs__srv__SendMessage_Request * item =
    ((carma_driver_msgs__srv__SendMessage_Request *)
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_function__SendMessage_Event__request(untyped_member, index));
  const carma_driver_msgs__srv__SendMessage_Request * value =
    (const carma_driver_msgs__srv__SendMessage_Request *)(untyped_value);
  *item = *value;
}

bool carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__resize_function__SendMessage_Event__request(
  void * untyped_member, size_t size)
{
  carma_driver_msgs__srv__SendMessage_Request__Sequence * member =
    (carma_driver_msgs__srv__SendMessage_Request__Sequence *)(untyped_member);
  carma_driver_msgs__srv__SendMessage_Request__Sequence__fini(member);
  return carma_driver_msgs__srv__SendMessage_Request__Sequence__init(member, size);
}

size_t carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__size_function__SendMessage_Event__response(
  const void * untyped_member)
{
  const carma_driver_msgs__srv__SendMessage_Response__Sequence * member =
    (const carma_driver_msgs__srv__SendMessage_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_const_function__SendMessage_Event__response(
  const void * untyped_member, size_t index)
{
  const carma_driver_msgs__srv__SendMessage_Response__Sequence * member =
    (const carma_driver_msgs__srv__SendMessage_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_function__SendMessage_Event__response(
  void * untyped_member, size_t index)
{
  carma_driver_msgs__srv__SendMessage_Response__Sequence * member =
    (carma_driver_msgs__srv__SendMessage_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__fetch_function__SendMessage_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_driver_msgs__srv__SendMessage_Response * item =
    ((const carma_driver_msgs__srv__SendMessage_Response *)
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_const_function__SendMessage_Event__response(untyped_member, index));
  carma_driver_msgs__srv__SendMessage_Response * value =
    (carma_driver_msgs__srv__SendMessage_Response *)(untyped_value);
  *value = *item;
}

void carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__assign_function__SendMessage_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_driver_msgs__srv__SendMessage_Response * item =
    ((carma_driver_msgs__srv__SendMessage_Response *)
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_function__SendMessage_Event__response(untyped_member, index));
  const carma_driver_msgs__srv__SendMessage_Response * value =
    (const carma_driver_msgs__srv__SendMessage_Response *)(untyped_value);
  *item = *value;
}

bool carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__resize_function__SendMessage_Event__response(
  void * untyped_member, size_t size)
{
  carma_driver_msgs__srv__SendMessage_Response__Sequence * member =
    (carma_driver_msgs__srv__SendMessage_Response__Sequence *)(untyped_member);
  carma_driver_msgs__srv__SendMessage_Response__Sequence__fini(member);
  return carma_driver_msgs__srv__SendMessage_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_driver_msgs__srv__SendMessage_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(carma_driver_msgs__srv__SendMessage_Event, request),  // bytes offset in struct
    NULL,  // default value
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__size_function__SendMessage_Event__request,  // size() function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_const_function__SendMessage_Event__request,  // get_const(index) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_function__SendMessage_Event__request,  // get(index) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__fetch_function__SendMessage_Event__request,  // fetch(index, &value) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__assign_function__SendMessage_Event__request,  // assign(index, value) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__resize_function__SendMessage_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(carma_driver_msgs__srv__SendMessage_Event, response),  // bytes offset in struct
    NULL,  // default value
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__size_function__SendMessage_Event__response,  // size() function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_const_function__SendMessage_Event__response,  // get_const(index) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__get_function__SendMessage_Event__response,  // get(index) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__fetch_function__SendMessage_Event__response,  // fetch(index, &value) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__assign_function__SendMessage_Event__response,  // assign(index, value) function pointer
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__resize_function__SendMessage_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_members = {
  "carma_driver_msgs__srv",  // message namespace
  "SendMessage_Event",  // message name
  3,  // number of fields
  sizeof(carma_driver_msgs__srv__SendMessage_Event),
  false,  // has_any_key_member_
  carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_member_array,  // message members
  carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_type_support_handle = {
  0,
  &carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_members,
  get_message_typesupport_handle_function,
  &carma_driver_msgs__srv__SendMessage_Event__get_type_hash,
  &carma_driver_msgs__srv__SendMessage_Event__get_type_description,
  &carma_driver_msgs__srv__SendMessage_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Event)() {
  carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Request)();
  carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Response)();
  if (!carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_driver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_driver_msgs/srv/detail/send_message__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_members = {
  "carma_driver_msgs__srv",  // service namespace
  "SendMessage",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_Request_message_type_support_handle,
  NULL,  // response message
  // carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle
  NULL  // event_message
  // carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle
};


static rosidl_service_type_support_t carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_type_support_handle = {
  0,
  &carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_members,
  get_service_typesupport_handle_function,
  &carma_driver_msgs__srv__SendMessage_Request__rosidl_typesupport_introspection_c__SendMessage_Request_message_type_support_handle,
  &carma_driver_msgs__srv__SendMessage_Response__rosidl_typesupport_introspection_c__SendMessage_Response_message_type_support_handle,
  &carma_driver_msgs__srv__SendMessage_Event__rosidl_typesupport_introspection_c__SendMessage_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    carma_driver_msgs,
    srv,
    SendMessage
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    carma_driver_msgs,
    srv,
    SendMessage
  ),
  &carma_driver_msgs__srv__SendMessage__get_type_hash,
  &carma_driver_msgs__srv__SendMessage__get_type_description,
  &carma_driver_msgs__srv__SendMessage__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_driver_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage)(void) {
  if (!carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_type_support_handle.typesupport_identifier) {
    carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_driver_msgs, srv, SendMessage_Event)()->data;
  }

  return &carma_driver_msgs__srv__detail__send_message__rosidl_typesupport_introspection_c__SendMessage_service_type_support_handle;
}
