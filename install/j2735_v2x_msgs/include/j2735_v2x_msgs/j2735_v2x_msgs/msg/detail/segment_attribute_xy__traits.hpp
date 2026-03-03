// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/segment_attribute_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SegmentAttributeXY & msg,
  std::ostream & out)
{
  out << "{";
  // member: segment_attribute_xy
  {
    out << "segment_attribute_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_attribute_xy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SegmentAttributeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: segment_attribute_xy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "segment_attribute_xy: ";
    rosidl_generator_traits::value_to_yaml(msg.segment_attribute_xy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SegmentAttributeXY & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::SegmentAttributeXY & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::SegmentAttributeXY & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SegmentAttributeXY>()
{
  return "j2735_v2x_msgs::msg::SegmentAttributeXY";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SegmentAttributeXY>()
{
  return "j2735_v2x_msgs/msg/SegmentAttributeXY";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SegmentAttributeXY>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SegmentAttributeXY>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SegmentAttributeXY>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__TRAITS_HPP_
