// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/driver_status.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/msg/detail/driver_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DriverStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: can
  {
    out << "can: ";
    rosidl_generator_traits::value_to_yaml(msg.can, out);
    out << ", ";
  }

  // member: radar
  {
    out << "radar: ";
    rosidl_generator_traits::value_to_yaml(msg.radar, out);
    out << ", ";
  }

  // member: gnss
  {
    out << "gnss: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss, out);
    out << ", ";
  }

  // member: lidar
  {
    out << "lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar, out);
    out << ", ";
  }

  // member: roadway_sensor
  {
    out << "roadway_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.roadway_sensor, out);
    out << ", ";
  }

  // member: comms
  {
    out << "comms: ";
    rosidl_generator_traits::value_to_yaml(msg.comms, out);
    out << ", ";
  }

  // member: controller
  {
    out << "controller: ";
    rosidl_generator_traits::value_to_yaml(msg.controller, out);
    out << ", ";
  }

  // member: camera
  {
    out << "camera: ";
    rosidl_generator_traits::value_to_yaml(msg.camera, out);
    out << ", ";
  }

  // member: imu
  {
    out << "imu: ";
    rosidl_generator_traits::value_to_yaml(msg.imu, out);
    out << ", ";
  }

  // member: trailer_angle_sensor
  {
    out << "trailer_angle_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.trailer_angle_sensor, out);
    out << ", ";
  }

  // member: lightbar
  {
    out << "lightbar: ";
    rosidl_generator_traits::value_to_yaml(msg.lightbar, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriverStatus & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: can
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can: ";
    rosidl_generator_traits::value_to_yaml(msg.can, out);
    out << "\n";
  }

  // member: radar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar: ";
    rosidl_generator_traits::value_to_yaml(msg.radar, out);
    out << "\n";
  }

  // member: gnss
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gnss: ";
    rosidl_generator_traits::value_to_yaml(msg.gnss, out);
    out << "\n";
  }

  // member: lidar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar: ";
    rosidl_generator_traits::value_to_yaml(msg.lidar, out);
    out << "\n";
  }

  // member: roadway_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roadway_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.roadway_sensor, out);
    out << "\n";
  }

  // member: comms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comms: ";
    rosidl_generator_traits::value_to_yaml(msg.comms, out);
    out << "\n";
  }

  // member: controller
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller: ";
    rosidl_generator_traits::value_to_yaml(msg.controller, out);
    out << "\n";
  }

  // member: camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera: ";
    rosidl_generator_traits::value_to_yaml(msg.camera, out);
    out << "\n";
  }

  // member: imu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu: ";
    rosidl_generator_traits::value_to_yaml(msg.imu, out);
    out << "\n";
  }

  // member: trailer_angle_sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trailer_angle_sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.trailer_angle_sensor, out);
    out << "\n";
  }

  // member: lightbar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lightbar: ";
    rosidl_generator_traits::value_to_yaml(msg.lightbar, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriverStatus & msg, bool use_flow_style = false)
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

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::msg::DriverStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::msg::DriverStatus & msg)
{
  return carma_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::msg::DriverStatus>()
{
  return "carma_driver_msgs::msg::DriverStatus";
}

template<>
inline const char * name<carma_driver_msgs::msg::DriverStatus>()
{
  return "carma_driver_msgs/msg/DriverStatus";
}

template<>
struct has_fixed_size<carma_driver_msgs::msg::DriverStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::msg::DriverStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_driver_msgs::msg::DriverStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__TRAITS_HPP_
