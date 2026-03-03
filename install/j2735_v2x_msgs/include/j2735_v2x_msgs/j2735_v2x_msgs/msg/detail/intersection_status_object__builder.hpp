// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionStatusObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_status_object.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionStatusObject_intersection_status_object
{
public:
  Init_IntersectionStatusObject_intersection_status_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::IntersectionStatusObject intersection_status_object(::j2735_v2x_msgs::msg::IntersectionStatusObject::_intersection_status_object_type arg)
  {
    msg_.intersection_status_object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionStatusObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::IntersectionStatusObject>()
{
  return j2735_v2x_msgs::msg::builder::Init_IntersectionStatusObject_intersection_status_object();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATUS_OBJECT__BUILDER_HPP_
