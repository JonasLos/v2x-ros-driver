// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "carma_msgs/srv/detail/request_indicator_control__rosidl_typesupport_introspection_c.h"
#include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "carma_msgs/srv/detail/request_indicator_control__functions.h"
#include "carma_msgs/srv/detail/request_indicator_control__struct.h"


// Include directives for member types
// Member `ind_list`
#include "carma_msgs/msg/light_bar_indicator.h"
// Member `ind_list`
#include "carma_msgs/msg/detail/light_bar_indicator__rosidl_typesupport_introspection_c.h"
// Member `cda_list`
#include "carma_msgs/msg/light_bar_cda_type.h"
// Member `cda_list`
#include "carma_msgs/msg/detail/light_bar_cda_type__rosidl_typesupport_introspection_c.h"
// Member `requester_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__RequestIndicatorControl_Request__init(message_memory);
}

void carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_fini_function(void * message_memory)
{
  carma_msgs__srv__RequestIndicatorControl_Request__fini(message_memory);
}

size_t carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Request__ind_list(
  const void * untyped_member)
{
  const carma_msgs__msg__LightBarIndicator__Sequence * member =
    (const carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Request__ind_list(
  const void * untyped_member, size_t index)
{
  const carma_msgs__msg__LightBarIndicator__Sequence * member =
    (const carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Request__ind_list(
  void * untyped_member, size_t index)
{
  carma_msgs__msg__LightBarIndicator__Sequence * member =
    (carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Request__ind_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_msgs__msg__LightBarIndicator * item =
    ((const carma_msgs__msg__LightBarIndicator *)
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Request__ind_list(untyped_member, index));
  carma_msgs__msg__LightBarIndicator * value =
    (carma_msgs__msg__LightBarIndicator *)(untyped_value);
  *value = *item;
}

void carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Request__ind_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_msgs__msg__LightBarIndicator * item =
    ((carma_msgs__msg__LightBarIndicator *)
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Request__ind_list(untyped_member, index));
  const carma_msgs__msg__LightBarIndicator * value =
    (const carma_msgs__msg__LightBarIndicator *)(untyped_value);
  *item = *value;
}

bool carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Request__ind_list(
  void * untyped_member, size_t size)
{
  carma_msgs__msg__LightBarIndicator__Sequence * member =
    (carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  carma_msgs__msg__LightBarIndicator__Sequence__fini(member);
  return carma_msgs__msg__LightBarIndicator__Sequence__init(member, size);
}

size_t carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Request__cda_list(
  const void * untyped_member)
{
  const carma_msgs__msg__LightBarCDAType__Sequence * member =
    (const carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Request__cda_list(
  const void * untyped_member, size_t index)
{
  const carma_msgs__msg__LightBarCDAType__Sequence * member =
    (const carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Request__cda_list(
  void * untyped_member, size_t index)
{
  carma_msgs__msg__LightBarCDAType__Sequence * member =
    (carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Request__cda_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_msgs__msg__LightBarCDAType * item =
    ((const carma_msgs__msg__LightBarCDAType *)
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Request__cda_list(untyped_member, index));
  carma_msgs__msg__LightBarCDAType * value =
    (carma_msgs__msg__LightBarCDAType *)(untyped_value);
  *value = *item;
}

void carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Request__cda_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_msgs__msg__LightBarCDAType * item =
    ((carma_msgs__msg__LightBarCDAType *)
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Request__cda_list(untyped_member, index));
  const carma_msgs__msg__LightBarCDAType * value =
    (const carma_msgs__msg__LightBarCDAType *)(untyped_value);
  *item = *value;
}

bool carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Request__cda_list(
  void * untyped_member, size_t size)
{
  carma_msgs__msg__LightBarCDAType__Sequence * member =
    (carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  carma_msgs__msg__LightBarCDAType__Sequence__fini(member);
  return carma_msgs__msg__LightBarCDAType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_member_array[3] = {
  {
    "ind_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__RequestIndicatorControl_Request, ind_list),  // bytes offset in struct
    NULL,  // default value
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Request__ind_list,  // size() function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Request__ind_list,  // get_const(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Request__ind_list,  // get(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Request__ind_list,  // fetch(index, &value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Request__ind_list,  // assign(index, value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Request__ind_list  // resize(index) function pointer
  },
  {
    "cda_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__RequestIndicatorControl_Request, cda_list),  // bytes offset in struct
    NULL,  // default value
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Request__cda_list,  // size() function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Request__cda_list,  // get_const(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Request__cda_list,  // get(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Request__cda_list,  // fetch(index, &value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Request__cda_list,  // assign(index, value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Request__cda_list  // resize(index) function pointer
  },
  {
    "requester_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__RequestIndicatorControl_Request, requester_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_members = {
  "carma_msgs__srv",  // message namespace
  "RequestIndicatorControl_Request",  // message name
  3,  // number of fields
  sizeof(carma_msgs__srv__RequestIndicatorControl_Request),
  false,  // has_any_key_member_
  carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_member_array,  // message members
  carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_type_support_handle = {
  0,
  &carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_members,
  get_message_typesupport_handle_function,
  &carma_msgs__srv__RequestIndicatorControl_Request__get_type_hash,
  &carma_msgs__srv__RequestIndicatorControl_Request__get_type_description,
  &carma_msgs__srv__RequestIndicatorControl_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Request)() {
  carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarIndicator)();
  carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarCDAType)();
  if (!carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_type_support_handle.typesupport_identifier) {
    carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__functions.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__struct.h"


// Include directives for member types
// Member `ind_list`
// already included above
// #include "carma_msgs/msg/light_bar_indicator.h"
// Member `ind_list`
// already included above
// #include "carma_msgs/msg/detail/light_bar_indicator__rosidl_typesupport_introspection_c.h"
// Member `cda_list`
// already included above
// #include "carma_msgs/msg/light_bar_cda_type.h"
// Member `cda_list`
// already included above
// #include "carma_msgs/msg/detail/light_bar_cda_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__RequestIndicatorControl_Response__init(message_memory);
}

void carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_fini_function(void * message_memory)
{
  carma_msgs__srv__RequestIndicatorControl_Response__fini(message_memory);
}

size_t carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Response__ind_list(
  const void * untyped_member)
{
  const carma_msgs__msg__LightBarIndicator__Sequence * member =
    (const carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Response__ind_list(
  const void * untyped_member, size_t index)
{
  const carma_msgs__msg__LightBarIndicator__Sequence * member =
    (const carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Response__ind_list(
  void * untyped_member, size_t index)
{
  carma_msgs__msg__LightBarIndicator__Sequence * member =
    (carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Response__ind_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_msgs__msg__LightBarIndicator * item =
    ((const carma_msgs__msg__LightBarIndicator *)
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Response__ind_list(untyped_member, index));
  carma_msgs__msg__LightBarIndicator * value =
    (carma_msgs__msg__LightBarIndicator *)(untyped_value);
  *value = *item;
}

void carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Response__ind_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_msgs__msg__LightBarIndicator * item =
    ((carma_msgs__msg__LightBarIndicator *)
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Response__ind_list(untyped_member, index));
  const carma_msgs__msg__LightBarIndicator * value =
    (const carma_msgs__msg__LightBarIndicator *)(untyped_value);
  *item = *value;
}

bool carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Response__ind_list(
  void * untyped_member, size_t size)
{
  carma_msgs__msg__LightBarIndicator__Sequence * member =
    (carma_msgs__msg__LightBarIndicator__Sequence *)(untyped_member);
  carma_msgs__msg__LightBarIndicator__Sequence__fini(member);
  return carma_msgs__msg__LightBarIndicator__Sequence__init(member, size);
}

size_t carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Response__cda_list(
  const void * untyped_member)
{
  const carma_msgs__msg__LightBarCDAType__Sequence * member =
    (const carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Response__cda_list(
  const void * untyped_member, size_t index)
{
  const carma_msgs__msg__LightBarCDAType__Sequence * member =
    (const carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Response__cda_list(
  void * untyped_member, size_t index)
{
  carma_msgs__msg__LightBarCDAType__Sequence * member =
    (carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Response__cda_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_msgs__msg__LightBarCDAType * item =
    ((const carma_msgs__msg__LightBarCDAType *)
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Response__cda_list(untyped_member, index));
  carma_msgs__msg__LightBarCDAType * value =
    (carma_msgs__msg__LightBarCDAType *)(untyped_value);
  *value = *item;
}

void carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Response__cda_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_msgs__msg__LightBarCDAType * item =
    ((carma_msgs__msg__LightBarCDAType *)
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Response__cda_list(untyped_member, index));
  const carma_msgs__msg__LightBarCDAType * value =
    (const carma_msgs__msg__LightBarCDAType *)(untyped_value);
  *item = *value;
}

bool carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Response__cda_list(
  void * untyped_member, size_t size)
{
  carma_msgs__msg__LightBarCDAType__Sequence * member =
    (carma_msgs__msg__LightBarCDAType__Sequence *)(untyped_member);
  carma_msgs__msg__LightBarCDAType__Sequence__fini(member);
  return carma_msgs__msg__LightBarCDAType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_member_array[2] = {
  {
    "ind_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__RequestIndicatorControl_Response, ind_list),  // bytes offset in struct
    NULL,  // default value
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Response__ind_list,  // size() function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Response__ind_list,  // get_const(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Response__ind_list,  // get(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Response__ind_list,  // fetch(index, &value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Response__ind_list,  // assign(index, value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Response__ind_list  // resize(index) function pointer
  },
  {
    "cda_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__RequestIndicatorControl_Response, cda_list),  // bytes offset in struct
    NULL,  // default value
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Response__cda_list,  // size() function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Response__cda_list,  // get_const(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Response__cda_list,  // get(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Response__cda_list,  // fetch(index, &value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Response__cda_list,  // assign(index, value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Response__cda_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_members = {
  "carma_msgs__srv",  // message namespace
  "RequestIndicatorControl_Response",  // message name
  2,  // number of fields
  sizeof(carma_msgs__srv__RequestIndicatorControl_Response),
  false,  // has_any_key_member_
  carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_member_array,  // message members
  carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle = {
  0,
  &carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_members,
  get_message_typesupport_handle_function,
  &carma_msgs__srv__RequestIndicatorControl_Response__get_type_hash,
  &carma_msgs__srv__RequestIndicatorControl_Response__get_type_description,
  &carma_msgs__srv__RequestIndicatorControl_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Response)() {
  carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarIndicator)();
  carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, msg, LightBarCDAType)();
  if (!carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle.typesupport_identifier) {
    carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__functions.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "carma_msgs/srv/request_indicator_control.h"
// Member `request`
// Member `response`
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  carma_msgs__srv__RequestIndicatorControl_Event__init(message_memory);
}

void carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_fini_function(void * message_memory)
{
  carma_msgs__srv__RequestIndicatorControl_Event__fini(message_memory);
}

size_t carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Event__request(
  const void * untyped_member)
{
  const carma_msgs__srv__RequestIndicatorControl_Request__Sequence * member =
    (const carma_msgs__srv__RequestIndicatorControl_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Event__request(
  const void * untyped_member, size_t index)
{
  const carma_msgs__srv__RequestIndicatorControl_Request__Sequence * member =
    (const carma_msgs__srv__RequestIndicatorControl_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Event__request(
  void * untyped_member, size_t index)
{
  carma_msgs__srv__RequestIndicatorControl_Request__Sequence * member =
    (carma_msgs__srv__RequestIndicatorControl_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_msgs__srv__RequestIndicatorControl_Request * item =
    ((const carma_msgs__srv__RequestIndicatorControl_Request *)
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Event__request(untyped_member, index));
  carma_msgs__srv__RequestIndicatorControl_Request * value =
    (carma_msgs__srv__RequestIndicatorControl_Request *)(untyped_value);
  *value = *item;
}

void carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_msgs__srv__RequestIndicatorControl_Request * item =
    ((carma_msgs__srv__RequestIndicatorControl_Request *)
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Event__request(untyped_member, index));
  const carma_msgs__srv__RequestIndicatorControl_Request * value =
    (const carma_msgs__srv__RequestIndicatorControl_Request *)(untyped_value);
  *item = *value;
}

bool carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Event__request(
  void * untyped_member, size_t size)
{
  carma_msgs__srv__RequestIndicatorControl_Request__Sequence * member =
    (carma_msgs__srv__RequestIndicatorControl_Request__Sequence *)(untyped_member);
  carma_msgs__srv__RequestIndicatorControl_Request__Sequence__fini(member);
  return carma_msgs__srv__RequestIndicatorControl_Request__Sequence__init(member, size);
}

size_t carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Event__response(
  const void * untyped_member)
{
  const carma_msgs__srv__RequestIndicatorControl_Response__Sequence * member =
    (const carma_msgs__srv__RequestIndicatorControl_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Event__response(
  const void * untyped_member, size_t index)
{
  const carma_msgs__srv__RequestIndicatorControl_Response__Sequence * member =
    (const carma_msgs__srv__RequestIndicatorControl_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Event__response(
  void * untyped_member, size_t index)
{
  carma_msgs__srv__RequestIndicatorControl_Response__Sequence * member =
    (carma_msgs__srv__RequestIndicatorControl_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const carma_msgs__srv__RequestIndicatorControl_Response * item =
    ((const carma_msgs__srv__RequestIndicatorControl_Response *)
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Event__response(untyped_member, index));
  carma_msgs__srv__RequestIndicatorControl_Response * value =
    (carma_msgs__srv__RequestIndicatorControl_Response *)(untyped_value);
  *value = *item;
}

void carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  carma_msgs__srv__RequestIndicatorControl_Response * item =
    ((carma_msgs__srv__RequestIndicatorControl_Response *)
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Event__response(untyped_member, index));
  const carma_msgs__srv__RequestIndicatorControl_Response * value =
    (const carma_msgs__srv__RequestIndicatorControl_Response *)(untyped_value);
  *item = *value;
}

bool carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Event__response(
  void * untyped_member, size_t size)
{
  carma_msgs__srv__RequestIndicatorControl_Response__Sequence * member =
    (carma_msgs__srv__RequestIndicatorControl_Response__Sequence *)(untyped_member);
  carma_msgs__srv__RequestIndicatorControl_Response__Sequence__fini(member);
  return carma_msgs__srv__RequestIndicatorControl_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(carma_msgs__srv__RequestIndicatorControl_Event, info),  // bytes offset in struct
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
    offsetof(carma_msgs__srv__RequestIndicatorControl_Event, request),  // bytes offset in struct
    NULL,  // default value
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Event__request,  // size() function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Event__request,  // get_const(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Event__request,  // get(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Event__request,  // fetch(index, &value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Event__request,  // assign(index, value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Event__request  // resize(index) function pointer
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
    offsetof(carma_msgs__srv__RequestIndicatorControl_Event, response),  // bytes offset in struct
    NULL,  // default value
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__size_function__RequestIndicatorControl_Event__response,  // size() function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_const_function__RequestIndicatorControl_Event__response,  // get_const(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__get_function__RequestIndicatorControl_Event__response,  // get(index) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__fetch_function__RequestIndicatorControl_Event__response,  // fetch(index, &value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__assign_function__RequestIndicatorControl_Event__response,  // assign(index, value) function pointer
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__resize_function__RequestIndicatorControl_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_members = {
  "carma_msgs__srv",  // message namespace
  "RequestIndicatorControl_Event",  // message name
  3,  // number of fields
  sizeof(carma_msgs__srv__RequestIndicatorControl_Event),
  false,  // has_any_key_member_
  carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_member_array,  // message members
  carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_type_support_handle = {
  0,
  &carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_members,
  get_message_typesupport_handle_function,
  &carma_msgs__srv__RequestIndicatorControl_Event__get_type_hash,
  &carma_msgs__srv__RequestIndicatorControl_Event__get_type_description,
  &carma_msgs__srv__RequestIndicatorControl_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Event)() {
  carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Request)();
  carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Response)();
  if (!carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_type_support_handle.typesupport_identifier) {
    carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "carma_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "carma_msgs/srv/detail/request_indicator_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_members = {
  "carma_msgs__srv",  // service namespace
  "RequestIndicatorControl",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_type_support_handle,
  NULL,  // response message
  // carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle
  NULL  // event_message
  // carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle
};


static rosidl_service_type_support_t carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_type_support_handle = {
  0,
  &carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_members,
  get_service_typesupport_handle_function,
  &carma_msgs__srv__RequestIndicatorControl_Request__rosidl_typesupport_introspection_c__RequestIndicatorControl_Request_message_type_support_handle,
  &carma_msgs__srv__RequestIndicatorControl_Response__rosidl_typesupport_introspection_c__RequestIndicatorControl_Response_message_type_support_handle,
  &carma_msgs__srv__RequestIndicatorControl_Event__rosidl_typesupport_introspection_c__RequestIndicatorControl_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    carma_msgs,
    srv,
    RequestIndicatorControl
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    carma_msgs,
    srv,
    RequestIndicatorControl
  ),
  &carma_msgs__srv__RequestIndicatorControl__get_type_hash,
  &carma_msgs__srv__RequestIndicatorControl__get_type_description,
  &carma_msgs__srv__RequestIndicatorControl__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_carma_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl)(void) {
  if (!carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_type_support_handle.typesupport_identifier) {
    carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, carma_msgs, srv, RequestIndicatorControl_Event)()->data;
  }

  return &carma_msgs__srv__detail__request_indicator_control__rosidl_typesupport_introspection_c__RequestIndicatorControl_service_type_support_handle;
}
