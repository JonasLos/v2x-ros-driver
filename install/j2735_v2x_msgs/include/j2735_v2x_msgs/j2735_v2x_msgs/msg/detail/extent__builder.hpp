// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Extent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/extent.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EXTENT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EXTENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/extent__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Extent_extent_value
{
public:
  Init_Extent_extent_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::Extent extent_value(::j2735_v2x_msgs::msg::Extent::_extent_value_type arg)
  {
    msg_.extent_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Extent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Extent>()
{
  return j2735_v2x_msgs::msg::builder::Init_Extent_extent_value();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EXTENT__BUILDER_HPP_
