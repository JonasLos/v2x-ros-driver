// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyDirectingTrafficSubType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_directing_traffic_sub_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/public_safety_directing_traffic_sub_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PublicSafetyDirectingTrafficSubType & msg,
  std::ostream & out)
{
  out << "{";
  // member: sub_types
  {
    out << "sub_types: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_types, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PublicSafetyDirectingTrafficSubType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sub_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_types: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_types, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PublicSafetyDirectingTrafficSubType & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>()
{
  return "j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>()
{
  return "j2735_v2x_msgs/msg/PublicSafetyDirectingTrafficSubType";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PublicSafetyDirectingTrafficSubType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_DIRECTING_TRAFFIC_SUB_TYPE__TRAITS_HPP_
