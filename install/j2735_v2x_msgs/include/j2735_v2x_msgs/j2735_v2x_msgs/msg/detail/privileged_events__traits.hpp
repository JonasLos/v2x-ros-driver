// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/privileged_events.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/privileged_events__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'event'
#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PrivilegedEvents & msg,
  std::ostream & out)
{
  out << "{";
  // member: ssp_index
  {
    out << "ssp_index: ";
    rosidl_generator_traits::value_to_yaml(msg.ssp_index, out);
    out << ", ";
  }

  // member: event
  {
    out << "event: ";
    to_flow_style_yaml(msg.event, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrivilegedEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ssp_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssp_index: ";
    rosidl_generator_traits::value_to_yaml(msg.ssp_index, out);
    out << "\n";
  }

  // member: event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event:\n";
    to_block_style_yaml(msg.event, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrivilegedEvents & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PrivilegedEvents & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PrivilegedEvents & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PrivilegedEvents>()
{
  return "j2735_v2x_msgs::msg::PrivilegedEvents";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PrivilegedEvents>()
{
  return "j2735_v2x_msgs/msg/PrivilegedEvents";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PrivilegedEvents>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::PrivilegedEventFlags>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PrivilegedEvents>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::PrivilegedEventFlags>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PrivilegedEvents>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__TRAITS_HPP_
