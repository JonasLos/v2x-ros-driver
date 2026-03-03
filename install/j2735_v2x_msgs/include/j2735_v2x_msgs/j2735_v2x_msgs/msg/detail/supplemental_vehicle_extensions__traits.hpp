// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/supplemental_vehicle_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'classification'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__traits.hpp"
// Member 'class_details'
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__traits.hpp"
// Member 'vehicle_data'
#include "j2735_v2x_msgs/msg/detail/vehicle_data__traits.hpp"
// Member 'weather_report'
#include "j2735_v2x_msgs/msg/detail/weather_report__traits.hpp"
// Member 'weather_probe'
#include "j2735_v2x_msgs/msg/detail/weather_probe__traits.hpp"
// Member 'obstacle'
#include "j2735_v2x_msgs/msg/detail/obstacle_detection__traits.hpp"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__traits.hpp"
// Member 'speed_profile'
#include "j2735_v2x_msgs/msg/detail/gross_speed__traits.hpp"
// Member 'the_rtcm'
#include "j2735_v2x_msgs/msg/detail/rtcm_package__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SupplementalVehicleExtensions & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    to_flow_style_yaml(msg.classification, out);
    out << ", ";
  }

  // member: class_details
  {
    out << "class_details: ";
    to_flow_style_yaml(msg.class_details, out);
    out << ", ";
  }

  // member: vehicle_data
  {
    out << "vehicle_data: ";
    to_flow_style_yaml(msg.vehicle_data, out);
    out << ", ";
  }

  // member: weather_report
  {
    out << "weather_report: ";
    to_flow_style_yaml(msg.weather_report, out);
    out << ", ";
  }

  // member: weather_probe
  {
    out << "weather_probe: ";
    to_flow_style_yaml(msg.weather_probe, out);
    out << ", ";
  }

  // member: obstacle
  {
    out << "obstacle: ";
    to_flow_style_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: speed_profile
  {
    if (msg.speed_profile.size() == 0) {
      out << "speed_profile: []";
    } else {
      out << "speed_profile: [";
      size_t pending_items = msg.speed_profile.size();
      for (auto item : msg.speed_profile) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: the_rtcm
  {
    out << "the_rtcm: ";
    to_flow_style_yaml(msg.the_rtcm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SupplementalVehicleExtensions & msg,
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

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification:\n";
    to_block_style_yaml(msg.classification, out, indentation + 2);
  }

  // member: class_details
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "class_details:\n";
    to_block_style_yaml(msg.class_details, out, indentation + 2);
  }

  // member: vehicle_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_data:\n";
    to_block_style_yaml(msg.vehicle_data, out, indentation + 2);
  }

  // member: weather_report
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weather_report:\n";
    to_block_style_yaml(msg.weather_report, out, indentation + 2);
  }

  // member: weather_probe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "weather_probe:\n";
    to_block_style_yaml(msg.weather_probe, out, indentation + 2);
  }

  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle:\n";
    to_block_style_yaml(msg.obstacle, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: speed_profile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_profile.size() == 0) {
      out << "speed_profile: []\n";
    } else {
      out << "speed_profile:\n";
      for (auto item : msg.speed_profile) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: the_rtcm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "the_rtcm:\n";
    to_block_style_yaml(msg.the_rtcm, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SupplementalVehicleExtensions & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>()
{
  return "j2735_v2x_msgs::msg::SupplementalVehicleExtensions";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>()
{
  return "j2735_v2x_msgs/msg/SupplementalVehicleExtensions";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::SupplementalVehicleExtensions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__TRAITS_HPP_
