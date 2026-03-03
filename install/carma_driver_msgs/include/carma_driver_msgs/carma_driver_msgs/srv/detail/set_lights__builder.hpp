// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/SetLights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/set_lights.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHTS__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/srv/detail/set_lights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLights_Request_set_state
{
public:
  Init_SetLights_Request_set_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::SetLights_Request set_state(::carma_driver_msgs::srv::SetLights_Request::_set_state_type arg)
  {
    msg_.set_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLights_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetLights_Request>()
{
  return carma_driver_msgs::srv::builder::Init_SetLights_Request_set_state();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetLights_Response>()
{
  return ::carma_driver_msgs::srv::SetLights_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SetLights_Event_response
{
public:
  explicit Init_SetLights_Event_response(::carma_driver_msgs::srv::SetLights_Event & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::SetLights_Event response(::carma_driver_msgs::srv::SetLights_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLights_Event msg_;
};

class Init_SetLights_Event_request
{
public:
  explicit Init_SetLights_Event_request(::carma_driver_msgs::srv::SetLights_Event & msg)
  : msg_(msg)
  {}
  Init_SetLights_Event_response request(::carma_driver_msgs::srv::SetLights_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLights_Event_response(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLights_Event msg_;
};

class Init_SetLights_Event_info
{
public:
  Init_SetLights_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLights_Event_request info(::carma_driver_msgs::srv::SetLights_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLights_Event_request(msg_);
  }

private:
  ::carma_driver_msgs::srv::SetLights_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SetLights_Event>()
{
  return carma_driver_msgs::srv::builder::Init_SetLights_Event_info();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_LIGHTS__BUILDER_HPP_
