// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RTCMHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/rtcm_header.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/gnss_status__struct.hpp"
// Member 'ant_offset_x'
#include "j2735_v2x_msgs/msg/detail/offset_b12__struct.hpp"
// Member 'ant_offset_y'
#include "j2735_v2x_msgs/msg/detail/offset_b09__struct.hpp"
// Member 'ant_offset_z'
#include "j2735_v2x_msgs/msg/detail/offset_b10__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RTCMHeader __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RTCMHeader __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RTCMHeader_
{
  using Type = RTCMHeader_<ContainerAllocator>;

  explicit RTCMHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    ant_offset_x(_init),
    ant_offset_y(_init),
    ant_offset_z(_init)
  {
    (void)_init;
  }

  explicit RTCMHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    ant_offset_x(_alloc, _init),
    ant_offset_y(_alloc, _init),
    ant_offset_z(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator>;
  _status_type status;
  using _ant_offset_x_type =
    j2735_v2x_msgs::msg::OffsetB12_<ContainerAllocator>;
  _ant_offset_x_type ant_offset_x;
  using _ant_offset_y_type =
    j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator>;
  _ant_offset_y_type ant_offset_y;
  using _ant_offset_z_type =
    j2735_v2x_msgs::msg::OffsetB10_<ContainerAllocator>;
  _ant_offset_z_type ant_offset_z;

  // setters for named parameter idiom
  Type & set__status(
    const j2735_v2x_msgs::msg::GNSSStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__ant_offset_x(
    const j2735_v2x_msgs::msg::OffsetB12_<ContainerAllocator> & _arg)
  {
    this->ant_offset_x = _arg;
    return *this;
  }
  Type & set__ant_offset_y(
    const j2735_v2x_msgs::msg::OffsetB09_<ContainerAllocator> & _arg)
  {
    this->ant_offset_y = _arg;
    return *this;
  }
  Type & set__ant_offset_z(
    const j2735_v2x_msgs::msg::OffsetB10_<ContainerAllocator> & _arg)
  {
    this->ant_offset_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RTCMHeader
    std::shared_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RTCMHeader
    std::shared_ptr<j2735_v2x_msgs::msg::RTCMHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RTCMHeader_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->ant_offset_x != other.ant_offset_x) {
      return false;
    }
    if (this->ant_offset_y != other.ant_offset_y) {
      return false;
    }
    if (this->ant_offset_z != other.ant_offset_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const RTCMHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RTCMHeader_

// alias to use template instance with default allocator
using RTCMHeader =
  j2735_v2x_msgs::msg::RTCMHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RTCM_HEADER__STRUCT_HPP_
