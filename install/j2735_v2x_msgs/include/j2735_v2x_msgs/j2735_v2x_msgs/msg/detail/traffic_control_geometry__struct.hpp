// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_geometry.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/path_node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlGeometry __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlGeometry __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlGeometry_
{
  using Type = TrafficControlGeometry_<ContainerAllocator>;

  explicit TrafficControlGeometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->proj = "";
      this->datum = "";
      this->reftime = 0ull;
      this->reflon = 0l;
      this->reflat = 0l;
      this->refelv = 0l;
      this->heading = 0;
    }
  }

  explicit TrafficControlGeometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : proj(_alloc),
    datum(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->proj = "";
      this->datum = "";
      this->reftime = 0ull;
      this->reflon = 0l;
      this->reflat = 0l;
      this->refelv = 0l;
      this->heading = 0;
    }
  }

  // field types and members
  using _proj_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _proj_type proj;
  using _datum_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _datum_type datum;
  using _reftime_type =
    uint64_t;
  _reftime_type reftime;
  using _reflon_type =
    int32_t;
  _reflon_type reflon;
  using _reflat_type =
    int32_t;
  _reflat_type reflat;
  using _refelv_type =
    int32_t;
  _refelv_type refelv;
  using _heading_type =
    uint16_t;
  _heading_type heading;
  using _nodes_type =
    std::vector<j2735_v2x_msgs::msg::PathNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::PathNode_<ContainerAllocator>>>;
  _nodes_type nodes;

  // setters for named parameter idiom
  Type & set__proj(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->proj = _arg;
    return *this;
  }
  Type & set__datum(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->datum = _arg;
    return *this;
  }
  Type & set__reftime(
    const uint64_t & _arg)
  {
    this->reftime = _arg;
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
  Type & set__refelv(
    const int32_t & _arg)
  {
    this->refelv = _arg;
    return *this;
  }
  Type & set__heading(
    const uint16_t & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<j2735_v2x_msgs::msg::PathNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::PathNode_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t REFLON_UNAVAILABLE =
    1800000001;
  static constexpr int32_t REFLON_MAX =
    1800000000;
  static constexpr int32_t REFLON_MIN =
    -1799999999;
  static constexpr int32_t REFLAT_UNAVAILABLE =
    900000001;
  static constexpr int32_t REFLAT_MAX =
    900000000;
  static constexpr int32_t REFLAT_MIN =
    -900000000;
  static constexpr int32_t REFELV_UNKNOWN =
    0;
  static constexpr int32_t REFELV_MAX =
    65535;
  static constexpr int32_t REFELV_MIN =
    1;
  static constexpr uint16_t HEADING_MAX =
    3599u;
  static constexpr uint16_t HEADING_MIN =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlGeometry
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlGeometry
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlGeometry_ & other) const
  {
    if (this->proj != other.proj) {
      return false;
    }
    if (this->datum != other.datum) {
      return false;
    }
    if (this->reftime != other.reftime) {
      return false;
    }
    if (this->reflon != other.reflon) {
      return false;
    }
    if (this->reflat != other.reflat) {
      return false;
    }
    if (this->refelv != other.refelv) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlGeometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlGeometry_

// alias to use template instance with default allocator
using TrafficControlGeometry =
  j2735_v2x_msgs::msg::TrafficControlGeometry_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFLON_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFLON_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFLON_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFLAT_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFLAT_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFLAT_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFELV_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFELV_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t TrafficControlGeometry_<ContainerAllocator>::REFELV_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TrafficControlGeometry_<ContainerAllocator>::HEADING_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TrafficControlGeometry_<ContainerAllocator>::HEADING_MIN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__STRUCT_HPP_
