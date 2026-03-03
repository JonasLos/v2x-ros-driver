// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:msg/UIInstructions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/ui_instructions.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__STRUCT_HPP_
#define CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__carma_msgs__msg__UIInstructions __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__msg__UIInstructions __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UIInstructions_
{
  using Type = UIInstructions_<ContainerAllocator>;

  explicit UIInstructions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
      this->type = 0;
      this->response_service = "";
    }
  }

  explicit UIInstructions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    msg(_alloc),
    response_service(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->msg = "";
      this->type = 0;
      this->response_service = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _msg_type msg;
  using _type_type =
    uint8_t;
  _type_type type;
  using _response_service_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_service_type response_service;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->msg = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__response_service(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response_service = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INFO =
    0u;
  static constexpr uint8_t ACK_REQUIRED =
    1u;
  static constexpr uint8_t NO_ACK_REQUIRED =
    2u;

  // pointer types
  using RawPtr =
    carma_msgs::msg::UIInstructions_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::msg::UIInstructions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::UIInstructions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::UIInstructions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__msg__UIInstructions
    std::shared_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__msg__UIInstructions
    std::shared_ptr<carma_msgs::msg::UIInstructions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UIInstructions_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->response_service != other.response_service) {
      return false;
    }
    return true;
  }
  bool operator!=(const UIInstructions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UIInstructions_

// alias to use template instance with default allocator
using UIInstructions =
  carma_msgs::msg::UIInstructions_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UIInstructions_<ContainerAllocator>::INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UIInstructions_<ContainerAllocator>::ACK_REQUIRED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UIInstructions_<ContainerAllocator>::NO_ACK_REQUIRED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__UI_INSTRUCTIONS__STRUCT_HPP_
