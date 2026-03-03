// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SirenInUse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/siren_in_use.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SIREN_IN_USE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SIREN_IN_USE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/siren_in_use__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SirenInUse_siren_in_use
{
public:
  Init_SirenInUse_siren_in_use()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::SirenInUse siren_in_use(::j2735_v2x_msgs::msg::SirenInUse::_siren_in_use_type arg)
  {
    msg_.siren_in_use = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SirenInUse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SirenInUse>()
{
  return j2735_v2x_msgs::msg::builder::Init_SirenInUse_siren_in_use();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SIREN_IN_USE__BUILDER_HPP_
