// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_user_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/restriction_user_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RestrictionUserType & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: basic_type
  {
    out << "basic_type: ";
    to_flow_style_yaml(msg.basic_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RestrictionUserType & msg,
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

  // member: basic_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "basic_type:\n";
    to_block_style_yaml(msg.basic_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RestrictionUserType & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::RestrictionUserType & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::RestrictionUserType & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::RestrictionUserType>()
{
  return "j2735_v2x_msgs::msg::RestrictionUserType";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::RestrictionUserType>()
{
  return "j2735_v2x_msgs/msg/RestrictionUserType";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::RestrictionUserType>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::RestrictionAppliesTo>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::RestrictionUserType>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::RestrictionAppliesTo>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::RestrictionUserType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__TRAITS_HPP_
