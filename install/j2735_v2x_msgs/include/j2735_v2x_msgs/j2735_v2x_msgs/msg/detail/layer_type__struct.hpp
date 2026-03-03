// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LayerType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/layer_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LayerType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LayerType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LayerType_
{
  using Type = LayerType_<ContainerAllocator>;

  explicit LayerType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer_type = 0;
    }
  }

  explicit LayerType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer_type = 0;
    }
  }

  // field types and members
  using _layer_type_type =
    uint8_t;
  _layer_type_type layer_type;

  // setters for named parameter idiom
  Type & set__layer_type(
    const uint8_t & _arg)
  {
    this->layer_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NONE =
    0u;
  static constexpr uint8_t MIXED_CONTENT =
    1u;
  static constexpr uint8_t GENERAL_MAP_DATA =
    2u;
  static constexpr uint8_t INTERSECTION_DATA =
    3u;
  static constexpr uint8_t CURVE_DATA =
    4u;
  static constexpr uint8_t ROADWAY_SECTION_DATA =
    5u;
  static constexpr uint8_t PARKING_AREA_DATA =
    6u;
  static constexpr uint8_t SHARED_LANE_DATA =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LayerType
    std::shared_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LayerType
    std::shared_ptr<j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LayerType_ & other) const
  {
    if (this->layer_type != other.layer_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LayerType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LayerType_

// alias to use template instance with default allocator
using LayerType =
  j2735_v2x_msgs::msg::LayerType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::MIXED_CONTENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::GENERAL_MAP_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::INTERSECTION_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::CURVE_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::ROADWAY_SECTION_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::PARKING_AREA_DATA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LayerType_<ContainerAllocator>::SHARED_LANE_DATA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LAYER_TYPE__STRUCT_HPP_
