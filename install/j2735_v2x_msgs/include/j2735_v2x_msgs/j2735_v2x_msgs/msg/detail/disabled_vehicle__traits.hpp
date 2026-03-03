// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/disabled_vehicle.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status_details'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__traits.hpp"
// Member 'location_details'
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DisabledVehicle & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: status_details
  {
    out << "status_details: ";
    to_flow_style_yaml(msg.status_details, out);
    out << ", ";
  }

  // member: location_details
  {
    out << "location_details: ";
    to_flow_style_yaml(msg.location_details, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DisabledVehicle & msg,
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

  // member: status_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_details:\n";
    to_block_style_yaml(msg.status_details, out, indentation + 2);
  }

  // member: location_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location_details:\n";
    to_block_style_yaml(msg.location_details, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DisabledVehicle & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::DisabledVehicle & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::DisabledVehicle & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::DisabledVehicle>()
{
  return "j2735_v2x_msgs::msg::DisabledVehicle";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::DisabledVehicle>()
{
  return "j2735_v2x_msgs/msg/DisabledVehicle";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::DisabledVehicle>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_fixed_size<j2735_v2x_msgs::msg::ITIScodes>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::DisabledVehicle>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::ITISGenericLocations>::value && has_bounded_size<j2735_v2x_msgs::msg::ITIScodes>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::DisabledVehicle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DISABLED_VEHICLE__TRAITS_HPP_
