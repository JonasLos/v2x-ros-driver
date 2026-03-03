// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_set.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/wiper_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status_front'
// Member 'status_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_status__traits.hpp"
// Member 'rate_front'
// Member 'rate_rear'
#include "j2735_v2x_msgs/msg/detail/wiper_rate__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WiperSet & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: status_front
  {
    out << "status_front: ";
    to_flow_style_yaml(msg.status_front, out);
    out << ", ";
  }

  // member: rate_front
  {
    out << "rate_front: ";
    to_flow_style_yaml(msg.rate_front, out);
    out << ", ";
  }

  // member: status_rear
  {
    out << "status_rear: ";
    to_flow_style_yaml(msg.status_rear, out);
    out << ", ";
  }

  // member: rate_rear
  {
    out << "rate_rear: ";
    to_flow_style_yaml(msg.rate_rear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WiperSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: presence_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << "\n";
  }

  // member: status_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_front:\n";
    to_block_style_yaml(msg.status_front, out, indentation + 2);
  }

  // member: rate_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate_front:\n";
    to_block_style_yaml(msg.rate_front, out, indentation + 2);
  }

  // member: status_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_rear:\n";
    to_block_style_yaml(msg.status_rear, out, indentation + 2);
  }

  // member: rate_rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rate_rear:\n";
    to_block_style_yaml(msg.rate_rear, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WiperSet & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::WiperSet & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::WiperSet & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::WiperSet>()
{
  return "j2735_v2x_msgs::msg::WiperSet";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::WiperSet>()
{
  return "j2735_v2x_msgs/msg/WiperSet";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::WiperSet>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::WiperRate>::value && has_fixed_size<j2735_v2x_msgs::msg::WiperStatus>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::WiperSet>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::WiperRate>::value && has_bounded_size<j2735_v2x_msgs::msg::WiperStatus>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::WiperSet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__TRAITS_HPP_
