// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AnimalType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/animal_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/animal_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AnimalType_type
{
public:
  Init_AnimalType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AnimalType type(::j2735_v2x_msgs::msg::AnimalType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AnimalType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AnimalType>()
{
  return j2735_v2x_msgs::msg::builder::Init_AnimalType_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__BUILDER_HPP_
