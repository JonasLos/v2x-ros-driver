// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/rtcm_header.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/rtcm_header__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__traits.hpp"
// Member 'ant_offset_x'
#include "j2735_v2x_msgs/msg/detail/offset_b12__traits.hpp"
// Member 'ant_offset_y'
#include "j2735_v2x_msgs/msg/detail/offset_b09__traits.hpp"
// Member 'ant_offset_z'
#include "j2735_v2x_msgs/msg/detail/offset_b10__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RTCMHeader & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: ant_offset_x
  {
    out << "ant_offset_x: ";
    to_flow_style_yaml(msg.ant_offset_x, out);
    out << ", ";
  }

  // member: ant_offset_y
  {
    out << "ant_offset_y: ";
    to_flow_style_yaml(msg.ant_offset_y, out);
    out << ", ";
  }

  // member: ant_offset_z
  {
    out << "ant_offset_z: ";
    to_flow_style_yaml(msg.ant_offset_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RTCMHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: ant_offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_offset_x:\n";
    to_block_style_yaml(msg.ant_offset_x, out, indentation + 2);
  }

  // member: ant_offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_offset_y:\n";
    to_block_style_yaml(msg.ant_offset_y, out, indentation + 2);
  }

  // member: ant_offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ant_offset_z:\n";
    to_block_style_yaml(msg.ant_offset_z, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RTCMHeader & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::RTCMHeader & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::RTCMHeader & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::RTCMHeader>()
{
  return "j2735_v2x_msgs::msg::RTCMHeader";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::RTCMHeader>()
{
  return "j2735_v2x_msgs/msg/RTCMHeader";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::RTCMHeader>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::GNSSStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetB09>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetB10>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetB12>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::RTCMHeader>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::GNSSStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetB09>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetB10>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetB12>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::RTCMHeader>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__TRAITS_HPP_
