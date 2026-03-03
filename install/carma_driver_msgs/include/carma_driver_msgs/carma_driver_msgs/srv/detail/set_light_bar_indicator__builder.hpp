// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/SetLightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/set_light_bar_indicator.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/srv/detail/set_light_bar_indicator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLightBarIndicator_Request_cda_type
{
public:
  explicit Init_SetLightBarIndicator_Request_cda_type(::carma_driver_msgs::srv::SetLightBarIndicator_Request & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::SetLightBarIndicator_Request cda_type(::carma_driver_msgs::srv::SetLightBarIndicator_Request::_cda_type_type arg)
  {
    msg_.cda_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Request msg_;
};

class Init_SetLightBarIndicator_Request_indicator
{
public:
  explicit Init_SetLightBarIndicator_Request_indicator(::carma_driver_msgs::srv::SetLightBarIndicator_Request & msg)
  : msg_(msg)
  {}
  Init_SetLightBarIndicator_Request_cda_type indicator(::carma_driver_msgs::srv::SetLightBarIndicator_Request::_indicator_type arg)
  {
    msg_.indicator = std::move(arg);
    return Init_SetLightBarIndicator_Request_cda_type(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Request msg_;
};

class Init_SetLightBarIndicator_Request_requester_name
{
public:
  explicit Init_SetLightBarIndicator_Request_requester_name(::carma_driver_msgs::srv::SetLightBarIndicator_Request & msg)
  : msg_(msg)
  {}
  Init_SetLightBarIndicator_Request_indicator requester_name(::carma_driver_msgs::srv::SetLightBarIndicator_Request::_requester_name_type arg)
  {
    msg_.requester_name = std::move(arg);
    return Init_SetLightBarIndicator_Request_indicator(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Request msg_;
};

class Init_SetLightBarIndicator_Request_state
{
public:
  Init_SetLightBarIndicator_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLightBarIndicator_Request_requester_name state(::carma_driver_msgs::srv::SetLightBarIndicator_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SetLightBarIndicator_Request_requester_name(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetLightBarIndicator_Request>()
{
  return carma_driver_msgs::srv::builder::Init_SetLightBarIndicator_Request_state();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLightBarIndicator_Response_status_code
{
public:
  Init_SetLightBarIndicator_Response_status_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::SetLightBarIndicator_Response status_code(::carma_driver_msgs::srv::SetLightBarIndicator_Response::_status_code_type arg)
  {
    msg_.status_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetLightBarIndicator_Response>()
{
  return carma_driver_msgs::srv::builder::Init_SetLightBarIndicator_Response_status_code();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLightBarIndicator_Event_response
{
public:
  explicit Init_SetLightBarIndicator_Event_response(::carma_driver_msgs::srv::SetLightBarIndicator_Event & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::SetLightBarIndicator_Event response(::carma_driver_msgs::srv::SetLightBarIndicator_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Event msg_;
};

class Init_SetLightBarIndicator_Event_request
{
public:
  explicit Init_SetLightBarIndicator_Event_request(::carma_driver_msgs::srv::SetLightBarIndicator_Event & msg)
  : msg_(msg)
  {}
  Init_SetLightBarIndicator_Event_response request(::carma_driver_msgs::srv::SetLightBarIndicator_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLightBarIndicator_Event_response(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Event msg_;
};

class Init_SetLightBarIndicator_Event_info
{
public:
  Init_SetLightBarIndicator_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLightBarIndicator_Event_request info(::carma_driver_msgs::srv::SetLightBarIndicator_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLightBarIndicator_Event_request(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLightBarIndicator_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetLightBarIndicator_Event>()
{
  return carma_driver_msgs::srv::builder::Init_SetLightBarIndicator_Event_info();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHT_BAR_INDICATOR__BUILDER_HPP_
