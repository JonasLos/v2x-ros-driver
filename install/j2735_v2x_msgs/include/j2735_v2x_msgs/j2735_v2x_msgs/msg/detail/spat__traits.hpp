// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/spat.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPAT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/spat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_state_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SPAT & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: time_stamp_exists
  {
    out << "time_stamp_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp_exists, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: name_exists
  {
    out << "name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.name_exists, out);
    out << ", ";
  }

  // member: intersections
  {
    out << "intersections: ";
    to_flow_style_yaml(msg.intersections, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SPAT & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }

  // member: time_stamp_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp_exists, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: name_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.name_exists, out);
    out << "\n";
  }

  // member: intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersections:\n";
    to_block_style_yaml(msg.intersections, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SPAT & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::SPAT & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::SPAT & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SPAT>()
{
  return "j2735_v2x_msgs::msg::SPAT";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SPAT>()
{
  return "j2735_v2x_msgs/msg/SPAT";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SPAT>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SPAT>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SPAT>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPAT__TRAITS_HPP_
