// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerMass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_mass.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/trailer_mass__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerMass_trailer_mass
{
public:
  Init_TrailerMass_trailer_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::TrailerMass trailer_mass(::j2735_v2x_msgs::msg::TrailerMass::_trailer_mass_type arg)
  {
    msg_.trailer_mass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerMass msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrailerMass>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrailerMass_trailer_mass();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_MASS__BUILDER_HPP_
