// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/CoefficientOfFriction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/coefficient_of_friction.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/coefficient_of_friction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_CoefficientOfFriction_coefficient
{
public:
  Init_CoefficientOfFriction_coefficient()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::CoefficientOfFriction coefficient(::j2735_v2x_msgs::msg::CoefficientOfFriction::_coefficient_type arg)
  {
    msg_.coefficient = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::CoefficientOfFriction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::CoefficientOfFriction>()
{
  return j2735_v2x_msgs::msg::builder::Init_CoefficientOfFriction_coefficient();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__COEFFICIENT_OF_FRICTION__BUILDER_HPP_
