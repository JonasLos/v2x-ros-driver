// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:msg/LightBarIndicator.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__STRUCT_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_msgs__msg__LightBarIndicator __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__msg__LightBarIndicator __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightBarIndicator_
{
  using Type = LightBarIndicator_<ContainerAllocator>;

  explicit LightBarIndicator_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->indicator = 0;
    }
  }

  explicit LightBarIndicator_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->indicator = 0;
    }
  }

  // field types and members
  using _indicator_type =
    uint8_t;
  _indicator_type indicator;

  // setters for named parameter idiom
  Type & set__indicator(
    const uint8_t & _arg)
  {
    this->indicator = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GREEN_SOLID =
    0u;
  static constexpr uint8_t GREEN_FLASH =
    1u;
  static constexpr uint8_t YELLOW_SIDES =
    2u;
  static constexpr uint8_t YELLOW_DIM =
    3u;
  static constexpr uint8_t YELLOW_FLASH =
    4u;
  static constexpr uint8_t YELLOW_ARROW_LEFT =
    5u;
  static constexpr uint8_t YELLOW_ARROW_RIGHT =
    6u;
  static constexpr uint8_t YELLOW_ARROW_OUT =
    7u;

  // pointer types
  using RawPtr =
    carma_msgs::msg::LightBarIndicator_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::msg::LightBarIndicator_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__msg__LightBarIndicator
    std::shared_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__msg__LightBarIndicator
    std::shared_ptr<carma_msgs::msg::LightBarIndicator_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightBarIndicator_ & other) const
  {
    if (this->indicator != other.indicator) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightBarIndicator_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightBarIndicator_

// alias to use template instance with default allocator
using LightBarIndicator =
  carma_msgs::msg::LightBarIndicator_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::GREEN_SOLID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::GREEN_FLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::YELLOW_SIDES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::YELLOW_DIM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::YELLOW_FLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::YELLOW_ARROW_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::YELLOW_ARROW_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarIndicator_<ContainerAllocator>::YELLOW_ARROW_OUT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR__STRUCT_HPP_
