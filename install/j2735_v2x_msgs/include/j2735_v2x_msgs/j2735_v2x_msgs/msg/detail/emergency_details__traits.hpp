// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/emergency_details.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'siren_use'
#include "j2735_v2x_msgs/msg/detail/siren_in_use__traits.hpp"
// Member 'lights_use'
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__traits.hpp"
// Member 'multi'
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__traits.hpp"
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/privileged_events__traits.hpp"
// Member 'response_type'
#include "j2735_v2x_msgs/msg/detail/response_type__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EmergencyDetails & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: ssp_index
  {
    out << "ssp_index: ";
    rosidl_generator_traits::value_to_yaml(msg.ssp_index, out);
    out << ", ";
  }

  // member: siren_use
  {
    out << "siren_use: ";
    to_flow_style_yaml(msg.siren_use, out);
    out << ", ";
  }

  // member: lights_use
  {
    out << "lights_use: ";
    to_flow_style_yaml(msg.lights_use, out);
    out << ", ";
  }

  // member: multi
  {
    out << "multi: ";
    to_flow_style_yaml(msg.multi, out);
    out << ", ";
  }

  // member: events
  {
    out << "events: ";
    to_flow_style_yaml(msg.events, out);
    out << ", ";
  }

  // member: response_type
  {
    out << "response_type: ";
    to_flow_style_yaml(msg.response_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EmergencyDetails & msg,
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

  // member: ssp_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssp_index: ";
    rosidl_generator_traits::value_to_yaml(msg.ssp_index, out);
    out << "\n";
  }

  // member: siren_use
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "siren_use:\n";
    to_block_style_yaml(msg.siren_use, out, indentation + 2);
  }

  // member: lights_use
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lights_use:\n";
    to_block_style_yaml(msg.lights_use, out, indentation + 2);
  }

  // member: multi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "multi:\n";
    to_block_style_yaml(msg.multi, out, indentation + 2);
  }

  // member: events
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "events:\n";
    to_block_style_yaml(msg.events, out, indentation + 2);
  }

  // member: response_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_type:\n";
    to_block_style_yaml(msg.response_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EmergencyDetails & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::EmergencyDetails & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::EmergencyDetails & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::EmergencyDetails>()
{
  return "j2735_v2x_msgs::msg::EmergencyDetails";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::EmergencyDetails>()
{
  return "j2735_v2x_msgs/msg/EmergencyDetails";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::EmergencyDetails>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LightbarInUse>::value && has_fixed_size<j2735_v2x_msgs::msg::MultiVehicleResponse>::value && has_fixed_size<j2735_v2x_msgs::msg::PrivilegedEvents>::value && has_fixed_size<j2735_v2x_msgs::msg::ResponseType>::value && has_fixed_size<j2735_v2x_msgs::msg::SirenInUse>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::EmergencyDetails>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LightbarInUse>::value && has_bounded_size<j2735_v2x_msgs::msg::MultiVehicleResponse>::value && has_bounded_size<j2735_v2x_msgs::msg::PrivilegedEvents>::value && has_bounded_size<j2735_v2x_msgs::msg::ResponseType>::value && has_bounded_size<j2735_v2x_msgs::msg::SirenInUse>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::EmergencyDetails>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__TRAITS_HPP_
