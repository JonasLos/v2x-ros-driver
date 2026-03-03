// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/HeadingSlice.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/heading_slice.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/heading_slice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_HeadingSlice_heading_slice
{
public:
  Init_HeadingSlice_heading_slice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::HeadingSlice heading_slice(::j2735_v2x_msgs::msg::HeadingSlice::_heading_slice_type arg)
  {
    msg_.heading_slice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::HeadingSlice msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::HeadingSlice>()
{
  return j2735_v2x_msgs::msg::builder::Init_HeadingSlice_heading_slice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__BUILDER_HPP_
