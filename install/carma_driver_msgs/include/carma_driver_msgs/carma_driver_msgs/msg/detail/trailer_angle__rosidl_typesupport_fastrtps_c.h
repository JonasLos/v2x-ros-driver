// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from carma_driver_msgs:msg/TrailerAngle.idl
// generated code does not contain a copyright notice
#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "carma_driver_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_driver_msgs/msg/detail/trailer_angle__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
bool cdr_serialize_carma_driver_msgs__msg__TrailerAngle(
  const carma_driver_msgs__msg__TrailerAngle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
bool cdr_deserialize_carma_driver_msgs__msg__TrailerAngle(
  eprosima::fastcdr::Cdr &,
  carma_driver_msgs__msg__TrailerAngle * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_carma_driver_msgs__msg__TrailerAngle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_carma_driver_msgs__msg__TrailerAngle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
bool cdr_serialize_key_carma_driver_msgs__msg__TrailerAngle(
  const carma_driver_msgs__msg__TrailerAngle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t get_serialized_size_key_carma_driver_msgs__msg__TrailerAngle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
size_t max_serialized_size_key_carma_driver_msgs__msg__TrailerAngle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_driver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_driver_msgs, msg, TrailerAngle)();

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TRAILER_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
