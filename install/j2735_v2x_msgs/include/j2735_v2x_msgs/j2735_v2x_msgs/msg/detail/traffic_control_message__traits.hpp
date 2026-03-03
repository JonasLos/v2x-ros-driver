// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_message.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tcm_v01'
#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: tcm_v01
  {
    out << "tcm_v01: ";
    to_flow_style_yaml(msg.tcm_v01, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficControlMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << "\n";
  }

  // member: tcm_v01
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tcm_v01:\n";
    to_block_style_yaml(msg.tcm_v01, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlMessage & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlMessage & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlMessage>()
{
  return "j2735_v2x_msgs::msg::TrafficControlMessage";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlMessage>()
{
  return "j2735_v2x_msgs/msg/TrafficControlMessage";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlMessage>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::TrafficControlMessageV01>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlMessage>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::TrafficControlMessageV01>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE__TRAITS_HPP_
