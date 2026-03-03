// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/PropelledInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/propelled_information.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/propelled_information__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'human'
#include "j2735_v2x_msgs/msg/detail/human_propelled_type__traits.hpp"
// Member 'animal'
#include "j2735_v2x_msgs/msg/detail/animal_propelled_type__traits.hpp"
// Member 'motor'
#include "j2735_v2x_msgs/msg/detail/motorized_propelled_type__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PropelledInformation & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: human
  {
    out << "human: ";
    to_flow_style_yaml(msg.human, out);
    out << ", ";
  }

  // member: animal
  {
    out << "animal: ";
    to_flow_style_yaml(msg.animal, out);
    out << ", ";
  }

  // member: motor
  {
    out << "motor: ";
    to_flow_style_yaml(msg.motor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PropelledInformation & msg,
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

  // member: human
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "human:\n";
    to_block_style_yaml(msg.human, out, indentation + 2);
  }

  // member: animal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "animal:\n";
    to_block_style_yaml(msg.animal, out, indentation + 2);
  }

  // member: motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor:\n";
    to_block_style_yaml(msg.motor, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PropelledInformation & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::PropelledInformation & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::PropelledInformation & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::PropelledInformation>()
{
  return "j2735_v2x_msgs::msg::PropelledInformation";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::PropelledInformation>()
{
  return "j2735_v2x_msgs/msg/PropelledInformation";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::PropelledInformation>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AnimalPropelledType>::value && has_fixed_size<j2735_v2x_msgs::msg::HumanPropelledType>::value && has_fixed_size<j2735_v2x_msgs::msg::MotorizedPropelledType>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::PropelledInformation>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AnimalPropelledType>::value && has_bounded_size<j2735_v2x_msgs::msg::HumanPropelledType>::value && has_bounded_size<j2735_v2x_msgs::msg::MotorizedPropelledType>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::PropelledInformation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PROPELLED_INFORMATION__TRAITS_HPP_
