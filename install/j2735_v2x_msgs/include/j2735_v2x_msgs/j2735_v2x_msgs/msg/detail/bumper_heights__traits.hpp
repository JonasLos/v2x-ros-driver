// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bumper_heights.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'front'
// Member 'rear'
#include "j2735_v2x_msgs/msg/detail/bumper_height__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BumperHeights & msg,
  std::ostream & out)
{
  out << "{";
  // member: front
  {
    out << "front: ";
    to_flow_style_yaml(msg.front, out);
    out << ", ";
  }

  // member: rear
  {
    out << "rear: ";
    to_flow_style_yaml(msg.rear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BumperHeights & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front:\n";
    to_block_style_yaml(msg.front, out, indentation + 2);
  }

  // member: rear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear:\n";
    to_block_style_yaml(msg.rear, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BumperHeights & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::BumperHeights & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::BumperHeights & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BumperHeights>()
{
  return "j2735_v2x_msgs::msg::BumperHeights";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BumperHeights>()
{
  return "j2735_v2x_msgs/msg/BumperHeights";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BumperHeights>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BumperHeight>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BumperHeights>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BumperHeight>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BumperHeights>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__TRAITS_HPP_
