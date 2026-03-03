// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_event.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/movement_event__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'event_state'
#include "j2735_v2x_msgs/msg/detail/movement_phase_state__traits.hpp"
// Member 'timing'
#include "j2735_v2x_msgs/msg/detail/time_change_details__traits.hpp"
// Member 'speeds'
#include "j2735_v2x_msgs/msg/detail/advisory_speed_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovementEvent & msg,
  std::ostream & out)
{
  out << "{";
  // member: event_state
  {
    out << "event_state: ";
    to_flow_style_yaml(msg.event_state, out);
    out << ", ";
  }

  // member: timing
  {
    out << "timing: ";
    to_flow_style_yaml(msg.timing, out);
    out << ", ";
  }

  // member: timing_exists
  {
    out << "timing_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.timing_exists, out);
    out << ", ";
  }

  // member: speeds
  {
    out << "speeds: ";
    to_flow_style_yaml(msg.speeds, out);
    out << ", ";
  }

  // member: speeds_exists
  {
    out << "speeds_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.speeds_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MovementEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: event_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "event_state:\n";
    to_block_style_yaml(msg.event_state, out, indentation + 2);
  }

  // member: timing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timing:\n";
    to_block_style_yaml(msg.timing, out, indentation + 2);
  }

  // member: timing_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timing_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.timing_exists, out);
    out << "\n";
  }

  // member: speeds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speeds:\n";
    to_block_style_yaml(msg.speeds, out, indentation + 2);
  }

  // member: speeds_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speeds_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.speeds_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovementEvent & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::MovementEvent & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::MovementEvent & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::MovementEvent>()
{
  return "j2735_v2x_msgs::msg::MovementEvent";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::MovementEvent>()
{
  return "j2735_v2x_msgs/msg/MovementEvent";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::MovementEvent>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::AdvisorySpeedList>::value && has_fixed_size<j2735_v2x_msgs::msg::MovementPhaseState>::value && has_fixed_size<j2735_v2x_msgs::msg::TimeChangeDetails>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::MovementEvent>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::AdvisorySpeedList>::value && has_bounded_size<j2735_v2x_msgs::msg::MovementPhaseState>::value && has_bounded_size<j2735_v2x_msgs::msg::TimeChangeDetails>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::MovementEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__TRAITS_HPP_
