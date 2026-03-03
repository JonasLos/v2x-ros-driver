// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_part_ii_extension.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle_safety_extensions'
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__traits.hpp"
// Member 'special_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__traits.hpp"
// Member 'supplemental_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSMPartIIExtension & msg,
  std::ostream & out)
{
  out << "{";
  // member: part_ii_id
  {
    out << "part_ii_id: ";
    rosidl_generator_traits::value_to_yaml(msg.part_ii_id, out);
    out << ", ";
  }

  // member: vehicle_safety_extensions
  {
    out << "vehicle_safety_extensions: ";
    to_flow_style_yaml(msg.vehicle_safety_extensions, out);
    out << ", ";
  }

  // member: special_vehicle_extensions
  {
    out << "special_vehicle_extensions: ";
    to_flow_style_yaml(msg.special_vehicle_extensions, out);
    out << ", ";
  }

  // member: supplemental_vehicle_extensions
  {
    out << "supplemental_vehicle_extensions: ";
    to_flow_style_yaml(msg.supplemental_vehicle_extensions, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BSMPartIIExtension & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: part_ii_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_ii_id: ";
    rosidl_generator_traits::value_to_yaml(msg.part_ii_id, out);
    out << "\n";
  }

  // member: vehicle_safety_extensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_safety_extensions:\n";
    to_block_style_yaml(msg.vehicle_safety_extensions, out, indentation + 2);
  }

  // member: special_vehicle_extensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "special_vehicle_extensions:\n";
    to_block_style_yaml(msg.special_vehicle_extensions, out, indentation + 2);
  }

  // member: supplemental_vehicle_extensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supplemental_vehicle_extensions:\n";
    to_block_style_yaml(msg.supplemental_vehicle_extensions, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSMPartIIExtension & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::BSMPartIIExtension & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::BSMPartIIExtension & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSMPartIIExtension>()
{
  return "j2735_v2x_msgs::msg::BSMPartIIExtension";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSMPartIIExtension>()
{
  return "j2735_v2x_msgs/msg/BSMPartIIExtension";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSMPartIIExtension>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::SpecialVehicleExtensions>::value && has_fixed_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSMPartIIExtension>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::SpecialVehicleExtensions>::value && has_bounded_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleSafetyExtensions>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSMPartIIExtension>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__TRAITS_HPP_
