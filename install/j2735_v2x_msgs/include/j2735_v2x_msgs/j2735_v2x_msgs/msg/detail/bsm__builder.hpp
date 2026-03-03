// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/bsm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BSM_regional
{
public:
  explicit Init_BSM_regional(::j2735_v2x_msgs::msg::BSM & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::BSM regional(::j2735_v2x_msgs::msg::BSM::_regional_type arg)
  {
    msg_.regional = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSM msg_;
};

class Init_BSM_part_ii
{
public:
  explicit Init_BSM_part_ii(::j2735_v2x_msgs::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_regional part_ii(::j2735_v2x_msgs::msg::BSM::_part_ii_type arg)
  {
    msg_.part_ii = std::move(arg);
    return Init_BSM_regional(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSM msg_;
};

class Init_BSM_presence_vector
{
public:
  explicit Init_BSM_presence_vector(::j2735_v2x_msgs::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_part_ii presence_vector(::j2735_v2x_msgs::msg::BSM::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_BSM_part_ii(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSM msg_;
};

class Init_BSM_core_data
{
public:
  explicit Init_BSM_core_data(::j2735_v2x_msgs::msg::BSM & msg)
  : msg_(msg)
  {}
  Init_BSM_presence_vector core_data(::j2735_v2x_msgs::msg::BSM::_core_data_type arg)
  {
    msg_.core_data = std::move(arg);
    return Init_BSM_presence_vector(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSM msg_;
};

class Init_BSM_header
{
public:
  Init_BSM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSM_core_data header(::j2735_v2x_msgs::msg::BSM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BSM_core_data(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BSM>()
{
  return j2735_v2x_msgs::msg::builder::Init_BSM_header();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM__BUILDER_HPP_
