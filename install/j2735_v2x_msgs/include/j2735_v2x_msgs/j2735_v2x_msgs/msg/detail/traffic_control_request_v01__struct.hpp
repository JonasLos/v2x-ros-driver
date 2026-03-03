// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlRequestV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_request_v01.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'reqid'
#include "j2735_v2x_msgs/msg/detail/id64b__struct.hpp"
// Member 'bounds'
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequestV01 __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequestV01 __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlRequestV01_
{
  using Type = TrafficControlRequestV01_<ContainerAllocator>;

  explicit TrafficControlRequestV01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reqid(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reqseq = 0;
      this->scale = 0;
    }
  }

  explicit TrafficControlRequestV01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reqid(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reqseq = 0;
      this->scale = 0;
    }
  }

  // field types and members
  using _reqid_type =
    j2735_v2x_msgs::msg::Id64b_<ContainerAllocator>;
  _reqid_type reqid;
  using _reqseq_type =
    uint8_t;
  _reqseq_type reqseq;
  using _scale_type =
    int8_t;
  _scale_type scale;
  using _bounds_type =
    std::vector<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>>;
  _bounds_type bounds;

  // setters for named parameter idiom
  Type & set__reqid(
    const j2735_v2x_msgs::msg::Id64b_<ContainerAllocator> & _arg)
  {
    this->reqid = _arg;
    return *this;
  }
  Type & set__reqseq(
    const uint8_t & _arg)
  {
    this->reqseq = _arg;
    return *this;
  }
  Type & set__scale(
    const int8_t & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__bounds(
    const std::vector<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::TrafficControlBounds_<ContainerAllocator>>> & _arg)
  {
    this->bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequestV01
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlRequestV01
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlRequestV01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlRequestV01_ & other) const
  {
    if (this->reqid != other.reqid) {
      return false;
    }
    if (this->reqseq != other.reqseq) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->bounds != other.bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlRequestV01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlRequestV01_

// alias to use template instance with default allocator
using TrafficControlRequestV01 =
  j2735_v2x_msgs::msg::TrafficControlRequestV01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_REQUEST_V01__STRUCT_HPP_
