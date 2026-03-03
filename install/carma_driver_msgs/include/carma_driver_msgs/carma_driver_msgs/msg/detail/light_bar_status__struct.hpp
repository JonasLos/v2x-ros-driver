// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/light_bar_status.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__msg__LightBarStatus __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__msg__LightBarStatus __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightBarStatus_
{
  using Type = LightBarStatus_<ContainerAllocator>;

  explicit LightBarStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->green_solid = 0;
      this->yellow_solid = 0;
      this->right_arrow = 0;
      this->left_arrow = 0;
      this->sides_solid = 0;
      this->flash = 0;
      this->green_flash = 0;
      this->takedown = 0;
    }
  }

  explicit LightBarStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->green_solid = 0;
      this->yellow_solid = 0;
      this->right_arrow = 0;
      this->left_arrow = 0;
      this->sides_solid = 0;
      this->flash = 0;
      this->green_flash = 0;
      this->takedown = 0;
    }
  }

  // field types and members
  using _green_solid_type =
    uint8_t;
  _green_solid_type green_solid;
  using _yellow_solid_type =
    uint8_t;
  _yellow_solid_type yellow_solid;
  using _right_arrow_type =
    uint8_t;
  _right_arrow_type right_arrow;
  using _left_arrow_type =
    uint8_t;
  _left_arrow_type left_arrow;
  using _sides_solid_type =
    uint8_t;
  _sides_solid_type sides_solid;
  using _flash_type =
    uint8_t;
  _flash_type flash;
  using _green_flash_type =
    uint8_t;
  _green_flash_type green_flash;
  using _takedown_type =
    uint8_t;
  _takedown_type takedown;

  // setters for named parameter idiom
  Type & set__green_solid(
    const uint8_t & _arg)
  {
    this->green_solid = _arg;
    return *this;
  }
  Type & set__yellow_solid(
    const uint8_t & _arg)
  {
    this->yellow_solid = _arg;
    return *this;
  }
  Type & set__right_arrow(
    const uint8_t & _arg)
  {
    this->right_arrow = _arg;
    return *this;
  }
  Type & set__left_arrow(
    const uint8_t & _arg)
  {
    this->left_arrow = _arg;
    return *this;
  }
  Type & set__sides_solid(
    const uint8_t & _arg)
  {
    this->sides_solid = _arg;
    return *this;
  }
  Type & set__flash(
    const uint8_t & _arg)
  {
    this->flash = _arg;
    return *this;
  }
  Type & set__green_flash(
    const uint8_t & _arg)
  {
    this->green_flash = _arg;
    return *this;
  }
  Type & set__takedown(
    const uint8_t & _arg)
  {
    this->takedown = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OFF =
    0u;
  static constexpr uint8_t ON =
    1u;

  // pointer types
  using RawPtr =
    carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__msg__LightBarStatus
    std::shared_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__msg__LightBarStatus
    std::shared_ptr<carma_driver_msgs::msg::LightBarStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightBarStatus_ & other) const
  {
    if (this->green_solid != other.green_solid) {
      return false;
    }
    if (this->yellow_solid != other.yellow_solid) {
      return false;
    }
    if (this->right_arrow != other.right_arrow) {
      return false;
    }
    if (this->left_arrow != other.left_arrow) {
      return false;
    }
    if (this->sides_solid != other.sides_solid) {
      return false;
    }
    if (this->flash != other.flash) {
      return false;
    }
    if (this->green_flash != other.green_flash) {
      return false;
    }
    if (this->takedown != other.takedown) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightBarStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightBarStatus_

// alias to use template instance with default allocator
using LightBarStatus =
  carma_driver_msgs::msg::LightBarStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarStatus_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarStatus_<ContainerAllocator>::ON;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__STRUCT_HPP_
