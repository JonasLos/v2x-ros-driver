// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_system_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'wheel_brakes'
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__traits.hpp"
// Member 'traction'
#include "j2735_v2x_msgs/msg/detail/traction_control_status__traits.hpp"
// Member 'abs'
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__traits.hpp"
// Member 'scs'
#include "j2735_v2x_msgs/msg/detail/stability_control_status__traits.hpp"
// Member 'brake_boost'
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__traits.hpp"
// Member 'aux_brakes'
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BrakeSystemStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: wheel_brakes
  {
    out << "wheel_brakes: ";
    to_flow_style_yaml(msg.wheel_brakes, out);
    out << ", ";
  }

  // member: traction
  {
    out << "traction: ";
    to_flow_style_yaml(msg.traction, out);
    out << ", ";
  }

  // member: abs
  {
    out << "abs: ";
    to_flow_style_yaml(msg.abs, out);
    out << ", ";
  }

  // member: scs
  {
    out << "scs: ";
    to_flow_style_yaml(msg.scs, out);
    out << ", ";
  }

  // member: brake_boost
  {
    out << "brake_boost: ";
    to_flow_style_yaml(msg.brake_boost, out);
    out << ", ";
  }

  // member: aux_brakes
  {
    out << "aux_brakes: ";
    to_flow_style_yaml(msg.aux_brakes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BrakeSystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wheel_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_brakes:\n";
    to_block_style_yaml(msg.wheel_brakes, out, indentation + 2);
  }

  // member: traction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traction:\n";
    to_block_style_yaml(msg.traction, out, indentation + 2);
  }

  // member: abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs:\n";
    to_block_style_yaml(msg.abs, out, indentation + 2);
  }

  // member: scs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scs:\n";
    to_block_style_yaml(msg.scs, out, indentation + 2);
  }

  // member: brake_boost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_boost:\n";
    to_block_style_yaml(msg.brake_boost, out, indentation + 2);
  }

  // member: aux_brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux_brakes:\n";
    to_block_style_yaml(msg.aux_brakes, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BrakeSystemStatus & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::BrakeSystemStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::BrakeSystemStatus & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BrakeSystemStatus>()
{
  return "j2735_v2x_msgs::msg::BrakeSystemStatus";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BrakeSystemStatus>()
{
  return "j2735_v2x_msgs/msg/BrakeSystemStatus";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BrakeSystemStatus>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AntiLockBrakeStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::AuxiliaryBrakeStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::BrakeAppliedStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::BrakeBoostApplied>::value && has_fixed_size<j2735_v2x_msgs::msg::StabilityControlStatus>::value && has_fixed_size<j2735_v2x_msgs::msg::TractionControlStatus>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BrakeSystemStatus>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AntiLockBrakeStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::AuxiliaryBrakeStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::BrakeAppliedStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::BrakeBoostApplied>::value && has_bounded_size<j2735_v2x_msgs::msg::StabilityControlStatus>::value && has_bounded_size<j2735_v2x_msgs::msg::TractionControlStatus>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BrakeSystemStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__TRAITS_HPP_
