// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/spat.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPAT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/spat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SPAT_intersections
{
public:
  explicit Init_SPAT_intersections(::j2735_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::SPAT intersections(::j2735_v2x_msgs::msg::SPAT::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_name_exists
{
public:
  explicit Init_SPAT_name_exists(::j2735_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_intersections name_exists(::j2735_v2x_msgs::msg::SPAT::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_SPAT_intersections(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_name
{
public:
  explicit Init_SPAT_name(::j2735_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_name_exists name(::j2735_v2x_msgs::msg::SPAT::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SPAT_name_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_time_stamp_exists
{
public:
  explicit Init_SPAT_time_stamp_exists(::j2735_v2x_msgs::msg::SPAT & msg)
  : msg_(msg)
  {}
  Init_SPAT_name time_stamp_exists(::j2735_v2x_msgs::msg::SPAT::_time_stamp_exists_type arg)
  {
    msg_.time_stamp_exists = std::move(arg);
    return Init_SPAT_name(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SPAT msg_;
};

class Init_SPAT_time_stamp
{
public:
  Init_SPAT_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SPAT_time_stamp_exists time_stamp(::j2735_v2x_msgs::msg::SPAT::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SPAT_time_stamp_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SPAT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SPAT>()
{
  return j2735_v2x_msgs::msg::builder::Init_SPAT_time_stamp();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPAT__BUILDER_HPP_
