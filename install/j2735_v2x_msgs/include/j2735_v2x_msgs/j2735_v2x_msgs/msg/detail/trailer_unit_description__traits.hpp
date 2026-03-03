// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_unit_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'is_dolly'
#include "j2735_v2x_msgs/msg/detail/is_dolly__traits.hpp"
// Member 'width'
#include "j2735_v2x_msgs/msg/detail/vehicle_width__traits.hpp"
// Member 'length'
#include "j2735_v2x_msgs/msg/detail/vehicle_length__traits.hpp"
// Member 'height'
// Member 'center_of_gravity'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__traits.hpp"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/trailer_mass__traits.hpp"
// Member 'bumper_heights'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__traits.hpp"
// Member 'front_pivot'
// Member 'rear_pivot'
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__traits.hpp"
// Member 'rear_wheel_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b12__traits.hpp"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__traits.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__traits.hpp"
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrailerUnitDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: is_dolly
  {
    out << "is_dolly: ";
    to_flow_style_yaml(msg.is_dolly, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    to_flow_style_yaml(msg.width, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    to_flow_style_yaml(msg.length, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    to_flow_style_yaml(msg.height, out);
    out << ", ";
  }

  // member: mass
  {
    out << "mass: ";
    to_flow_style_yaml(msg.mass, out);
    out << ", ";
  }

  // member: bumper_heights
  {
    out << "bumper_heights: ";
    to_flow_style_yaml(msg.bumper_heights, out);
    out << ", ";
  }

  // member: center_of_gravity
  {
    out << "center_of_gravity: ";
    to_flow_style_yaml(msg.center_of_gravity, out);
    out << ", ";
  }

  // member: front_pivot
  {
    out << "front_pivot: ";
    to_flow_style_yaml(msg.front_pivot, out);
    out << ", ";
  }

  // member: rear_pivot
  {
    out << "rear_pivot: ";
    to_flow_style_yaml(msg.rear_pivot, out);
    out << ", ";
  }

  // member: rear_wheel_offset
  {
    out << "rear_wheel_offset: ";
    to_flow_style_yaml(msg.rear_wheel_offset, out);
    out << ", ";
  }

  // member: position_offset
  {
    out << "position_offset: ";
    to_flow_style_yaml(msg.position_offset, out);
    out << ", ";
  }

  // member: elevation_offset
  {
    out << "elevation_offset: ";
    to_flow_style_yaml(msg.elevation_offset, out);
    out << ", ";
  }

  // member: crumb_data
  {
    out << "crumb_data: ";
    to_flow_style_yaml(msg.crumb_data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrailerUnitDescription & msg,
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

  // member: is_dolly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_dolly:\n";
    to_block_style_yaml(msg.is_dolly, out, indentation + 2);
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width:\n";
    to_block_style_yaml(msg.width, out, indentation + 2);
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length:\n";
    to_block_style_yaml(msg.length, out, indentation + 2);
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height:\n";
    to_block_style_yaml(msg.height, out, indentation + 2);
  }

  // member: mass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mass:\n";
    to_block_style_yaml(msg.mass, out, indentation + 2);
  }

  // member: bumper_heights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bumper_heights:\n";
    to_block_style_yaml(msg.bumper_heights, out, indentation + 2);
  }

  // member: center_of_gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_of_gravity:\n";
    to_block_style_yaml(msg.center_of_gravity, out, indentation + 2);
  }

  // member: front_pivot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_pivot:\n";
    to_block_style_yaml(msg.front_pivot, out, indentation + 2);
  }

  // member: rear_pivot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_pivot:\n";
    to_block_style_yaml(msg.rear_pivot, out, indentation + 2);
  }

  // member: rear_wheel_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_wheel_offset:\n";
    to_block_style_yaml(msg.rear_wheel_offset, out, indentation + 2);
  }

  // member: position_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_offset:\n";
    to_block_style_yaml(msg.position_offset, out, indentation + 2);
  }

  // member: elevation_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation_offset:\n";
    to_block_style_yaml(msg.elevation_offset, out, indentation + 2);
  }

  // member: crumb_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crumb_data:\n";
    to_block_style_yaml(msg.crumb_data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrailerUnitDescription & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrailerUnitDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrailerUnitDescription>()
{
  return "j2735_v2x_msgs::msg::TrailerUnitDescription";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrailerUnitDescription>()
{
  return "j2735_v2x_msgs/msg/TrailerUnitDescription";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrailerUnitDescription>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_fixed_size<j2735_v2x_msgs::msg::IsDolly>::value && has_fixed_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_fixed_size<j2735_v2x_msgs::msg::OffsetB12>::value && has_fixed_size<j2735_v2x_msgs::msg::PivotPointDescription>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerHistoryPointList>::value && has_fixed_size<j2735_v2x_msgs::msg::TrailerMass>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleLength>::value && has_fixed_size<j2735_v2x_msgs::msg::VehicleWidth>::value && has_fixed_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrailerUnitDescription>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::BumperHeights>::value && has_bounded_size<j2735_v2x_msgs::msg::IsDolly>::value && has_bounded_size<j2735_v2x_msgs::msg::NodeXY24b>::value && has_bounded_size<j2735_v2x_msgs::msg::OffsetB12>::value && has_bounded_size<j2735_v2x_msgs::msg::PivotPointDescription>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerHistoryPointList>::value && has_bounded_size<j2735_v2x_msgs::msg::TrailerMass>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleHeight>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleLength>::value && has_bounded_size<j2735_v2x_msgs::msg::VehicleWidth>::value && has_bounded_size<j2735_v2x_msgs::msg::VertOffsetB07>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrailerUnitDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__TRAITS_HPP_
