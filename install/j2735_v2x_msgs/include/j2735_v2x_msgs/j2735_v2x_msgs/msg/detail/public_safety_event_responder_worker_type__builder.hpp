// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PublicSafetyEventResponderWorkerType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/public_safety_event_responder_worker_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/public_safety_event_responder_worker_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PublicSafetyEventResponderWorkerType_type
{
public:
  Init_PublicSafetyEventResponderWorkerType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType type(::j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PublicSafetyEventResponderWorkerType>()
{
  return j2735_v2x_msgs::msg::builder::Init_PublicSafetyEventResponderWorkerType_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PUBLIC_SAFETY_EVENT_RESPONDER_WORKER_TYPE__BUILDER_HPP_
