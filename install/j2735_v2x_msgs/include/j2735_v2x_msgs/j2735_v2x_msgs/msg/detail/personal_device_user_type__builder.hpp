// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUserType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_device_user_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USER_TYPE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USER_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/personal_device_user_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonalDeviceUserType_type
{
public:
  Init_PersonalDeviceUserType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PersonalDeviceUserType type(::j2735_v2x_msgs::msg::PersonalDeviceUserType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PersonalDeviceUserType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PersonalDeviceUserType>()
{
  return j2735_v2x_msgs::msg::builder::Init_PersonalDeviceUserType_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USER_TYPE__BUILDER_HPP_
