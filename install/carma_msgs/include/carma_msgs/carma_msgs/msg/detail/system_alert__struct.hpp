// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:msg/SystemAlert.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/system_alert.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__STRUCT_HPP_
#define CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_msgs__msg__SystemAlert __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__msg__SystemAlert __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SystemAlert_
{
  using Type = SystemAlert_<ContainerAllocator>;

  explicit SystemAlert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->description = "";
      this->source_node = "";
    }
  }

  explicit SystemAlert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc),
    source_node(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->description = "";
      this->source_node = "";
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _source_node_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_node_type source_node;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__source_node(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source_node = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAUTION =
    1u;
  static constexpr uint8_t WARNING =
    2u;
  static constexpr uint8_t FATAL =
    3u;
  static constexpr uint8_t NOT_READY =
    4u;
  static constexpr uint8_t DRIVERS_READY =
    5u;
  static constexpr uint8_t SHUTDOWN =
    6u;

  // pointer types
  using RawPtr =
    carma_msgs::msg::SystemAlert_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::msg::SystemAlert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::SystemAlert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::SystemAlert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__msg__SystemAlert
    std::shared_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__msg__SystemAlert
    std::shared_ptr<carma_msgs::msg::SystemAlert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SystemAlert_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->source_node != other.source_node) {
      return false;
    }
    return true;
  }
  bool operator!=(const SystemAlert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SystemAlert_

// alias to use template instance with default allocator
using SystemAlert =
  carma_msgs::msg::SystemAlert_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemAlert_<ContainerAllocator>::CAUTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemAlert_<ContainerAllocator>::WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemAlert_<ContainerAllocator>::FATAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemAlert_<ContainerAllocator>::NOT_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemAlert_<ContainerAllocator>::DRIVERS_READY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SystemAlert_<ContainerAllocator>::SHUTDOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__SYSTEM_ALERT__STRUCT_HPP_
