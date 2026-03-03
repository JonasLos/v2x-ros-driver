// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/event_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__TRAITS_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "j2735_v2x_msgs/msg/detail/event_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type_event'
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__traits.hpp"
// Member 'priority'
#include "j2735_v2x_msgs/msg/detail/priority__traits.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_slice__traits.hpp"
// Member 'extent'
#include "j2735_v2x_msgs/msg/detail/extent__traits.hpp"

namespace j2735_v2x_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EventDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: presence_vector
  {
    out << "presence_vector: ";
    rosidl_generator_traits::value_to_yaml(msg.presence_vector, out);
    out << ", ";
  }

  // member: type_event
  {
    out << "type_event: ";
    to_flow_style_yaml(msg.type_event, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    to_flow_style_yaml(msg.priority, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    to_flow_style_yaml(msg.heading, out);
    out << ", ";
  }

  // member: extent
  {
    out << "extent: ";
    to_flow_style_yaml(msg.extent, out);
    out << ", ";
  }

  // member: description
  {
    if (msg.description.size() == 0) {
      out << "description: []";
    } else {
      out << "description: [";
      size_t pending_items = msg.description.size();
      for (auto item : msg.description) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EventDescription & msg,
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

  // member: type_event
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_event:\n";
    to_block_style_yaml(msg.type_event, out, indentation + 2);
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority:\n";
    to_block_style_yaml(msg.priority, out, indentation + 2);
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading:\n";
    to_block_style_yaml(msg.heading, out, indentation + 2);
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent:\n";
    to_block_style_yaml(msg.extent, out, indentation + 2);
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.description.size() == 0) {
      out << "description: []\n";
    } else {
      out << "description:\n";
      for (auto item : msg.description) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EventDescription & msg, bool use_flow_style = false)
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
  const j2735_v2x_msgs::msg::EventDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  j2735_v2x_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use j2735_v2x_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const j2735_v2x_msgs::msg::EventDescription & msg)
{
  return j2735_v2x_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<j2735_v2x_msgs::msg::EventDescription>()
{
  return "j2735_v2x_msgs::msg::EventDescription";
}

template<>
inline const char * name<j2735_v2x_msgs::msg::EventDescription>()
{
  return "j2735_v2x_msgs/msg/EventDescription";
}

template<>
struct has_fixed_size<j2735_v2x_msgs::msg::EventDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<j2735_v2x_msgs::msg::EventDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<j2735_v2x_msgs::msg::EventDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__TRAITS_HPP_
