// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/GetDriversWithCapabilities.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/get_drivers_with_capabilities.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/srv/detail/get_drivers_with_capabilities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriversWithCapabilities_Request_capabilities
{
public:
  Init_GetDriversWithCapabilities_Request_capabilities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Request capabilities(::carma_driver_msgs::srv::GetDriversWithCapabilities_Request::_capabilities_type arg)
  {
    msg_.capabilities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriversWithCapabilities_Request>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriversWithCapabilities_Request_capabilities();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriversWithCapabilities_Response_driver_data
{
public:
  Init_GetDriversWithCapabilities_Response_driver_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Response driver_data(::carma_driver_msgs::srv::GetDriversWithCapabilities_Response::_driver_data_type arg)
  {
    msg_.driver_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriversWithCapabilities_Response>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriversWithCapabilities_Response_driver_data();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_GetDriversWithCapabilities_Event_response
{
public:
  explicit Init_GetDriversWithCapabilities_Event_response(::carma_driver_msgs::srv::GetDriversWithCapabilities_Event & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Event response(::carma_driver_msgs::srv::GetDriversWithCapabilities_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Event msg_;
};

class Init_GetDriversWithCapabilities_Event_request
{
public:
  explicit Init_GetDriversWithCapabilities_Event_request(::carma_driver_msgs::srv::GetDriversWithCapabilities_Event & msg)
  : msg_(msg)
  {}
  Init_GetDriversWithCapabilities_Event_response request(::carma_driver_msgs::srv::GetDriversWithCapabilities_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetDriversWithCapabilities_Event_response(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Event msg_;
};

class Init_GetDriversWithCapabilities_Event_info
{
public:
  Init_GetDriversWithCapabilities_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDriversWithCapabilities_Event_request info(::carma_driver_msgs::srv::GetDriversWithCapabilities_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetDriversWithCapabilities_Event_request(msg_);
  }

private:
  ::carma_driver_msgs::srv::GetDriversWithCapabilities_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::GetDriversWithCapabilities_Event>()
{
  return carma_driver_msgs::srv::builder::Init_GetDriversWithCapabilities_Event_info();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__GET_DRIVERS_WITH_CAPABILITIES__BUILDER_HPP_
