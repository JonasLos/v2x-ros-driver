// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalClusterRadius.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_cluster_radius.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CLUSTER_RADIUS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CLUSTER_RADIUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/personal_cluster_radius__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonalClusterRadius_cluster_radius
{
public:
  Init_PersonalClusterRadius_cluster_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PersonalClusterRadius cluster_radius(::j2735_v2x_msgs::msg::PersonalClusterRadius::_cluster_radius_type arg)
  {
    msg_.cluster_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PersonalClusterRadius msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PersonalClusterRadius>()
{
  return j2735_v2x_msgs::msg::builder::Init_PersonalClusterRadius_cluster_radius();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_CLUSTER_RADIUS__BUILDER_HPP_
