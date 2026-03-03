// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/special_vehicle_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_alerts'
#include "j2735_v2x_msgs/msg/detail/emergency_details__traits.hpp"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/event_description__traits.hpp"
// Member 'trailers'
#include "j2735_v2x_msgs/msg/detail/trailer_data__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpecialVehicleExtensions & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: vehicle_alerts
  {
    out << "vehicle_alerts: ";
    to_flow_style_yaml(msg.vehicle_alerts, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
    out << ", ";
  }

  // member: trailers
  {
    out << "trailers: ";
    to_flow_style_yaml(msg.trailers, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpecialVehicleExtensions & msg,
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

  // member: vehicle_alerts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_alerts:\n";
    to_block_style_yaml(msg.vehicle_alerts, out, indentation + 2);
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }

  // member: trailers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trailers:\n";
    to_block_style_yaml(msg.trailers, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpecialVehicleExtensions & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::SpecialVehicleExtensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::SpecialVehicleExtensions & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SpecialVehicleExtensions>()
{
  return "j2735_v2x_msgs::msg::SpecialVehicleExtensions";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SpecialVehicleExtensions>()
{
  return "j2735_v2x_msgs/msg/SpecialVehicleExtensions";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SpecialVehicleExtensions>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::EmergencyDetails>::value && has_fixed_size<j2735_v2x_msgs::msg::EventDescription>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerData>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SpecialVehicleExtensions>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::EmergencyDetails>::value && has_bounded_size<j2735_v2x_msgs::msg::EventDescription>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerData>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SpecialVehicleExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
