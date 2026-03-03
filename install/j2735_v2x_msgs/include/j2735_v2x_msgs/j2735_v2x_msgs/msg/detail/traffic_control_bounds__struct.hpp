// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_bounds.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'offsets'
#include "j2735_v2x_msgs/msg/detail/offset_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlBounds __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlBounds __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlBounds_
{
  using Type = TrafficControlBounds_<ContainerAllocator>;

  explicit TrafficControlBounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oldest = 0ull;
      this->reflon = 0l;
      this->reflat = 0l;
      this->offsets.fill(j2735_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>{_init});
    }
  }

  explicit TrafficControlBounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : offsets(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oldest = 0ull;
      this->reflon = 0l;
      this->reflat = 0l;
      this->offsets.fill(j2735_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _oldest_type =
    uint64_t;
  _oldest_type oldest;
  using _reflon_type =
    int32_t;
  _reflon_type reflon;
  using _reflat_type =
    int32_t;
  _reflat_type reflat;
  using _offsets_type =
    std::array<j2735_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>, 3>;
  _offsets_type offsets;

  // setters for named parameter idiom
  Type & set__oldest(
    const uint64_t & _arg)
  {
    this->oldest = _arg;
    return *this;
  }
  Type & set__reflon(
    const int32_t & _arg)
  {
    this->reflon = _arg;
    return *this;
  }
  Type & set__reflat(
    const int32_t & _arg)
  {
    this->reflat = _arg;
    return *this;
  }
  Type & set__offsets(
    const std::array<j2735_v2x_msgs::msg::OffsetPoint_<ContainerAllocator>, 3> & _arg)
  {
    this->offsets = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t REFLON_MAX =
    1800000000;
  static constexpr int32_t REFLON_MIN =
    -1799999999;
  static constexpr int32_t REFLON_UNAVAILABLE =
    1800000001;
  static constexpr int32_t REFLAT_MAX =
    900000000;
  static constexpr int32_t REFLAT_MIN =
    -900000000;
  static constexpr int32_t REFLAT_UNAVAILABLE =
    900000001;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlBounds
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlBounds
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlBounds_ & other) const
  {
    if (this->oldest != other.oldest) {
      return false;
    }
    if (this->reflon != other.reflon) {
      return false;
    }
    if (this->reflat != other.reflat) {
      return false;
    }
    if (this->offsets != other.offsets) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlBounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlBounds_

// alias to use template instance with default allocator
using TrafficControlBounds =
  j2735_v2x_msgs::msg::TrafficControlBounds_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlBounds_<ContainerAllocator>::REFLON_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlBounds_<ContainerAllocator>::REFLON_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlBounds_<ContainerAllocator>::REFLON_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlBounds_<ContainerAllocator>::REFLAT_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlBounds_<ContainerAllocator>::REFLAT_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlBounds_<ContainerAllocator>::REFLAT_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_BOUNDS__STRUCT_HPP_
