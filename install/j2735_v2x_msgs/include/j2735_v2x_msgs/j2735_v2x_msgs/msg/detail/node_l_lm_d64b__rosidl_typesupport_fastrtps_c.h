// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice
#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
bool cdr_serialize_j2735_v2x_msgs__msg__NodeLLmD64b(
  const j2735_v2x_msgs__msg__NodeLLmD64b * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
bool cdr_deserialize_j2735_v2x_msgs__msg__NodeLLmD64b(
  eprosima::fastcdr::Cdr &,
  j2735_v2x_msgs__msg__NodeLLmD64b * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_j2735_v2x_msgs__msg__NodeLLmD64b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
bool cdr_serialize_key_j2735_v2x_msgs__msg__NodeLLmD64b(
  const j2735_v2x_msgs__msg__NodeLLmD64b * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t get_serialized_size_key_j2735_v2x_msgs__msg__NodeLLmD64b(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
size_t max_serialized_size_key_j2735_v2x_msgs__msg__NodeLLmD64b(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_j2735_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, j2735_v2x_msgs, msg, NodeLLmD64b)();

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
