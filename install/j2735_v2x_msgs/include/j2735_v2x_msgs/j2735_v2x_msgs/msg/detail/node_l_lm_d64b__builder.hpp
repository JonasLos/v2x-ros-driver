// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeLLmD64b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_l_lm_d64b.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeLLmD64b_latitude
{
public:
  explicit Init_NodeLLmD64b_latitude(::j2735_v2x_msgs::msg::NodeLLmD64b & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeLLmD64b latitude(::j2735_v2x_msgs::msg::NodeLLmD64b::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeLLmD64b msg_;
};

class Init_NodeLLmD64b_longitude
{
public:
  Init_NodeLLmD64b_longitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeLLmD64b_latitude longitude(::j2735_v2x_msgs::msg::NodeLLmD64b::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_NodeLLmD64b_latitude(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeLLmD64b msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeLLmD64b>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeLLmD64b_longitude();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_L_LM_D64B__BUILDER_HPP_
