// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:msg/LightBarCDAType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_cda_type.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__STRUCT_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_msgs__msg__LightBarCDAType __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__msg__LightBarCDAType __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightBarCDAType_
{
  using Type = LightBarCDAType_<ContainerAllocator>;

  explicit LightBarCDAType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit LightBarCDAType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t TYPEA =
    0u;
  static constexpr uint8_t TYPEB =
    1u;
  static constexpr uint8_t TYPEC =
    2u;
  static constexpr uint8_t TYPED =
    3u;

  // pointer types
  using RawPtr =
    carma_msgs::msg::LightBarCDAType_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::msg::LightBarCDAType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__msg__LightBarCDAType
    std::shared_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__msg__LightBarCDAType
    std::shared_ptr<carma_msgs::msg::LightBarCDAType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightBarCDAType_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightBarCDAType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightBarCDAType_

// alias to use template instance with default allocator
using LightBarCDAType =
  carma_msgs::msg::LightBarCDAType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarCDAType_<ContainerAllocator>::TYPEA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarCDAType_<ContainerAllocator>::TYPEB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarCDAType_<ContainerAllocator>::TYPEC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightBarCDAType_<ContainerAllocator>::TYPED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_CDA_TYPE__STRUCT_HPP_
