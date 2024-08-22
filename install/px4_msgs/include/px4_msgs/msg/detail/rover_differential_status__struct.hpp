// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RoverDifferentialStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ROVER_DIFFERENTIAL_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ROVER_DIFFERENTIAL_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__RoverDifferentialStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RoverDifferentialStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverDifferentialStatus_
{
  using Type = RoverDifferentialStatus_<ContainerAllocator>;

  explicit RoverDifferentialStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->actual_speed = 0.0f;
      this->desired_yaw_rate_deg_s = 0.0f;
      this->actual_yaw_rate_deg_s = 0.0f;
      this->pid_yaw_rate_integral = 0.0f;
    }
  }

  explicit RoverDifferentialStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->actual_speed = 0.0f;
      this->desired_yaw_rate_deg_s = 0.0f;
      this->actual_yaw_rate_deg_s = 0.0f;
      this->pid_yaw_rate_integral = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _actual_speed_type =
    float;
  _actual_speed_type actual_speed;
  using _desired_yaw_rate_deg_s_type =
    float;
  _desired_yaw_rate_deg_s_type desired_yaw_rate_deg_s;
  using _actual_yaw_rate_deg_s_type =
    float;
  _actual_yaw_rate_deg_s_type actual_yaw_rate_deg_s;
  using _pid_yaw_rate_integral_type =
    float;
  _pid_yaw_rate_integral_type pid_yaw_rate_integral;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__actual_speed(
    const float & _arg)
  {
    this->actual_speed = _arg;
    return *this;
  }
  Type & set__desired_yaw_rate_deg_s(
    const float & _arg)
  {
    this->desired_yaw_rate_deg_s = _arg;
    return *this;
  }
  Type & set__actual_yaw_rate_deg_s(
    const float & _arg)
  {
    this->actual_yaw_rate_deg_s = _arg;
    return *this;
  }
  Type & set__pid_yaw_rate_integral(
    const float & _arg)
  {
    this->pid_yaw_rate_integral = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RoverDifferentialStatus
    std::shared_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RoverDifferentialStatus
    std::shared_ptr<px4_msgs::msg::RoverDifferentialStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverDifferentialStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->actual_speed != other.actual_speed) {
      return false;
    }
    if (this->desired_yaw_rate_deg_s != other.desired_yaw_rate_deg_s) {
      return false;
    }
    if (this->actual_yaw_rate_deg_s != other.actual_yaw_rate_deg_s) {
      return false;
    }
    if (this->pid_yaw_rate_integral != other.pid_yaw_rate_integral) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverDifferentialStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverDifferentialStatus_

// alias to use template instance with default allocator
using RoverDifferentialStatus =
  px4_msgs::msg::RoverDifferentialStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ROVER_DIFFERENTIAL_STATUS__STRUCT_HPP_
