// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/robot_enabled.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/msg/detail/robot_enabled__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotEnabled & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_active
  {
    out << "robot_active: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_active, out);
    out << ", ";
  }

  // member: robot_enabled
  {
    out << "robot_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_enabled, out);
    out << ", ";
  }

  // member: torque
  {
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << ", ";
  }

  // member: torque_validity
  {
    out << "torque_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_validity, out);
    out << ", ";
  }

  // member: brake_decel
  {
    out << "brake_decel: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_decel, out);
    out << ", ";
  }

  // member: brake_decel_validity
  {
    out << "brake_decel_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_decel_validity, out);
    out << ", ";
  }

  // member: throttle_effort
  {
    out << "throttle_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_effort, out);
    out << ", ";
  }

  // member: throttle_effort_validity
  {
    out << "throttle_effort_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_effort_validity, out);
    out << ", ";
  }

  // member: braking_effort
  {
    out << "braking_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.braking_effort, out);
    out << ", ";
  }

  // member: braking_effort_validity
  {
    out << "braking_effort_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.braking_effort_validity, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotEnabled & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_active: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_active, out);
    out << "\n";
  }

  // member: robot_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_enabled, out);
    out << "\n";
  }

  // member: torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque: ";
    rosidl_generator_traits::value_to_yaml(msg.torque, out);
    out << "\n";
  }

  // member: torque_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_validity, out);
    out << "\n";
  }

  // member: brake_decel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_decel: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_decel, out);
    out << "\n";
  }

  // member: brake_decel_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_decel_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.brake_decel_validity, out);
    out << "\n";
  }

  // member: throttle_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_effort, out);
    out << "\n";
  }

  // member: throttle_effort_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_effort_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle_effort_validity, out);
    out << "\n";
  }

  // member: braking_effort
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braking_effort: ";
    rosidl_generator_traits::value_to_yaml(msg.braking_effort, out);
    out << "\n";
  }

  // member: braking_effort_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "braking_effort_validity: ";
    rosidl_generator_traits::value_to_yaml(msg.braking_effort_validity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotEnabled & msg, bool use_flow_style = false)
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

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::msg::RobotEnabled & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::msg::RobotEnabled & msg)
{
  return carma_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::msg::RobotEnabled>()
{
  return "carma_driver_msgs::msg::RobotEnabled";
}

template<>
inline const char * name<carma_driver_msgs::msg::RobotEnabled>()
{
  return "carma_driver_msgs/msg/RobotEnabled";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::RobotEnabled>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::RobotEnabled>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::msg::RobotEnabled>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__TRAITS_HPP_
