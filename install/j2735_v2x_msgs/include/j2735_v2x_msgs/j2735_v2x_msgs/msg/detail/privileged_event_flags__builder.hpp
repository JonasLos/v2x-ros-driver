// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PrivilegedEventFlags.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/privileged_event_flags.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/privileged_event_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PrivilegedEventFlags_privileged_event_flags
{
public:
  Init_PrivilegedEventFlags_privileged_event_flags()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PrivilegedEventFlags privileged_event_flags(::j2735_v2x_msgs::msg::PrivilegedEventFlags::_privileged_event_flags_type arg)
  {
    msg_.privileged_event_flags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PrivilegedEventFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PrivilegedEventFlags>()
{
  return j2735_v2x_msgs::msg::builder::Init_PrivilegedEventFlags_privileged_event_flags();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIVILEGED_EVENT_FLAGS__BUILDER_HPP_
