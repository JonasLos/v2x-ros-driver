// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/latitude.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/latitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Latitude_latitude
{
public:
  Init_Latitude_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::Latitude latitude(::j2735_v2x_msgs::msg::Latitude::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Latitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Latitude>()
{
  return j2735_v2x_msgs::msg::builder::Init_Latitude_latitude();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LATITUDE__BUILDER_HPP_
