// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/OffsetB09.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_b09.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/offset_b09__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetB09_offset
{
public:
  Init_OffsetB09_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::OffsetB09 offset(::j2735_v2x_msgs::msg::OffsetB09::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetB09 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::OffsetB09>()
{
  return j2735_v2x_msgs::msg::builder::Init_OffsetB09_offset();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B09__BUILDER_HPP_
