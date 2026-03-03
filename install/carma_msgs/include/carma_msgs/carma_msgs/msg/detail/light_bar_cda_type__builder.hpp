// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:msg/LightBarCDAType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_cda_type.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__BUILDER_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_msgs/msg/detail/light_bar_cda_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_msgs
{

namespace msg
{

namespace builder
{

class Init_LightBarCDAType_type
{
public:
  Init_LightBarCDAType_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::carma_msgs::msg::LightBarCDAType type(::carma_msgs::msg::LightBarCDAType::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::msg::LightBarCDAType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::msg::LightBarCDAType>()
{
  return carma_msgs::msg::builder::Init_LightBarCDAType_type();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__BUILDER_HPP_
