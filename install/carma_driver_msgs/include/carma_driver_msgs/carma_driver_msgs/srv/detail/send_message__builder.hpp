// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:srv/SendMessage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/srv/send_message.hpp"


#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/srv/detail/send_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SendMessage_Request_message_to_send
{
public:
  Init_SendMessage_Request_message_to_send()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::SendMessage_Request message_to_send(::carma_driver_msgs::srv::SendMessage_Request::_message_to_send_type arg)
  {
    msg_.message_to_send = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SendMessage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SendMessage_Request>()
{
  return carma_driver_msgs::srv::builder::Init_SendMessage_Request_message_to_send();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SendMessage_Response_error_status
{
public:
  Init_SendMessage_Response_error_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_driver_msgs::srv::SendMessage_Response error_status(::carma_driver_msgs::srv::SendMessage_Response::_error_status_type arg)
  {
    msg_.error_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SendMessage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SendMessage_Response>()
{
  return carma_driver_msgs::srv::builder::Init_SendMessage_Response_error_status();
}

}  // namespace carma_driver_msgs


namespace carma_driver_msgs
{

namespace srv
{

namespace builder
{

class Init_SendMessage_Event_response
{
public:
  explicit Init_SendMessage_Event_response(::carma_driver_msgs::srv::SendMessage_Event & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::srv::SendMessage_Event response(::carma_driver_msgs::srv::SendMessage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::srv::SendMessage_Event msg_;
};

class Init_SendMessage_Event_request
{
public:
  explicit Init_SendMessage_Event_request(::carma_driver_msgs::srv::SendMessage_Event & msg)
  : msg_(msg)
  {}
  Init_SendMessage_Event_response request(::carma_driver_msgs::srv::SendMessage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SendMessage_Event_response(msg_);
  }

private:
  ::carma_driver_msgs::srv::SendMessage_Event msg_;
};

class Init_SendMessage_Event_info
{
public:
  Init_SendMessage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SendMessage_Event_request info(::carma_driver_msgs::srv::SendMessage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SendMessage_Event_request(msg_);
  }

private:
  ::carma_driver_msgs::srv::SendMessage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::srv::SendMessage_Event>()
{
  return carma_driver_msgs::srv::builder::Init_SendMessage_Event_info();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SEND_MESSAGE__BUILDER_HPP_
