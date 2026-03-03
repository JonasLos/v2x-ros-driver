// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:msg/TurnSignal.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/turn_signal.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__msg__TurnSignal __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__msg__TurnSignal __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurnSignal_
{
  using Type = TurnSignal_<ContainerAllocator>;

  explicit TurnSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  explicit TurnSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state = 0;
    }
  }

  // field types and members
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LEFT =
    0u;
  static constexpr uint8_t RIGHT =
    1u;
  static constexpr uint8_t NEUTRAL =
    2u;

  // pointer types
  using RawPtr =
    carma_driver_msgs::msg::TurnSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::msg::TurnSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::TurnSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::TurnSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__msg__TurnSignal
    std::shared_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__msg__TurnSignal
    std::shared_ptr<carma_driver_msgs::msg::TurnSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnSignal_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnSignal_

// alias to use template instance with default allocator
using TurnSignal =
  carma_driver_msgs::msg::TurnSignal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TurnSignal_<ContainerAllocator>::NEUTRAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__TURN_SIGNAL__STRUCT_HPP_
