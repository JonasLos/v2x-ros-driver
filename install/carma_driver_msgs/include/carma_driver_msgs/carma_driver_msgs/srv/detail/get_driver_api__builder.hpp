// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/GetDriverApi.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/get_driver_api.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/srv/detail/get_driver_api__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriverApi_Request>()
{
  return ::carma_driver_msgs::srv::GetDriverApi_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriverApi_Response_api_list
{
public:
  Init_GetDriverApi_Response_api_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetDriverApi_Response api_list(::carma_driver_msgs::srv::GetDriverApi_Response::_api_list_type arg)
  {
    msg_.api_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriverApi_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriverApi_Response>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriverApi_Response_api_list();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriverApi_Event_response
{
public:
  explicit Init_GetDriverApi_Event_response(::carma_driver_msgs::srv::GetDriverApi_Event & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::GetDriverApi_Event response(::carma_driver_msgs::srv::GetDriverApi_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriverApi_Event msg_;
};

class Init_GetDriverApi_Event_request
{
public:
  explicit Init_GetDriverApi_Event_request(::carma_driver_msgs::srv::GetDriverApi_Event & msg)
  : msg_(msg)
  {}
  Init_GetDriverApi_Event_response request(::carma_driver_msgs::srv::GetDriverApi_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetDriverApi_Event_response(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriverApi_Event msg_;
};

class Init_GetDriverApi_Event_info
{
public:
  Init_GetDriverApi_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDriverApi_Event_request info(::carma_driver_msgs::srv::GetDriverApi_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDriverApi_Event_request(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriverApi_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriverApi_Event>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriverApi_Event_info();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVER_API__BUILDER_HPP_
