// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_class_assignment.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/restriction_class_assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RestrictionClassAssignment_id
{
public:
  Init_RestrictionClassAssignment_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::RestrictionClassAssignment id(::j2735_v2x_msgs::msg::RestrictionClassAssignment::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RestrictionClassAssignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RestrictionClassAssignment>()
{
  return j2735_v2x_msgs::msg::builder::Init_RestrictionClassAssignment_id();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__BUILDER_HPP_
