// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection_maneuver_assist.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConnectionManeuverAssist & msg,
  std::ostream & out)
{
  out << "{";
  // member: connection_id
  {
    out << "connection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id, out);
    out << ", ";
  }

  // member: queue_length
  {
    out << "queue_length: ";
    rosidl_generator_traits::value_to_yaml(msg.queue_length, out);
    out << ", ";
  }

  // member: queue_length_exists
  {
    out << "queue_length_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.queue_length_exists, out);
    out << ", ";
  }

  // member: available_storage_length
  {
    out << "available_storage_length: ";
    rosidl_generator_traits::value_to_yaml(msg.available_storage_length, out);
    out << ", ";
  }

  // member: available_storage_length_exists
  {
    out << "available_storage_length_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.available_storage_length_exists, out);
    out << ", ";
  }

  // member: wait_on_stop
  {
    out << "wait_on_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_on_stop, out);
    out << ", ";
  }

  // member: wait_on_stop_exists
  {
    out << "wait_on_stop_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_on_stop_exists, out);
    out << ", ";
  }

  // member: ped_bicycle_detect
  {
    out << "ped_bicycle_detect: ";
    rosidl_generator_traits::value_to_yaml(msg.ped_bicycle_detect, out);
    out << ", ";
  }

  // member: ped_bicycle_detect_exists
  {
    out << "ped_bicycle_detect_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.ped_bicycle_detect_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConnectionManeuverAssist & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: connection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "connection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.connection_id, out);
    out << "\n";
  }

  // member: queue_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "queue_length: ";
    rosidl_generator_traits::value_to_yaml(msg.queue_length, out);
    out << "\n";
  }

  // member: queue_length_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "queue_length_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.queue_length_exists, out);
    out << "\n";
  }

  // member: available_storage_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_storage_length: ";
    rosidl_generator_traits::value_to_yaml(msg.available_storage_length, out);
    out << "\n";
  }

  // member: available_storage_length_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_storage_length_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.available_storage_length_exists, out);
    out << "\n";
  }

  // member: wait_on_stop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_on_stop: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_on_stop, out);
    out << "\n";
  }

  // member: wait_on_stop_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wait_on_stop_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.wait_on_stop_exists, out);
    out << "\n";
  }

  // member: ped_bicycle_detect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ped_bicycle_detect: ";
    rosidl_generator_traits::value_to_yaml(msg.ped_bicycle_detect, out);
    out << "\n";
  }

  // member: ped_bicycle_detect_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ped_bicycle_detect_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.ped_bicycle_detect_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConnectionManeuverAssist & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::ConnectionManeuverAssist>()
{
  return "j2735_v2x_msgs::msg::ConnectionManeuverAssist";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::ConnectionManeuverAssist>()
{
  return "j2735_v2x_msgs/msg/ConnectionManeuverAssist";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::ConnectionManeuverAssist>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::ConnectionManeuverAssist>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::ConnectionManeuverAssist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__TRAITS_HPP_
