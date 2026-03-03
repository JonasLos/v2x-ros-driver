// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:srv/RequestIndicatorControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/srv/request_indicator_control.hpp"


#ifndef CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__BUILDER_HPP_
#define CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_msgs/srv/detail/request_indicator_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestIndicatorControl_Request_requester_name
{
public:
  explicit Init_RequestIndicatorControl_Request_requester_name(::carma_msgs::srv::RequestIndicatorControl_Request & msg)
  : msg_(msg)
  {}
  ::carma_msgs::srv::RequestIndicatorControl_Request requester_name(::carma_msgs::srv::RequestIndicatorControl_Request::_requester_name_type arg)
  {
    msg_.requester_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Request msg_;
};

class Init_RequestIndicatorControl_Request_cda_list
{
public:
  explicit Init_RequestIndicatorControl_Request_cda_list(::carma_msgs::srv::RequestIndicatorControl_Request & msg)
  : msg_(msg)
  {}
  Init_RequestIndicatorControl_Request_requester_name cda_list(::carma_msgs::srv::RequestIndicatorControl_Request::_cda_list_type arg)
  {
    msg_.cda_list = std::move(arg);
    return Init_RequestIndicatorControl_Request_requester_name(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Request msg_;
};

class Init_RequestIndicatorControl_Request_ind_list
{
public:
  Init_RequestIndicatorControl_Request_ind_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestIndicatorControl_Request_cda_list ind_list(::carma_msgs::srv::RequestIndicatorControl_Request::_ind_list_type arg)
  {
    msg_.ind_list = std::move(arg);
    return Init_RequestIndicatorControl_Request_cda_list(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::RequestIndicatorControl_Request>()
{
  return carma_msgs::srv::builder::Init_RequestIndicatorControl_Request_ind_list();
}

}  // namespace carma_msgs


namespace carma_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestIndicatorControl_Response_cda_list
{
public:
  explicit Init_RequestIndicatorControl_Response_cda_list(::carma_msgs::srv::RequestIndicatorControl_Response & msg)
  : msg_(msg)
  {}
  ::carma_msgs::srv::RequestIndicatorControl_Response cda_list(::carma_msgs::srv::RequestIndicatorControl_Response::_cda_list_type arg)
  {
    msg_.cda_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Response msg_;
};

class Init_RequestIndicatorControl_Response_ind_list
{
public:
  Init_RequestIndicatorControl_Response_ind_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestIndicatorControl_Response_cda_list ind_list(::carma_msgs::srv::RequestIndicatorControl_Response::_ind_list_type arg)
  {
    msg_.ind_list = std::move(arg);
    return Init_RequestIndicatorControl_Response_cda_list(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::RequestIndicatorControl_Response>()
{
  return carma_msgs::srv::builder::Init_RequestIndicatorControl_Response_ind_list();
}

}  // namespace carma_msgs


namespace carma_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestIndicatorControl_Event_response
{
public:
  explicit Init_RequestIndicatorControl_Event_response(::carma_msgs::srv::RequestIndicatorControl_Event & msg)
  : msg_(msg)
  {}
  ::carma_msgs::srv::RequestIndicatorControl_Event response(::carma_msgs::srv::RequestIndicatorControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Event msg_;
};

class Init_RequestIndicatorControl_Event_request
{
public:
  explicit Init_RequestIndicatorControl_Event_request(::carma_msgs::srv::RequestIndicatorControl_Event & msg)
  : msg_(msg)
  {}
  Init_RequestIndicatorControl_Event_response request(::carma_msgs::srv::RequestIndicatorControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RequestIndicatorControl_Event_response(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Event msg_;
};

class Init_RequestIndicatorControl_Event_info
{
public:
  Init_RequestIndicatorControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestIndicatorControl_Event_request info(::carma_msgs::srv::RequestIndicatorControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RequestIndicatorControl_Event_request(msg_);
  }

private:
  ::carma_msgs::srv::RequestIndicatorControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::srv::RequestIndicatorControl_Event>()
{
  return carma_msgs::srv::builder::Init_RequestIndicatorControl_Event_info();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__SRV__DETAIL__REQUEST_INDICATOR_CONTROL__BUILDER_HPP_
