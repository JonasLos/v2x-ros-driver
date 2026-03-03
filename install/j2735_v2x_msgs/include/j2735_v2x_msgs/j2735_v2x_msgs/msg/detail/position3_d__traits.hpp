// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/Position3D.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position3_d.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/position3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Position3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: elevation_exists
  {
    out << "elevation_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Position3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: elevation_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Position3D & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::Position3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::Position3D & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::Position3D>()
{
  return "j2735_v2x_msgs::msg::Position3D";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::Position3D>()
{
  return "j2735_v2x_msgs/msg/Position3D";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::Position3D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::Position3D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::Position3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION3_D__TRAITS_HPP_
