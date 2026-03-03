// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_safety_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/vehicle_event_flags__traits.hpp"
// Member 'path_history'
#include "j2735_v2x_msgs/msg/detail/path_history__traits.hpp"
// Member 'path_prediction'
#include "j2735_v2x_msgs/msg/detail/path_prediction__traits.hpp"
// Member 'lights'
#include "j2735_v2x_msgs/msg/detail/exterior_lights__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleSafetyExtensions & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: events
  {
    out << "events: ";
    to_flow_style_yaml(msg.events, out);
    out << ", ";
  }

  // member: path_history
  {
    out << "path_history: ";
    to_flow_style_yaml(msg.path_history, out);
    out << ", ";
  }

  // member: path_prediction
  {
    out << "path_prediction: ";
    to_flow_style_yaml(msg.path_prediction, out);
    out << ", ";
  }

  // member: lights
  {
    out << "lights: ";
    to_flow_style_yaml(msg.lights, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleSafetyExtensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: presence_vector
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << "\n";
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events:\n";
    to_block_style_yaml(msg.events, out, indentation + 2);
  }

  // member: path_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_history:\n";
    to_block_style_yaml(msg.path_history, out, indentation + 2);
  }

  // member: path_prediction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path_prediction:\n";
    to_block_style_yaml(msg.path_prediction, out, indentation + 2);
  }

  // member: lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lights:\n";
    to_block_style_yaml(msg.lights, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleSafetyExtensions & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::VehicleSafetyExtensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::VehicleSafetyExtensions & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::VehicleSafetyExtensions>()
{
  return "j2735_v2x_msgs::msg::VehicleSafetyExtensions";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::VehicleSafetyExtensions>()
{
  return "j2735_v2x_msgs/msg/VehicleSafetyExtensions";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ExteriorLights>::value && has_fixed_size<j2735_v2x_msgs::msg::PathHistory>::value && has_fixed_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleEventFlags>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ExteriorLights>::value && has_bounded_size<j2735_v2x_msgs::msg::PathHistory>::value && has_bounded_size<j2735_v2x_msgs::msg::PathPrediction>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleEventFlags>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::VehicleSafetyExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__TRAITS_HPP_
