// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PrivilegedEvents.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/privileged_events.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/privileged_events__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PrivilegedEvents_event
{
public:
  explicit Init_PrivilegedEvents_event(::j2735_v2x_msgs::msg::PrivilegedEvents & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::PrivilegedEvents event(::j2735_v2x_msgs::msg::PrivilegedEvents::_event_type arg)
  {
    msg_.event = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PrivilegedEvents msg_;
};

class Init_PrivilegedEvents_ssp_index
{
public:
  Init_PrivilegedEvents_ssp_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrivilegedEvents_event ssp_index(::j2735_v2x_msgs::msg::PrivilegedEvents::_ssp_index_type arg)
  {
    msg_.ssp_index = std::move(arg);
    return Init_PrivilegedEvents_event(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PrivilegedEvents msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PrivilegedEvents>()
{
  return j2735_v2x_msgs::msg::builder::Init_PrivilegedEvents_ssp_index();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENTS__BUILDER_HPP_
