// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/map_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/map_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'layer_type'
#include "j2735_v2x_msgs/msg/detail/layer_type__traits.hpp"
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__traits.hpp"
// Member 'road_segments'
#include "j2735_v2x_msgs/msg/detail/road_segment_list__traits.hpp"
// Member 'data_parameters'
#include "j2735_v2x_msgs/msg/detail/data_parameters__traits.hpp"
// Member 'restriction_list'
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MapData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
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

  // member: msg_issue_revision
  {
    out << "msg_issue_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_issue_revision, out);
    out << ", ";
  }

  // member: layer_type
  {
    out << "layer_type: ";
    to_flow_style_yaml(msg.layer_type, out);
    out << ", ";
  }

  // member: layer_id
  {
    out << "layer_id: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_id, out);
    out << ", ";
  }

  // member: layer_id_exists
  {
    out << "layer_id_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_id_exists, out);
    out << ", ";
  }

  // member: intersections
  {
    if (msg.intersections.size() == 0) {
      out << "intersections: []";
    } else {
      out << "intersections: [";
      size_t pending_items = msg.intersections.size();
      for (auto item : msg.intersections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intersections_exists
  {
    out << "intersections_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.intersections_exists, out);
    out << ", ";
  }

  // member: road_segments
  {
    out << "road_segments: ";
    to_flow_style_yaml(msg.road_segments, out);
    out << ", ";
  }

  // member: road_segments_exists
  {
    out << "road_segments_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.road_segments_exists, out);
    out << ", ";
  }

  // member: data_parameters
  {
    out << "data_parameters: ";
    to_flow_style_yaml(msg.data_parameters, out);
    out << ", ";
  }

  // member: data_parameters_exists
  {
    out << "data_parameters_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.data_parameters_exists, out);
    out << ", ";
  }

  // member: restriction_list
  {
    out << "restriction_list: ";
    to_flow_style_yaml(msg.restriction_list, out);
    out << ", ";
  }

  // member: restriction_list_exists
  {
    out << "restriction_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.restriction_list_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MapData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
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

  // member: msg_issue_revision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_issue_revision: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_issue_revision, out);
    out << "\n";
  }

  // member: layer_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer_type:\n";
    to_block_style_yaml(msg.layer_type, out, indentation + 2);
  }

  // member: layer_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer_id: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_id, out);
    out << "\n";
  }

  // member: layer_id_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer_id_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.layer_id_exists, out);
    out << "\n";
  }

  // member: intersections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intersections.size() == 0) {
      out << "intersections: []\n";
    } else {
      out << "intersections:\n";
      for (auto item : msg.intersections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: intersections_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "intersections_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.intersections_exists, out);
    out << "\n";
  }

  // member: road_segments
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_segments:\n";
    to_block_style_yaml(msg.road_segments, out, indentation + 2);
  }

  // member: road_segments_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_segments_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.road_segments_exists, out);
    out << "\n";
  }

  // member: data_parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_parameters:\n";
    to_block_style_yaml(msg.data_parameters, out, indentation + 2);
  }

  // member: data_parameters_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_parameters_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.data_parameters_exists, out);
    out << "\n";
  }

  // member: restriction_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restriction_list:\n";
    to_block_style_yaml(msg.restriction_list, out, indentation + 2);
  }

  // member: restriction_list_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restriction_list_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.restriction_list_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MapData & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::MapData & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::MapData & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::MapData>()
{
  return "j2735_v2x_msgs::msg::MapData";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::MapData>()
{
  return "j2735_v2x_msgs/msg/MapData";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::MapData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::MapData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::MapData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__TRAITS_HPP_
