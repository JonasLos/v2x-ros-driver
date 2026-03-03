// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'height'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__traits.hpp"
// Member 'bumpers'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__traits.hpp"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__traits.hpp"
// Member 'trailer_weight'
#include "j2735_v2x_msgs/msg/detail/trailer_weight__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleData & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    to_flow_style_yaml(msg.height, out);
    out << ", ";
  }

  // member: bumpers
  {
    out << "bumpers: ";
    to_flow_style_yaml(msg.bumpers, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    to_flow_style_yaml(msg.mass, out);
    out << ", ";
  }

  // member: trailer_weight
  {
    out << "trailer_weight: ";
    to_flow_style_yaml(msg.trailer_weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleData & msg,
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

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height:\n";
    to_block_style_yaml(msg.height, out, indentation + 2);
  }

  // member: bumpers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumpers:\n";
    to_block_style_yaml(msg.bumpers, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass:\n";
    to_block_style_yaml(msg.mass, out, indentation + 2);
  }

  // member: trailer_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trailer_weight:\n";
    to_block_style_yaml(msg.trailer_weight, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleData & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::VehicleData & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::VehicleData & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::VehicleData>()
{
  return "j2735_v2x_msgs::msg::VehicleData";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::VehicleData>()
{
  return "j2735_v2x_msgs/msg/VehicleData";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::VehicleData>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerWeight>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleMass>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::VehicleData>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerWeight>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleMass>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::VehicleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__TRAITS_HPP_
