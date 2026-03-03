// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_driver_msgs:srv/GetDriverApi.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/get_driver_api.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__TRAITS_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_driver_msgs/srv/detail/get_driver_api__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace carma_driver_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDriverApi_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDriverApi_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDriverApi_Request & msg, bool use_flow_style = false)
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
  const carma_driver_msgs::srv::GetDriverApi_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::srv::GetDriverApi_Request & msg)
{
  return carma_driver_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::srv::GetDriverApi_Request>()
{
  return "carma_driver_msgs::srv::GetDriverApi_Request";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetDriverApi_Request>()
{
  return "carma_driver_msgs/srv/GetDriverApi_Request";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetDriverApi_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carma_driver_msgs::srv::GetDriverApi_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace carma_driver_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDriverApi_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: api_list
  {
    if (msg.api_list.size() == 0) {
      out << "api_list: []";
    } else {
      out << "api_list: [";
      size_t pending_items = msg.api_list.size();
      for (auto item : msg.api_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetDriverApi_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: api_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.api_list.size() == 0) {
      out << "api_list: []\n";
    } else {
      out << "api_list:\n";
      for (auto item : msg.api_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDriverApi_Response & msg, bool use_flow_style = false)
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
  const carma_driver_msgs::srv::GetDriverApi_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::srv::GetDriverApi_Response & msg)
{
  return carma_driver_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::srv::GetDriverApi_Response>()
{
  return "carma_driver_msgs::srv::GetDriverApi_Response";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetDriverApi_Response>()
{
  return "carma_driver_msgs/srv/GetDriverApi_Response";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetDriverApi_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_driver_msgs::srv::GetDriverApi_Response>
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
  const GetDriverApi_Event & msg,
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
  const GetDriverApi_Event & msg,
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

inline std::string to_yaml(const GetDriverApi_Event & msg, bool use_flow_style = false)
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
  const carma_driver_msgs::srv::GetDriverApi_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_driver_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_driver_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_driver_msgs::srv::GetDriverApi_Event & msg)
{
  return carma_driver_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_driver_msgs::srv::GetDriverApi_Event>()
{
  return "carma_driver_msgs::srv::GetDriverApi_Event";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetDriverApi_Event>()
{
  return "carma_driver_msgs/srv/GetDriverApi_Event";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetDriverApi_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Event>
  : std::integral_constant<bool, has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Request>::value && has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<carma_driver_msgs::srv::GetDriverApi_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_driver_msgs::srv::GetDriverApi>()
{
  return "carma_driver_msgs::srv::GetDriverApi";
}

template<>
inline const char * name<carma_driver_msgs::srv::GetDriverApi>()
{
  return "carma_driver_msgs/srv/GetDriverApi";
}

template<>
struct has_fixed_size<carma_driver_msgs::srv::GetDriverApi>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_driver_msgs::srv::GetDriverApi_Request>::value &&
    has_fixed_size<carma_driver_msgs::srv::GetDriverApi_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_driver_msgs::srv::GetDriverApi>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Request>::value &&
    has_bounded_size<carma_driver_msgs::srv::GetDriverApi_Response>::value
  >
{
};

template<>
struct is_service<carma_driver_msgs::srv::GetDriverApi>
  : std::true_type
{
};

template<>
struct is_service_request<carma_driver_msgs::srv::GetDriverApi_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_driver_msgs::srv::GetDriverApi_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__TRAITS_HPP_
