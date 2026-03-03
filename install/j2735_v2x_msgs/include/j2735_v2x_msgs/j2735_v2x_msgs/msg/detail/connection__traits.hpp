// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'connecting_lane'
#include "j2735_v2x_msgs/msg/detail/connecting_lane__traits.hpp"
// Member 'remote_intersection'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Connection & msg,
  std::ostream & out)
{
  out << "{";
  // member: connecting_lane
  {
    out << "connecting_lane: ";
    to_flow_style_yaml(msg.connecting_lane, out);
    out << ", ";
  }

  // member: remote_intersection
  {
    out << "remote_intersection: ";
    to_flow_style_yaml(msg.remote_intersection, out);
    out << ", ";
  }

  // member: remote_intersection_exists
  {
    out << "remote_intersection_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_intersection_exists, out);
    out << ", ";
  }

  // member: signal_group
  {
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << ", ";
  }

  // member: signal_group_exists
  {
    out << "signal_group_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group_exists, out);
    out << ", ";
  }

  // member: user_class
  {
    out << "user_class: ";
    rosidl_generator_traits::value_to_yaml(msg.user_class, out);
    out << ", ";
  }

  // member: user_class_exists
  {
    out << "user_class_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.user_class_exists, out);
    out << ", ";
  }

  // member: connection_id
  {
    out << "connection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id, out);
    out << ", ";
  }

  // member: connection_id_exists
  {
    out << "connection_id_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connecting_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connecting_lane:\n";
    to_block_style_yaml(msg.connecting_lane, out, indentation + 2);
  }

  // member: remote_intersection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_intersection:\n";
    to_block_style_yaml(msg.remote_intersection, out, indentation + 2);
  }

  // member: remote_intersection_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_intersection_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_intersection_exists, out);
    out << "\n";
  }

  // member: signal_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << "\n";
  }

  // member: signal_group_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_group_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group_exists, out);
    out << "\n";
  }

  // member: user_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_class: ";
    rosidl_generator_traits::value_to_yaml(msg.user_class, out);
    out << "\n";
  }

  // member: user_class_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_class_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.user_class_exists, out);
    out << "\n";
  }

  // member: connection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id, out);
    out << "\n";
  }

  // member: connection_id_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_id_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Connection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace j2735_v2x_msgs

namespace rosidl_generator_traits
{

[[deprecated("use j2735_v2x_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const j2735_v2x_msgs::msg::Connection & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::Connection & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::Connection>()
{
  return "j2735_v2x_msgs::msg::Connection";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::Connection>()
{
  return "j2735_v2x_msgs/msg/Connection";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::Connection>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ConnectingLane>::value && has_fixed_size<j2735_v2x_msgs::msg::IntersectionReferenceID>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::Connection>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ConnectingLane>::value && has_bounded_size<j2735_v2x_msgs::msg::IntersectionReferenceID>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::Connection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__TRAITS_HPP_
