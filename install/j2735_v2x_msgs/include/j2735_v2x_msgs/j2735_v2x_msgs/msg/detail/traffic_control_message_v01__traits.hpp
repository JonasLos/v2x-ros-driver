// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_message_v01.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__traits.hpp"
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/id128b__traits.hpp"
// Member 'package'
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__traits.hpp"
// Member 'params'
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__traits.hpp"
// Member 'geometry'
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlMessageV01 & msg,
  std::ostream & out)
{
  out << "{";
  // member: reqid
  {
    out << "reqid: ";
    to_flow_style_yaml(msg.reqid, out);
    out << ", ";
  }

  // member: reqseq
  {
    out << "reqseq: ";
    rosidl_generator_traits::value_to_yaml(msg.reqseq, out);
    out << ", ";
  }

  // member: msgtot
  {
    out << "msgtot: ";
    rosidl_generator_traits::value_to_yaml(msg.msgtot, out);
    out << ", ";
  }

  // member: msgnum
  {
    out << "msgnum: ";
    rosidl_generator_traits::value_to_yaml(msg.msgnum, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    to_flow_style_yaml(msg.id, out);
    out << ", ";
  }

  // member: updated
  {
    out << "updated: ";
    rosidl_generator_traits::value_to_yaml(msg.updated, out);
    out << ", ";
  }

  // member: package
  {
    out << "package: ";
    to_flow_style_yaml(msg.package, out);
    out << ", ";
  }

  // member: package_exists
  {
    out << "package_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.package_exists, out);
    out << ", ";
  }

  // member: params
  {
    out << "params: ";
    to_flow_style_yaml(msg.params, out);
    out << ", ";
  }

  // member: params_exists
  {
    out << "params_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.params_exists, out);
    out << ", ";
  }

  // member: geometry
  {
    out << "geometry: ";
    to_flow_style_yaml(msg.geometry, out);
    out << ", ";
  }

  // member: geometry_exists
  {
    out << "geometry_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficControlMessageV01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: reqid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reqid:\n";
    to_block_style_yaml(msg.reqid, out, indentation + 2);
  }

  // member: reqseq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reqseq: ";
    rosidl_generator_traits::value_to_yaml(msg.reqseq, out);
    out << "\n";
  }

  // member: msgtot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgtot: ";
    rosidl_generator_traits::value_to_yaml(msg.msgtot, out);
    out << "\n";
  }

  // member: msgnum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgnum: ";
    rosidl_generator_traits::value_to_yaml(msg.msgnum, out);
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

  // member: updated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "updated: ";
    rosidl_generator_traits::value_to_yaml(msg.updated, out);
    out << "\n";
  }

  // member: package
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "package:\n";
    to_block_style_yaml(msg.package, out, indentation + 2);
  }

  // member: package_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "package_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.package_exists, out);
    out << "\n";
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params:\n";
    to_block_style_yaml(msg.params, out, indentation + 2);
  }

  // member: params_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.params_exists, out);
    out << "\n";
  }

  // member: geometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry:\n";
    to_block_style_yaml(msg.geometry, out, indentation + 2);
  }

  // member: geometry_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geometry_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.geometry_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlMessageV01 & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlMessageV01>()
{
  return "j2735_v2x_msgs::msg::TrafficControlMessageV01";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlMessageV01>()
{
  return "j2735_v2x_msgs/msg/TrafficControlMessageV01";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlMessageV01>
  : std::integral_constant<bool, has_fixed_size<j2735_v2x_msgs::msg::Id128b>::value && has_fixed_size<j2735_v2x_msgs::msg::Id64b>::value && has_fixed_size<j2735_v2x_msgs::msg::TrafficControlGeometry>::value && has_fixed_size<j2735_v2x_msgs::msg::TrafficControlPackage>::value && has_fixed_size<j2735_v2x_msgs::msg::TrafficControlParams>::value> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlMessageV01>
  : std::integral_constant<bool, has_bounded_size<j2735_v2x_msgs::msg::Id128b>::value && has_bounded_size<j2735_v2x_msgs::msg::Id64b>::value && has_bounded_size<j2735_v2x_msgs::msg::TrafficControlGeometry>::value && has_bounded_size<j2735_v2x_msgs::msg::TrafficControlPackage>::value && has_bounded_size<j2735_v2x_msgs::msg::TrafficControlParams>::value> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlMessageV01>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__TRAITS_HPP_
