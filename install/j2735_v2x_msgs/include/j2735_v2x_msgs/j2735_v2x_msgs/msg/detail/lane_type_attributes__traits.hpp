// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/LaneTypeAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_type_attributes.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_vehicle__traits.hpp"
// Member 'crosswalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_crosswalk__traits.hpp"
// Member 'bike_lane'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__traits.hpp"
// Member 'sidewalk'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__traits.hpp"
// Member 'median'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_barrier__traits.hpp"
// Member 'striping'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_striping__traits.hpp"
// Member 'tracked_vehicle'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_tracked_vehicle__traits.hpp"
// Member 'parking'
#include "j2735_v2x_msgs/msg/detail/lane_attributes_parking__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneTypeAttributes & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: vehicle
  {
    out << "vehicle: ";
    to_flow_style_yaml(msg.vehicle, out);
    out << ", ";
  }

  // member: crosswalk
  {
    out << "crosswalk: ";
    to_flow_style_yaml(msg.crosswalk, out);
    out << ", ";
  }

  // member: bike_lane
  {
    out << "bike_lane: ";
    to_flow_style_yaml(msg.bike_lane, out);
    out << ", ";
  }

  // member: sidewalk
  {
    out << "sidewalk: ";
    to_flow_style_yaml(msg.sidewalk, out);
    out << ", ";
  }

  // member: median
  {
    out << "median: ";
    to_flow_style_yaml(msg.median, out);
    out << ", ";
  }

  // member: striping
  {
    out << "striping: ";
    to_flow_style_yaml(msg.striping, out);
    out << ", ";
  }

  // member: tracked_vehicle
  {
    out << "tracked_vehicle: ";
    to_flow_style_yaml(msg.tracked_vehicle, out);
    out << ", ";
  }

  // member: parking
  {
    out << "parking: ";
    to_flow_style_yaml(msg.parking, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaneTypeAttributes & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: choice
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << "\n";
  }

  // member: vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle:\n";
    to_block_style_yaml(msg.vehicle, out, indentation + 2);
  }

  // member: crosswalk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crosswalk:\n";
    to_block_style_yaml(msg.crosswalk, out, indentation + 2);
  }

  // member: bike_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bike_lane:\n";
    to_block_style_yaml(msg.bike_lane, out, indentation + 2);
  }

  // member: sidewalk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sidewalk:\n";
    to_block_style_yaml(msg.sidewalk, out, indentation + 2);
  }

  // member: median
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "median:\n";
    to_block_style_yaml(msg.median, out, indentation + 2);
  }

  // member: striping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "striping:\n";
    to_block_style_yaml(msg.striping, out, indentation + 2);
  }

  // member: tracked_vehicle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracked_vehicle:\n";
    to_block_style_yaml(msg.tracked_vehicle, out, indentation + 2);
  }

  // member: parking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking:\n";
    to_block_style_yaml(msg.parking, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneTypeAttributes & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::LaneTypeAttributes & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::LaneTypeAttributes & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::LaneTypeAttributes>()
{
  return "j2735_v2x_msgs::msg::LaneTypeAttributes";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::LaneTypeAttributes>()
{
  return "j2735_v2x_msgs/msg/LaneTypeAttributes";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::LaneTypeAttributes>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesBarrier>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesBike>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesCrosswalk>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesParking>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesSidewalk>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesStriping>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesTrackedVehicle>::value && has_fixed_size<j2735_v2x_msgs::msg::LaneAttributesVehicle>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::LaneTypeAttributes>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesBarrier>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesBike>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesCrosswalk>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesParking>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesSidewalk>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesStriping>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesTrackedVehicle>::value && has_bounded_size<j2735_v2x_msgs::msg::LaneAttributesVehicle>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::LaneTypeAttributes>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_TYPE_ATTRIBUTES__TRAITS_HPP_
