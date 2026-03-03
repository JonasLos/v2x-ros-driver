// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:srv/SetLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/set_lights.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHTS__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/srv/detail/set_lights__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'set_state'
#include "carma_driver_msgs/msg/detail/light_bar_status__traits.hpp"

namespace carma_driver_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLights_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: set_state
  {
    out << "set_state: ";
    to_flow_style_yaml(msg.set_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLights_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: set_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_state:\n";
    to_block_style_yaml(msg.set_state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLights_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::srv::SetLights_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::srv::SetLights_Request & msg)
{
  return carma_driver_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLights_Request>()
{
  return "carma_driver_msgs::srv::SetLights_Request";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLights_Request>()
{
  return "carma_driver_msgs/srv/SetLights_Request";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLights_Request>
  : std::integral_constant<bool, has_fixed_size<carma_driver_msgs::msg::LightBarStatus>::value> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLights_Request>
  : std::integral_constant<bool, has_bounded_size<carma_driver_msgs::msg::LightBarStatus>::value> {};

template<>
struct is_message<carma_driver_msgs::srv::SetLights_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace carma_driver_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLights_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLights_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLights_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::srv::SetLights_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::srv::SetLights_Response & msg)
{
  return carma_driver_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLights_Response>()
{
  return "carma_driver_msgs::srv::SetLights_Response";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLights_Response>()
{
  return "carma_driver_msgs/srv/SetLights_Response";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLights_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLights_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::srv::SetLights_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace carma_driver_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLights_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
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
  const SetLights_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLights_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace carma_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_driver_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_driver_msgs::srv::SetLights_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::srv::SetLights_Event & msg)
{
  return carma_driver_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLights_Event>()
{
  return "carma_driver_msgs::srv::SetLights_Event";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLights_Event>()
{
  return "carma_driver_msgs/srv/SetLights_Event";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLights_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLights_Event>
  : std::integral_constant<bool, has_bounded_size<carma_driver_msgs::srv::SetLights_Request>::value && has_bounded_size<carma_driver_msgs::srv::SetLights_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<carma_driver_msgs::srv::SetLights_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::SetLights>()
{
  return "carma_driver_msgs::srv::SetLights";
}

template<>
inline const char * name<carma_driver_msgs::srv::SetLights>()
{
  return "carma_driver_msgs/srv/SetLights";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::SetLights>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_driver_msgs::srv::SetLights_Request>::value &&
    has_fixed_size<carma_driver_msgs::srv::SetLights_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_driver_msgs::srv::SetLights>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_driver_msgs::srv::SetLights_Request>::value &&
    has_bounded_size<carma_driver_msgs::srv::SetLights_Response>::value
  >
{
};

template<>
struct is_service<carma_driver_msgs::srv::SetLights>
  : std::true_type
{
};

template<>
struct is_service_request<carma_driver_msgs::srv::SetLights_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_driver_msgs::srv::SetLights_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHTS__TRAITS_HPP_
