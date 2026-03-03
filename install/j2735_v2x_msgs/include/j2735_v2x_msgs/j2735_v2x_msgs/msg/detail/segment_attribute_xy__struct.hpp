// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/segment_attribute_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXY __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXY __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SegmentAttributeXY_
{
  using Type = SegmentAttributeXY_<ContainerAllocator>;

  explicit SegmentAttributeXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_attribute_xy = 0;
    }
  }

  explicit SegmentAttributeXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_attribute_xy = 0;
    }
  }

  // field types and members
  using _segment_attribute_xy_type =
    uint8_t;
  _segment_attribute_xy_type segment_attribute_xy;

  // setters for named parameter idiom
  Type & set__segment_attribute_xy(
    const uint8_t & _arg)
  {
    this->segment_attribute_xy = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESERVED =
    0u;
  static constexpr uint8_t DONOTBLOCK =
    1u;
  static constexpr uint8_t WHITELINE =
    2u;
  static constexpr uint8_t MERGINGLANELEFT =
    3u;
  static constexpr uint8_t MERGINGLANERIGHT =
    4u;
  static constexpr uint8_t CURBONLEFT =
    5u;
  static constexpr uint8_t CURBONRIGHT =
    6u;
  static constexpr uint8_t LOADINGZONEONLEFT =
    7u;
  static constexpr uint8_t LOADINGZONEONRIGHT =
    8u;
  static constexpr uint8_t TURNOUTPOINTONLEFT =
    9u;
  static constexpr uint8_t TURNOUTPOINTONRIGHT =
    10u;
  static constexpr uint8_t ADJACENTPARKINGONLEFT =
    11u;
  static constexpr uint8_t ADJACENTPARKINGONRIGHT =
    12u;
  static constexpr uint8_t ADJACENTBIKELANEONLEFT =
    13u;
  static constexpr uint8_t ADJACENTBIKELANEONRIGHT =
    14u;
  static constexpr uint8_t SHAREDBIKELANE =
    15u;
  static constexpr uint8_t BIKEBOXINFRONT =
    16u;
  static constexpr uint8_t TRANSITSTOPONLEFT =
    17u;
  static constexpr uint8_t TRANSITSTOPONRIGHT =
    18u;
  static constexpr uint8_t TRANSITSTOPINLANE =
    19u;
  static constexpr uint8_t SHAREDWITHTRACKEDVEHICLE =
    20u;
  static constexpr uint8_t SAFEISLAND =
    21u;
  static constexpr uint8_t LOWCURBSPRESENT =
    22u;
  static constexpr uint8_t RUMBLESTRIPPRESENT =
    23u;
  static constexpr uint8_t AUDIBLESIGNALINGPRESENT =
    24u;
  static constexpr uint8_t ADAPTIVETIMINGPRESENT =
    25u;
  static constexpr uint8_t RFSIGNALREQUESTPRESENT =
    26u;
  static constexpr uint8_t PARTIALCURBINTRUSION =
    27u;
  static constexpr uint8_t TAPERTOLEFT =
    28u;
  static constexpr uint8_t TAPERTORIGHT =
    29u;
  static constexpr uint8_t TAPERTOCENTERLINE =
    30u;
  static constexpr uint8_t PARALLELPARKING =
    31u;
  static constexpr uint8_t FREEPARKING =
    32u;
  static constexpr uint8_t TIMERESTRICTIONSONPARKING =
    33u;
  static constexpr uint8_t COSTTOPARK =
    34u;
  static constexpr uint8_t MIDBLOCKCURBPRESENT =
    35u;
  static constexpr uint8_t UNEVENPAVEMENTPRESENT =
    36u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXY
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXY
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SegmentAttributeXY_ & other) const
  {
    if (this->segment_attribute_xy != other.segment_attribute_xy) {
      return false;
    }
    return true;
  }
  bool operator!=(const SegmentAttributeXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SegmentAttributeXY_

// alias to use template instance with default allocator
using SegmentAttributeXY =
  j2735_v2x_msgs::msg::SegmentAttributeXY_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::RESERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::DONOTBLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::WHITELINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::MERGINGLANELEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::MERGINGLANERIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::CURBONLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::CURBONRIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::LOADINGZONEONLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::LOADINGZONEONRIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TURNOUTPOINTONLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TURNOUTPOINTONRIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::ADJACENTPARKINGONLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::ADJACENTPARKINGONRIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::ADJACENTBIKELANEONLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::ADJACENTBIKELANEONRIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::SHAREDBIKELANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::BIKEBOXINFRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TRANSITSTOPONLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TRANSITSTOPONRIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TRANSITSTOPINLANE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::SHAREDWITHTRACKEDVEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::SAFEISLAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::LOWCURBSPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::RUMBLESTRIPPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::AUDIBLESIGNALINGPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::ADAPTIVETIMINGPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::RFSIGNALREQUESTPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::PARTIALCURBINTRUSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TAPERTOLEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TAPERTORIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TAPERTOCENTERLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::PARALLELPARKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::FREEPARKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::TIMERESTRICTIONSONPARKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::COSTTOPARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::MIDBLOCKCURBPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SegmentAttributeXY_<ContainerAllocator>::UNEVENPAVEMENTPRESENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY__STRUCT_HPP_
