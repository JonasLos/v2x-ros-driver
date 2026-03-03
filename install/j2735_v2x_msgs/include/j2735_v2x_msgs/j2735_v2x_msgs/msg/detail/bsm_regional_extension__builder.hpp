// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_regional_extension.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BSMRegionalExtension_route_destination_points
{
public:
  explicit Init_BSMRegionalExtension_route_destination_points(::j2735_v2x_msgs::msg::BSMRegionalExtension & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::BSMRegionalExtension route_destination_points(::j2735_v2x_msgs::msg::BSMRegionalExtension::_route_destination_points_type arg)
  {
    msg_.route_destination_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMRegionalExtension msg_;
};

class Init_BSMRegionalExtension_regional_extension_id
{
public:
  Init_BSMRegionalExtension_regional_extension_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSMRegionalExtension_route_destination_points regional_extension_id(::j2735_v2x_msgs::msg::BSMRegionalExtension::_regional_extension_id_type arg)
  {
    msg_.regional_extension_id = std::move(arg);
    return Init_BSMRegionalExtension_route_destination_points(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMRegionalExtension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BSMRegionalExtension>()
{
  return j2735_v2x_msgs::msg::builder::Init_BSMRegionalExtension_regional_extension_id();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__BUILDER_HPP_
