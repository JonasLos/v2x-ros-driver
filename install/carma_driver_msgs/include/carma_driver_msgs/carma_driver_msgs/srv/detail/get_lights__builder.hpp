// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/GetLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/get_lights.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/srv/detail/get_lights__struct.hpp"
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
auto build<::carma_driver_msgs::srv::GetLights_Request>()
{
  return ::carma_driver_msgs::srv::GetLights_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLights_Response_status
{
public:
  Init_GetLights_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetLights_Response status(::carma_driver_msgs::srv::GetLights_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetLights_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetLights_Response>()
{
  return carma_driver_msgs::srv::builder::Init_GetLights_Response_status();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetLights_Event_response
{
public:
  explicit Init_GetLights_Event_response(::carma_driver_msgs::srv::GetLights_Event & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::GetLights_Event response(::carma_driver_msgs::srv::GetLights_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetLights_Event msg_;
};

class Init_GetLights_Event_request
{
public:
  explicit Init_GetLights_Event_request(::carma_driver_msgs::srv::GetLights_Event & msg)
  : msg_(msg)
  {}
  Init_GetLights_Event_response request(::carma_driver_msgs::srv::GetLights_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLights_Event_response(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetLights_Event msg_;
};

class Init_GetLights_Event_info
{
public:
  Init_GetLights_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLights_Event_request info(::carma_driver_msgs::srv::GetLights_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLights_Event_request(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetLights_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetLights_Event>()
{
  return carma_driver_msgs::srv::builder::Init_GetLights_Event_info();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_LIGHTS__BUILDER_HPP_
