// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/HeadingSlice.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/heading_slice.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__HeadingSlice __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__HeadingSlice __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HeadingSlice_
{
  using Type = HeadingSlice_<ContainerAllocator>;

  explicit HeadingSlice_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading_slice = 0;
    }
  }

  explicit HeadingSlice_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading_slice = 0;
    }
  }

  // field types and members
  using _heading_slice_type =
    uint16_t;
  _heading_slice_type heading_slice;

  // setters for named parameter idiom
  Type & set__heading_slice(
    const uint16_t & _arg)
  {
    this->heading_slice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NO_HEADING =
    0u;
  static constexpr uint16_t FROM_000_0_TO_022_5_DEGREES =
    1u;
  static constexpr uint16_t FROM_022_5_TO_045_0_DEGREES =
    2u;
  static constexpr uint16_t FROM_045_0_TO_067_5_DEGREES =
    4u;
  static constexpr uint16_t FROM_067_5_TO_090_0_DEGREES =
    8u;
  static constexpr uint16_t FROM_090_0_TO_112_5_DEGREES =
    16u;
  static constexpr uint16_t FROM_112_5_TO_135_0_DEGREES =
    32u;
  static constexpr uint16_t FROM_135_0_TO_157_5_DEGREES =
    64u;
  static constexpr uint16_t FROM_157_5_TO_180_0_DEGREES =
    128u;
  static constexpr uint16_t FROM_180_0_TO_202_5_DEGREES =
    256u;
  static constexpr uint16_t FROM_202_5_TO_225_0_DEGREES =
    512u;
  static constexpr uint16_t FROM_225_0_TO_247_5_DEGREES =
    1024u;
  static constexpr uint16_t FROM_247_5_TO_270_0_DEGREES =
    2048u;
  static constexpr uint16_t FROM_270_0_TO_292_5_DEGREES =
    4096u;
  static constexpr uint16_t FROM_292_5_TO_315_0_DEGREES =
    8192u;
  static constexpr uint16_t FROM_315_0_TO_337_5_DEGREES =
    16384u;
  static constexpr uint16_t FROM_337_5_TO_360_0_DEGREES =
    32768u;
  static constexpr uint16_t ALL_HEADINGS =
    65535u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__HeadingSlice
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__HeadingSlice
    std::shared_ptr<j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HeadingSlice_ & other) const
  {
    if (this->heading_slice != other.heading_slice) {
      return false;
    }
    return true;
  }
  bool operator!=(const HeadingSlice_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HeadingSlice_

// alias to use template instance with default allocator
using HeadingSlice =
  j2735_v2x_msgs::msg::HeadingSlice_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::NO_HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_000_0_TO_022_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_022_5_TO_045_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_045_0_TO_067_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_067_5_TO_090_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_090_0_TO_112_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_112_5_TO_135_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_135_0_TO_157_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_157_5_TO_180_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_180_0_TO_202_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_202_5_TO_225_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_225_0_TO_247_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_247_5_TO_270_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_270_0_TO_292_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_292_5_TO_315_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_315_0_TO_337_5_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::FROM_337_5_TO_360_0_DEGREES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t HeadingSlice_<ContainerAllocator>::ALL_HEADINGS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING_SLICE__STRUCT_HPP_
