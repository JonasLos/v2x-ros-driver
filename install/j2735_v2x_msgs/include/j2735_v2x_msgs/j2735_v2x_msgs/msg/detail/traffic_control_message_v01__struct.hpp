// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_message_v01.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_HPP_

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
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/id128b__struct.hpp"
// Member 'package'
#include "j2735_v2x_msgs/msg/detail/traffic_control_package__struct.hpp"
// Member 'params'
#include "j2735_v2x_msgs/msg/detail/traffic_control_params__struct.hpp"
// Member 'geometry'
#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlMessageV01 __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrafficControlMessageV01 __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficControlMessageV01_
{
  using Type = TrafficControlMessageV01_<ContainerAllocator>;

  explicit TrafficControlMessageV01_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reqid(_init),
    id(_init),
    package(_init),
    params(_init),
    geometry(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reqseq = 0;
      this->msgtot = 0;
      this->msgnum = 0;
      this->updated = 0ull;
      this->package_exists = false;
      this->params_exists = false;
      this->geometry_exists = false;
    }
  }

  explicit TrafficControlMessageV01_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reqid(_alloc, _init),
    id(_alloc, _init),
    package(_alloc, _init),
    params(_alloc, _init),
    geometry(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->reqseq = 0;
      this->msgtot = 0;
      this->msgnum = 0;
      this->updated = 0ull;
      this->package_exists = false;
      this->params_exists = false;
      this->geometry_exists = false;
    }
  }

  // field types and members
  using _reqid_type =
    j2735_v2x_msgs::msg::Id64b_<ContainerAllocator>;
  _reqid_type reqid;
  using _reqseq_type =
    uint8_t;
  _reqseq_type reqseq;
  using _msgtot_type =
    uint16_t;
  _msgtot_type msgtot;
  using _msgnum_type =
    uint16_t;
  _msgnum_type msgnum;
  using _id_type =
    j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>;
  _id_type id;
  using _updated_type =
    uint64_t;
  _updated_type updated;
  using _package_type =
    j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator>;
  _package_type package;
  using _package_exists_type =
    bool;
  _package_exists_type package_exists;
  using _params_type =
    j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator>;
  _params_type params;
  using _params_exists_type =
    bool;
  _params_exists_type params_exists;
  using _geometry_type =
    j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator>;
  _geometry_type geometry;
  using _geometry_exists_type =
    bool;
  _geometry_exists_type geometry_exists;

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
  Type & set__msgtot(
    const uint16_t & _arg)
  {
    this->msgtot = _arg;
    return *this;
  }
  Type & set__msgnum(
    const uint16_t & _arg)
  {
    this->msgnum = _arg;
    return *this;
  }
  Type & set__id(
    const j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__updated(
    const uint64_t & _arg)
  {
    this->updated = _arg;
    return *this;
  }
  Type & set__package(
    const j2735_v2x_msgs::msg::TrafficControlPackage_<ContainerAllocator> & _arg)
  {
    this->package = _arg;
    return *this;
  }
  Type & set__package_exists(
    const bool & _arg)
  {
    this->package_exists = _arg;
    return *this;
  }
  Type & set__params(
    const j2735_v2x_msgs::msg::TrafficControlParams_<ContainerAllocator> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__params_exists(
    const bool & _arg)
  {
    this->params_exists = _arg;
    return *this;
  }
  Type & set__geometry(
    const j2735_v2x_msgs::msg::TrafficControlGeometry_<ContainerAllocator> & _arg)
  {
    this->geometry = _arg;
    return *this;
  }
  Type & set__geometry_exists(
    const bool & _arg)
  {
    this->geometry_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlMessageV01
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrafficControlMessageV01
    std::shared_ptr<j2735_v2x_msgs::msg::TrafficControlMessageV01_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficControlMessageV01_ & other) const
  {
    if (this->reqid != other.reqid) {
      return false;
    }
    if (this->reqseq != other.reqseq) {
      return false;
    }
    if (this->msgtot != other.msgtot) {
      return false;
    }
    if (this->msgnum != other.msgnum) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->updated != other.updated) {
      return false;
    }
    if (this->package != other.package) {
      return false;
    }
    if (this->package_exists != other.package_exists) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->params_exists != other.params_exists) {
      return false;
    }
    if (this->geometry != other.geometry) {
      return false;
    }
    if (this->geometry_exists != other.geometry_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficControlMessageV01_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficControlMessageV01_

// alias to use template instance with default allocator
using TrafficControlMessageV01 =
  j2735_v2x_msgs::msg::TrafficControlMessageV01_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__STRUCT_HPP_
