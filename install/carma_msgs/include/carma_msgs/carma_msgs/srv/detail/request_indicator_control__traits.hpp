// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/srv/request_indicator_control.hpp"


#ifndef CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__TRAITS_HPP_
#define CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ind_list'
#include "carma_msgs/msg/detail/light_bar_indicator__traits.hpp"
// Member 'cda_list'
#include "carma_msgs/msg/detail/light_bar_cda_type__traits.hpp"

namespace carma_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestIndicatorControl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ind_list
  {
    if (msg.ind_list.size() == 0) {
      out << "ind_list: []";
    } else {
      out << "ind_list: [";
      size_t pending_items = msg.ind_list.size();
      for (auto item : msg.ind_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cda_list
  {
    if (msg.cda_list.size() == 0) {
      out << "cda_list: []";
    } else {
      out << "cda_list: [";
      size_t pending_items = msg.cda_list.size();
      for (auto item : msg.cda_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: requester_name
  {
    out << "requester_name: ";
    rosidl_generator_traits::value_to_yaml(msg.requester_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RequestIndicatorControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ind_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ind_list.size() == 0) {
      out << "ind_list: []\n";
    } else {
      out << "ind_list:\n";
      for (auto item : msg.ind_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cda_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cda_list.size() == 0) {
      out << "cda_list: []\n";
    } else {
      out << "cda_list:\n";
      for (auto item : msg.cda_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: requester_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester_name: ";
    rosidl_generator_traits::value_to_yaml(msg.requester_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestIndicatorControl_Request & msg, bool use_flow_style = false)
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

}  // namespace carma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_msgs::srv::RequestIndicatorControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::srv::RequestIndicatorControl_Request & msg)
{
  return carma_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return "carma_msgs::srv::RequestIndicatorControl_Request";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return "carma_msgs/srv/RequestIndicatorControl_Request";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'ind_list'
// already included above
// #include "carma_msgs/msg/detail/light_bar_indicator__traits.hpp"
// Member 'cda_list'
// already included above
// #include "carma_msgs/msg/detail/light_bar_cda_type__traits.hpp"

namespace carma_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestIndicatorControl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ind_list
  {
    if (msg.ind_list.size() == 0) {
      out << "ind_list: []";
    } else {
      out << "ind_list: [";
      size_t pending_items = msg.ind_list.size();
      for (auto item : msg.ind_list) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cda_list
  {
    if (msg.cda_list.size() == 0) {
      out << "cda_list: []";
    } else {
      out << "cda_list: [";
      size_t pending_items = msg.cda_list.size();
      for (auto item : msg.cda_list) {
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
  const RequestIndicatorControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ind_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ind_list.size() == 0) {
      out << "ind_list: []\n";
    } else {
      out << "ind_list:\n";
      for (auto item : msg.ind_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cda_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cda_list.size() == 0) {
      out << "cda_list: []\n";
    } else {
      out << "cda_list:\n";
      for (auto item : msg.cda_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RequestIndicatorControl_Response & msg, bool use_flow_style = false)
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

}  // namespace carma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_msgs::srv::RequestIndicatorControl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::srv::RequestIndicatorControl_Response & msg)
{
  return carma_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return "carma_msgs::srv::RequestIndicatorControl_Response";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return "carma_msgs/srv/RequestIndicatorControl_Response";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace carma_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RequestIndicatorControl_Event & msg,
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
  const RequestIndicatorControl_Event & msg,
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

inline std::string to_yaml(const RequestIndicatorControl_Event & msg, bool use_flow_style = false)
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

}  // namespace carma_msgs

namespace rosidl_generator_traits
{

[[deprecated("use carma_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const carma_msgs::srv::RequestIndicatorControl_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  carma_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use carma_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const carma_msgs::srv::RequestIndicatorControl_Event & msg)
{
  return carma_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl_Event>()
{
  return "carma_msgs::srv::RequestIndicatorControl_Event";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl_Event>()
{
  return "carma_msgs/srv/RequestIndicatorControl_Event";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Event>
  : std::integral_constant<bool, has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Request>::value && has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<carma_msgs::srv::RequestIndicatorControl_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carma_msgs::srv::RequestIndicatorControl>()
{
  return "carma_msgs::srv::RequestIndicatorControl";
}

template<>
inline const char * name<carma_msgs::srv::RequestIndicatorControl>()
{
  return "carma_msgs/srv/RequestIndicatorControl";
}

template<>
struct has_fixed_size<carma_msgs::srv::RequestIndicatorControl>
  : std::integral_constant<
    bool,
    has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Request>::value &&
    has_fixed_size<carma_msgs::srv::RequestIndicatorControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<carma_msgs::srv::RequestIndicatorControl>
  : std::integral_constant<
    bool,
    has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Request>::value &&
    has_bounded_size<carma_msgs::srv::RequestIndicatorControl_Response>::value
  >
{
};

template<>
struct is_service<carma_msgs::srv::RequestIndicatorControl>
  : std::true_type
{
};

template<>
struct is_service_request<carma_msgs::srv::RequestIndicatorControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carma_msgs::srv::RequestIndicatorControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__TRAITS_HPP_
