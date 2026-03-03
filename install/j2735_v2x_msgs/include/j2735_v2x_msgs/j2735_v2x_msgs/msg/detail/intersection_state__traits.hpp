// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/intersection_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__traits.hpp"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__traits.hpp"
// Member 'enabled_lanes'
#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__traits.hpp"
// Member 'states'
#include "j2735_v2x_msgs/msg/detail/movement_list__traits.hpp"
// Member 'maneuever_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IntersectionState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: name_exists
  {
    out << "name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.name_exists, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: revision
  {
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: moy
  {
    out << "moy: ";
    rosidl_generator_traits::value_to_yaml(msg.moy, out);
    out << ", ";
  }

  // member: moy_exists
  {
    out << "moy_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.moy_exists, out);
    out << ", ";
  }

  // member: time_stamp
  {
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << ", ";
  }

  // member: time_stamp_exists
  {
    out << "time_stamp_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp_exists, out);
    out << ", ";
  }

  // member: enabled_lanes
  {
    out << "enabled_lanes: ";
    to_flow_style_yaml(msg.enabled_lanes, out);
    out << ", ";
  }

  // member: enabled_lanes_exists
  {
    out << "enabled_lanes_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled_lanes_exists, out);
    out << ", ";
  }

  // member: states
  {
    out << "states: ";
    to_flow_style_yaml(msg.states, out);
    out << ", ";
  }

  // member: maneuever_assist_list
  {
    out << "maneuever_assist_list: ";
    to_flow_style_yaml(msg.maneuever_assist_list, out);
    out << ", ";
  }

  // member: maneuever_assist_list_exists
  {
    out << "maneuever_assist_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuever_assist_list_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IntersectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: name_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.name_exists, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id:\n";
    to_block_style_yaml(msg.id, out, indentation + 2);
  }

  // member: revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "revision: ";
    rosidl_generator_traits::value_to_yaml(msg.revision, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: moy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moy: ";
    rosidl_generator_traits::value_to_yaml(msg.moy, out);
    out << "\n";
  }

  // member: moy_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moy_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.moy_exists, out);
    out << "\n";
  }

  // member: time_stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp, out);
    out << "\n";
  }

  // member: time_stamp_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_stamp_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.time_stamp_exists, out);
    out << "\n";
  }

  // member: enabled_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled_lanes:\n";
    to_block_style_yaml(msg.enabled_lanes, out, indentation + 2);
  }

  // member: enabled_lanes_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled_lanes_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled_lanes_exists, out);
    out << "\n";
  }

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "states:\n";
    to_block_style_yaml(msg.states, out, indentation + 2);
  }

  // member: maneuever_assist_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuever_assist_list:\n";
    to_block_style_yaml(msg.maneuever_assist_list, out, indentation + 2);
  }

  // member: maneuever_assist_list_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maneuever_assist_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.maneuever_assist_list_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IntersectionState & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::IntersectionState & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::IntersectionState & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::IntersectionState>()
{
  return "j2735_v2x_msgs::msg::IntersectionState";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::IntersectionState>()
{
  return "j2735_v2x_msgs/msg/IntersectionState";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::IntersectionState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::IntersectionState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::IntersectionState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__TRAITS_HPP_
