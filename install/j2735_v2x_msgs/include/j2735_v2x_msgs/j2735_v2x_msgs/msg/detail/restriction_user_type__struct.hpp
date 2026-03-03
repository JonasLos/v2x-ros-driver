// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_user_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'basic_type'
#include "j2735_v2x_msgs/msg/detail/restriction_applies_to__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionUserType_
{
  using Type = RestrictionUserType_<ContainerAllocator>;

  explicit RestrictionUserType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit RestrictionUserType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : basic_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _basic_type_type =
    j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator>;
  _basic_type_type basic_type;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__basic_type(
    const j2735_v2x_msgs::msg::RestrictionAppliesTo_<ContainerAllocator> & _arg)
  {
    this->basic_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BASIC_TYPE =
    0u;
  static constexpr uint8_t REGIONAL =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserType
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionUserType
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionUserType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionUserType_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->basic_type != other.basic_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionUserType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionUserType_

// alias to use template instance with default allocator
using RestrictionUserType =
  j2735_v2x_msgs::msg::RestrictionUserType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionUserType_<ContainerAllocator>::BASIC_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RestrictionUserType_<ContainerAllocator>::REGIONAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_HPP_
