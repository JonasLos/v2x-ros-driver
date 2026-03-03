// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_part_ii_extension.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BSMPartIIExtension_supplemental_vehicle_extensions
{
public:
  explicit Init_BSMPartIIExtension_supplemental_vehicle_extensions(::j2735_v2x_msgs::msg::BSMPartIIExtension & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::BSMPartIIExtension supplemental_vehicle_extensions(::j2735_v2x_msgs::msg::BSMPartIIExtension::_supplemental_vehicle_extensions_type arg)
  {
    msg_.supplemental_vehicle_extensions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMPartIIExtension msg_;
};

class Init_BSMPartIIExtension_special_vehicle_extensions
{
public:
  explicit Init_BSMPartIIExtension_special_vehicle_extensions(::j2735_v2x_msgs::msg::BSMPartIIExtension & msg)
  : msg_(msg)
  {}
  Init_BSMPartIIExtension_supplemental_vehicle_extensions special_vehicle_extensions(::j2735_v2x_msgs::msg::BSMPartIIExtension::_special_vehicle_extensions_type arg)
  {
    msg_.special_vehicle_extensions = std::move(arg);
    return Init_BSMPartIIExtension_supplemental_vehicle_extensions(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMPartIIExtension msg_;
};

class Init_BSMPartIIExtension_vehicle_safety_extensions
{
public:
  explicit Init_BSMPartIIExtension_vehicle_safety_extensions(::j2735_v2x_msgs::msg::BSMPartIIExtension & msg)
  : msg_(msg)
  {}
  Init_BSMPartIIExtension_special_vehicle_extensions vehicle_safety_extensions(::j2735_v2x_msgs::msg::BSMPartIIExtension::_vehicle_safety_extensions_type arg)
  {
    msg_.vehicle_safety_extensions = std::move(arg);
    return Init_BSMPartIIExtension_special_vehicle_extensions(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMPartIIExtension msg_;
};

class Init_BSMPartIIExtension_part_ii_id
{
public:
  Init_BSMPartIIExtension_part_ii_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSMPartIIExtension_vehicle_safety_extensions part_ii_id(::j2735_v2x_msgs::msg::BSMPartIIExtension::_part_ii_id_type arg)
  {
    msg_.part_ii_id = std::move(arg);
    return Init_BSMPartIIExtension_vehicle_safety_extensions(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMPartIIExtension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BSMPartIIExtension>()
{
  return j2735_v2x_msgs::msg::builder::Init_BSMPartIIExtension_part_ii_id();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__BUILDER_HPP_
