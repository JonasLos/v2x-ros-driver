// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_core_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/bsm_core_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__traits.hpp"
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__traits.hpp"
// Member 'accel_set'
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__traits.hpp"
// Member 'brakes'
#include "j2735_v2x_msgs/msg/detail/brake_system_status__traits.hpp"
// Member 'size'
#include "j2735_v2x_msgs/msg/detail/vehicle_size__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BSMCoreData & msg,
  std::ostream & out)
{
  out << "{";
  // member: msg_count
  {
    out << "msg_count: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_count, out);
    out << ", ";
  }

  // member: id
  {
    if (msg.id.size() == 0) {
      out << "id: []";
    } else {
      out << "id: [";
      size_t pending_items = msg.id.size();
      for (auto item : msg.id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sec_mark
  {
    out << "sec_mark: ";
    rosidl_generator_traits::value_to_yaml(msg.sec_mark, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: elev
  {
    out << "elev: ";
    rosidl_generator_traits::value_to_yaml(msg.elev, out);
    out << ", ";
  }

  // member: accuracy
  {
    out << "accuracy: ";
    to_flow_style_yaml(msg.accuracy, out);
    out << ", ";
  }

  // member: transmission
  {
    out << "transmission: ";
    to_flow_style_yaml(msg.transmission, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: accel_set
  {
    out << "accel_set: ";
    to_flow_style_yaml(msg.accel_set, out);
    out << ", ";
  }

  // member: brakes
  {
    out << "brakes: ";
    to_flow_style_yaml(msg.brakes, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BSMCoreData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: msg_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_count: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_count, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.id.size() == 0) {
      out << "id: []\n";
    } else {
      out << "id:\n";
      for (auto item : msg.id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sec_mark
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec_mark: ";
    rosidl_generator_traits::value_to_yaml(msg.sec_mark, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: elev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elev: ";
    rosidl_generator_traits::value_to_yaml(msg.elev, out);
    out << "\n";
  }

  // member: accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accuracy:\n";
    to_block_style_yaml(msg.accuracy, out, indentation + 2);
  }

  // member: transmission
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transmission:\n";
    to_block_style_yaml(msg.transmission, out, indentation + 2);
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: accel_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_set:\n";
    to_block_style_yaml(msg.accel_set, out, indentation + 2);
  }

  // member: brakes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brakes:\n";
    to_block_style_yaml(msg.brakes, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BSMCoreData & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::BSMCoreData & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::BSMCoreData & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::BSMCoreData>()
{
  return "j2735_v2x_msgs::msg::BSMCoreData";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::BSMCoreData>()
{
  return "j2735_v2x_msgs/msg/BSMCoreData";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::BSMCoreData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::BSMCoreData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__TRAITS_HPP_
