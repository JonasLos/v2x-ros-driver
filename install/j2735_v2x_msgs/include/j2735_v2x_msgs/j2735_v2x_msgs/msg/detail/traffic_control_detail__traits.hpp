// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlDetail.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_detail.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/traffic_control_detail__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficControlDetail & msg,
  std::ostream & out)
{
  out << "{";
  // member: choice
  {
    out << "choice: ";
    rosidl_generator_traits::value_to_yaml(msg.choice, out);
    out << ", ";
  }

  // member: signal
  {
    if (msg.signal.size() == 0) {
      out << "signal: []";
    } else {
      out << "signal: [";
      size_t pending_items = msg.signal.size();
      for (auto item : msg.signal) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: closed
  {
    out << "closed: ";
    rosidl_generator_traits::value_to_yaml(msg.closed, out);
    out << ", ";
  }

  // member: chains
  {
    out << "chains: ";
    rosidl_generator_traits::value_to_yaml(msg.chains, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: lataffinity
  {
    out << "lataffinity: ";
    rosidl_generator_traits::value_to_yaml(msg.lataffinity, out);
    out << ", ";
  }

  // member: latperm
  {
    if (msg.latperm.size() == 0) {
      out << "latperm: []";
    } else {
      out << "latperm: [";
      size_t pending_items = msg.latperm.size();
      for (auto item : msg.latperm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: parking
  {
    out << "parking: ";
    rosidl_generator_traits::value_to_yaml(msg.parking, out);
    out << ", ";
  }

  // member: minspeed
  {
    out << "minspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.minspeed, out);
    out << ", ";
  }

  // member: maxspeed
  {
    out << "maxspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.maxspeed, out);
    out << ", ";
  }

  // member: minhdwy
  {
    out << "minhdwy: ";
    rosidl_generator_traits::value_to_yaml(msg.minhdwy, out);
    out << ", ";
  }

  // member: maxvehmass
  {
    out << "maxvehmass: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehmass, out);
    out << ", ";
  }

  // member: maxvehheight
  {
    out << "maxvehheight: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehheight, out);
    out << ", ";
  }

  // member: maxvehwidth
  {
    out << "maxvehwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehwidth, out);
    out << ", ";
  }

  // member: maxvehlength
  {
    out << "maxvehlength: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehlength, out);
    out << ", ";
  }

  // member: maxvehaxles
  {
    out << "maxvehaxles: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehaxles, out);
    out << ", ";
  }

  // member: minvehocc
  {
    out << "minvehocc: ";
    rosidl_generator_traits::value_to_yaml(msg.minvehocc, out);
    out << ", ";
  }

  // member: maxplatoonsize
  {
    out << "maxplatoonsize: ";
    rosidl_generator_traits::value_to_yaml(msg.maxplatoonsize, out);
    out << ", ";
  }

  // member: minplatoonhdwy
  {
    out << "minplatoonhdwy: ";
    rosidl_generator_traits::value_to_yaml(msg.minplatoonhdwy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficControlDetail & msg,
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

  // member: signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.signal.size() == 0) {
      out << "signal: []\n";
    } else {
      out << "signal:\n";
      for (auto item : msg.signal) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: closed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closed: ";
    rosidl_generator_traits::value_to_yaml(msg.closed, out);
    out << "\n";
  }

  // member: chains
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chains: ";
    rosidl_generator_traits::value_to_yaml(msg.chains, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: lataffinity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lataffinity: ";
    rosidl_generator_traits::value_to_yaml(msg.lataffinity, out);
    out << "\n";
  }

  // member: latperm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.latperm.size() == 0) {
      out << "latperm: []\n";
    } else {
      out << "latperm:\n";
      for (auto item : msg.latperm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: parking
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking: ";
    rosidl_generator_traits::value_to_yaml(msg.parking, out);
    out << "\n";
  }

  // member: minspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.minspeed, out);
    out << "\n";
  }

  // member: maxspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.maxspeed, out);
    out << "\n";
  }

  // member: minhdwy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minhdwy: ";
    rosidl_generator_traits::value_to_yaml(msg.minhdwy, out);
    out << "\n";
  }

  // member: maxvehmass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxvehmass: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehmass, out);
    out << "\n";
  }

  // member: maxvehheight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxvehheight: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehheight, out);
    out << "\n";
  }

  // member: maxvehwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxvehwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehwidth, out);
    out << "\n";
  }

  // member: maxvehlength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxvehlength: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehlength, out);
    out << "\n";
  }

  // member: maxvehaxles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxvehaxles: ";
    rosidl_generator_traits::value_to_yaml(msg.maxvehaxles, out);
    out << "\n";
  }

  // member: minvehocc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minvehocc: ";
    rosidl_generator_traits::value_to_yaml(msg.minvehocc, out);
    out << "\n";
  }

  // member: maxplatoonsize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maxplatoonsize: ";
    rosidl_generator_traits::value_to_yaml(msg.maxplatoonsize, out);
    out << "\n";
  }

  // member: minplatoonhdwy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "minplatoonhdwy: ";
    rosidl_generator_traits::value_to_yaml(msg.minplatoonhdwy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficControlDetail & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::TrafficControlDetail & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::TrafficControlDetail & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::TrafficControlDetail>()
{
  return "j2735_v2x_msgs::msg::TrafficControlDetail";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::TrafficControlDetail>()
{
  return "j2735_v2x_msgs/msg/TrafficControlDetail";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::TrafficControlDetail>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::TrafficControlDetail>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::TrafficControlDetail>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_DETAIL__TRAITS_HPP_
