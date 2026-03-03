// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DYear.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_year.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/d_year__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DYear_year
{
public:
  Init_DYear_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::DYear year(::j2735_v2x_msgs::msg::DYear::_year_type arg)
  {
    msg_.year = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DYear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DYear>()
{
  return j2735_v2x_msgs::msg::builder::Init_DYear_year();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_YEAR__BUILDER_HPP_
