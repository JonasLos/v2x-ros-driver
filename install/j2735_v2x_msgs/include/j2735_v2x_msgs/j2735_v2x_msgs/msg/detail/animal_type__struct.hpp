// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AnimalType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/animal_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AnimalType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AnimalType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnimalType_
{
  using Type = AnimalType_<ContainerAllocator>;

  explicit AnimalType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit AnimalType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t SERVICE_USE =
    1u;
  static constexpr uint8_t PET =
    2u;
  static constexpr uint8_t FARM =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AnimalType
    std::shared_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AnimalType
    std::shared_ptr<j2735_v2x_msgs::msg::AnimalType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnimalType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnimalType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnimalType_

// alias to use template instance with default allocator
using AnimalType =
  j2735_v2x_msgs::msg::AnimalType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AnimalType_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AnimalType_<ContainerAllocator>::SERVICE_USE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AnimalType_<ContainerAllocator>::PET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AnimalType_<ContainerAllocator>::FARM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANIMAL_TYPE__STRUCT_HPP_
