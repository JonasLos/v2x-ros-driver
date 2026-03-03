// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/movement_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'state_time_speed'
#include "j2735_v2x_msgs/msg/detail/movement_event_list__traits.hpp"
// Member 'maneuver_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovementState & msg,
  std::ostream & out)
{
  out << "{";
  // member: movement_name
  {
    out << "movement_name: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_name, out);
    out << ", ";
  }

  // member: movement_name_exists
  {
    out << "movement_name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_name_exists, out);
    out << ", ";
  }

  // member: signal_group
  {
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << ", ";
  }

  // member: state_time_speed
  {
    out << "state_time_speed: ";
    to_flow_style_yaml(msg.state_time_speed, out);
    out << ", ";
  }

  // member: maneuver_assist_list
  {
    out << "maneuver_assist_list: ";
    to_flow_style_yaml(msg.maneuver_assist_list, out);
    out << ", ";
  }

  // member: maneuver_assist_list_exists
  {
    out << "maneuver_assist_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_assist_list_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: movement_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement_name: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_name, out);
    out << "\n";
  }

  // member: movement_name_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement_name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_name_exists, out);
    out << "\n";
  }

  // member: signal_group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_group: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_group, out);
    out << "\n";
  }

  // member: state_time_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_time_speed:\n";
    to_block_style_yaml(msg.state_time_speed, out, indentation + 2);
  }

  // member: maneuver_assist_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_assist_list:\n";
    to_block_style_yaml(msg.maneuver_assist_list, out, indentation + 2);
  }

  // member: maneuver_assist_list_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuver_assist_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuver_assist_list_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovementState & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::MovementState & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::MovementState & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::MovementState>()
{
  return "j2735_v2x_msgs::msg::MovementState";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::MovementState>()
{
  return "j2735_v2x_msgs/msg/MovementState";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::MovementState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::MovementState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::MovementState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__TRAITS_HPP_
