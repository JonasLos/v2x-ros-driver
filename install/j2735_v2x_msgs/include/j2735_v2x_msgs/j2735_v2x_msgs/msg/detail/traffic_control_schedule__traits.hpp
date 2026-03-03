// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_schedule.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'dow'
#include "j2735_v2x_msgs/msg/detail/day_of_week__traits.hpp"
// Member 'between'
#include "j2735_v2x_msgs/msg/detail/daily_schedule__traits.hpp"
// Member 'repeat'
#include "j2735_v2x_msgs/msg/detail/repeat_params__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlSchedule & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    rosidl_generator_traits::value_to_yaml(msg.end, out);
    out << ", ";
  }

  // member: end_exists
  {
    out << "end_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.end_exists, out);
    out << ", ";
  }

  // member: dow
  {
    out << "dow: ";
    to_flow_style_yaml(msg.dow, out);
    out << ", ";
  }

  // member: dow_exists
  {
    out << "dow_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.dow_exists, out);
    out << ", ";
  }

  // member: between
  {
    if (msg.between.size() == 0) {
      out << "between: []";
    } else {
      out << "between: [";
      size_t pending_items = msg.between.size();
      for (auto item : msg.between) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: between_exists
  {
    out << "between_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.between_exists, out);
    out << ", ";
  }

  // member: repeat
  {
    out << "repeat: ";
    to_flow_style_yaml(msg.repeat, out);
    out << ", ";
  }

  // member: repeat_exists
  {
    out << "repeat_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.repeat_exists, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficControlSchedule & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end: ";
    rosidl_generator_traits::value_to_yaml(msg.end, out);
    out << "\n";
  }

  // member: end_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.end_exists, out);
    out << "\n";
  }

  // member: dow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dow:\n";
    to_block_style_yaml(msg.dow, out, indentation + 2);
  }

  // member: dow_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dow_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.dow_exists, out);
    out << "\n";
  }

  // member: between
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.between.size() == 0) {
      out << "between: []\n";
    } else {
      out << "between:\n";
      for (auto item : msg.between) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: between_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "between_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.between_exists, out);
    out << "\n";
  }

  // member: repeat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repeat:\n";
    to_block_style_yaml(msg.repeat, out, indentation + 2);
  }

  // member: repeat_exists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repeat_exists: ";
    rosidl_generator_traits::value_to_yaml(msg.repeat_exists, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlSchedule & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlSchedule & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlSchedule>()
{
  return "j2735_v2x_msgs::msg::TrafficControlSchedule";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlSchedule>()
{
  return "j2735_v2x_msgs/msg/TrafficControlSchedule";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlSchedule>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlSchedule>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlSchedule>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__TRAITS_HPP_
