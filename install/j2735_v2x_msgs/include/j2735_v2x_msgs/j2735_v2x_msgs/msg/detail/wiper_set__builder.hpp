// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/WiperSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_set.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/wiper_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_WiperSet_rate_rear
{
public:
  explicit Init_WiperSet_rate_rear(::j2735_v2x_msgs::msg::WiperSet & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::WiperSet rate_rear(::j2735_v2x_msgs::msg::WiperSet::_rate_rear_type arg)
  {
    msg_.rate_rear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperSet msg_;
};

class Init_WiperSet_status_rear
{
public:
  explicit Init_WiperSet_status_rear(::j2735_v2x_msgs::msg::WiperSet & msg)
  : msg_(msg)
  {}
  Init_WiperSet_rate_rear status_rear(::j2735_v2x_msgs::msg::WiperSet::_status_rear_type arg)
  {
    msg_.status_rear = std::move(arg);
    return Init_WiperSet_rate_rear(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperSet msg_;
};

class Init_WiperSet_rate_front
{
public:
  explicit Init_WiperSet_rate_front(::j2735_v2x_msgs::msg::WiperSet & msg)
  : msg_(msg)
  {}
  Init_WiperSet_status_rear rate_front(::j2735_v2x_msgs::msg::WiperSet::_rate_front_type arg)
  {
    msg_.rate_front = std::move(arg);
    return Init_WiperSet_status_rear(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperSet msg_;
};

class Init_WiperSet_status_front
{
public:
  explicit Init_WiperSet_status_front(::j2735_v2x_msgs::msg::WiperSet & msg)
  : msg_(msg)
  {}
  Init_WiperSet_rate_front status_front(::j2735_v2x_msgs::msg::WiperSet::_status_front_type arg)
  {
    msg_.status_front = std::move(arg);
    return Init_WiperSet_rate_front(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperSet msg_;
};

class Init_WiperSet_presence_vector
{
public:
  Init_WiperSet_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WiperSet_status_front presence_vector(::j2735_v2x_msgs::msg::WiperSet::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_WiperSet_status_front(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::WiperSet>()
{
  return j2735_v2x_msgs::msg::builder::Init_WiperSet_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_SET__BUILDER_HPP_
