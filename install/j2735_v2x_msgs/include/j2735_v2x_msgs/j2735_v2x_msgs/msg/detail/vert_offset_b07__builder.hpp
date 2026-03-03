// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vert_offset_b07.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VertOffsetB07_offset
{
public:
  Init_VertOffsetB07_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::VertOffsetB07 offset(::j2735_v2x_msgs::msg::VertOffsetB07::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VertOffsetB07 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VertOffsetB07>()
{
  return j2735_v2x_msgs::msg::builder::Init_VertOffsetB07_offset();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__BUILDER_HPP_
