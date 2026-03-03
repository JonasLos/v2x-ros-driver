// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/UserSizeAndBehaviour.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/user_size_and_behaviour.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__UserSizeAndBehaviour __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__UserSizeAndBehaviour __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UserSizeAndBehaviour_
{
  using Type = UserSizeAndBehaviour_<ContainerAllocator>;

  explicit UserSizeAndBehaviour_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sizes_and_behaviors = 0;
    }
  }

  explicit UserSizeAndBehaviour_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sizes_and_behaviors = 0;
    }
  }

  // field types and members
  using _sizes_and_behaviors_type =
    uint8_t;
  _sizes_and_behaviors_type sizes_and_behaviors;

  // setters for named parameter idiom
  Type & set__sizes_and_behaviors(
    const uint8_t & _arg)
  {
    this->sizes_and_behaviors = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t SMALL_STATURE =
    1u;
  static constexpr uint8_t LARGE_STATURE =
    2u;
  static constexpr uint8_t ERRATIC_MOVING =
    4u;
  static constexpr uint8_t SLOW_MOVING =
    8u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__UserSizeAndBehaviour
    std::shared_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__UserSizeAndBehaviour
    std::shared_ptr<j2735_v2x_msgs::msg::UserSizeAndBehaviour_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UserSizeAndBehaviour_ & other) const
  {
    if (this->sizes_and_behaviors != other.sizes_and_behaviors) {
      return false;
    }
    return true;
  }
  bool operator!=(const UserSizeAndBehaviour_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UserSizeAndBehaviour_

// alias to use template instance with default allocator
using UserSizeAndBehaviour =
  j2735_v2x_msgs::msg::UserSizeAndBehaviour_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UserSizeAndBehaviour_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UserSizeAndBehaviour_<ContainerAllocator>::SMALL_STATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UserSizeAndBehaviour_<ContainerAllocator>::LARGE_STATURE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UserSizeAndBehaviour_<ContainerAllocator>::ERRATIC_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UserSizeAndBehaviour_<ContainerAllocator>::SLOW_MOVING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__USER_SIZE_AND_BEHAVIOUR__STRUCT_HPP_
