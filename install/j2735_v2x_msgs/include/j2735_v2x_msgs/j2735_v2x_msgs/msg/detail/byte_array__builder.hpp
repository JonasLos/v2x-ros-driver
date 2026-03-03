// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ByteArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/byte_array.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/byte_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ByteArray_content
{
public:
  explicit Init_ByteArray_content(::j2735_v2x_msgs::msg::ByteArray & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::ByteArray content(::j2735_v2x_msgs::msg::ByteArray::_content_type arg)
  {
    msg_.content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ByteArray msg_;
};

class Init_ByteArray_message_type
{
public:
  explicit Init_ByteArray_message_type(::j2735_v2x_msgs::msg::ByteArray & msg)
  : msg_(msg)
  {}
  Init_ByteArray_content message_type(::j2735_v2x_msgs::msg::ByteArray::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_ByteArray_content(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ByteArray msg_;
};

class Init_ByteArray_header
{
public:
  Init_ByteArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ByteArray_message_type header(::j2735_v2x_msgs::msg::ByteArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ByteArray_message_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ByteArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ByteArray>()
{
  return j2735_v2x_msgs::msg::builder::Init_ByteArray_header();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BYTE_ARRAY__BUILDER_HPP_
