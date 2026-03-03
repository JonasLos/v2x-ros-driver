// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_classification.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'key_type'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__traits.hpp"
// Member 'role'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__traits.hpp"
// Member 'hpms_type'
#include "j2735_v2x_msgs/msg/detail/vehicle_type__traits.hpp"
// Member 'vehicle_type'
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__traits.hpp"
// Member 'response_equip'
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__traits.hpp"
// Member 'responder_type'
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__traits.hpp"
// Member 'fuel_type'
#include "j2735_v2x_msgs/msg/detail/fuel_type__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleClassification & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: key_type
  {
    out << "key_type: ";
    to_flow_style_yaml(msg.key_type, out);
    out << ", ";
  }

  // member: role
  {
    out << "role: ";
    to_flow_style_yaml(msg.role, out);
    out << ", ";
  }

  // member: iso3833
  {
    out << "iso3833: ";
    rosidl_generator_traits::value_to_yaml(msg.iso3833, out);
    out << ", ";
  }

  // member: hpms_type
  {
    out << "hpms_type: ";
    to_flow_style_yaml(msg.hpms_type, out);
    out << ", ";
  }

  // member: vehicle_type
  {
    out << "vehicle_type: ";
    to_flow_style_yaml(msg.vehicle_type, out);
    out << ", ";
  }

  // member: response_equip
  {
    out << "response_equip: ";
    to_flow_style_yaml(msg.response_equip, out);
    out << ", ";
  }

  // member: responder_type
  {
    out << "responder_type: ";
    to_flow_style_yaml(msg.responder_type, out);
    out << ", ";
  }

  // member: fuel_type
  {
    out << "fuel_type: ";
    to_flow_style_yaml(msg.fuel_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleClassification & msg,
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

  // member: key_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key_type:\n";
    to_block_style_yaml(msg.key_type, out, indentation + 2);
  }

  // member: role
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "role:\n";
    to_block_style_yaml(msg.role, out, indentation + 2);
  }

  // member: iso3833
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iso3833: ";
    rosidl_generator_traits::value_to_yaml(msg.iso3833, out);
    out << "\n";
  }

  // member: hpms_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hpms_type:\n";
    to_block_style_yaml(msg.hpms_type, out, indentation + 2);
  }

  // member: vehicle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_type:\n";
    to_block_style_yaml(msg.vehicle_type, out, indentation + 2);
  }

  // member: response_equip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response_equip:\n";
    to_block_style_yaml(msg.response_equip, out, indentation + 2);
  }

  // member: responder_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responder_type:\n";
    to_block_style_yaml(msg.responder_type, out, indentation + 2);
  }

  // member: fuel_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fuel_type:\n";
    to_block_style_yaml(msg.fuel_type, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleClassification & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::VehicleClassification & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::VehicleClassification & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::VehicleClassification>()
{
  return "j2735_v2x_msgs::msg::VehicleClassification";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::VehicleClassification>()
{
  return "j2735_v2x_msgs/msg/VehicleClassification";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::VehicleClassification>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BasicVehicleClass>::value && has_fixed_size<j2735_v2x_msgs::msg::BasicVehicleRole>::value && has_fixed_size<j2735_v2x_msgs::msg::FuelType>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISResponderGroupAffected>::value && has_fixed_size<j2735_v2x_msgs::msg::ITISVehicleGroupAffected>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleType>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::VehicleClassification>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BasicVehicleClass>::value && has_bounded_size<j2735_v2x_msgs::msg::BasicVehicleRole>::value && has_bounded_size<j2735_v2x_msgs::msg::FuelType>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISIncidentResponseEquipment>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISResponderGroupAffected>::value && has_bounded_size<j2735_v2x_msgs::msg::ITISVehicleGroupAffected>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleType>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::VehicleClassification>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__TRAITS_HPP_
