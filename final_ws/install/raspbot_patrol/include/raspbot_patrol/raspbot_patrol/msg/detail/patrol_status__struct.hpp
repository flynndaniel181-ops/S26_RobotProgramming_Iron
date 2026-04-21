// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__STRUCT_HPP_
#define RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__raspbot_patrol__msg__PatrolStatus __attribute__((deprecated))
#else
# define DEPRECATED__raspbot_patrol__msg__PatrolStatus __declspec(deprecated)
#endif

namespace raspbot_patrol
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PatrolStatus_
{
  using Type = PatrolStatus_<ContainerAllocator>;

  explicit PatrolStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_distance = 0.0f;
      this->patrol_state = "";
      this->current_waypoint = 0l;
    }
  }

  explicit PatrolStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : patrol_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_distance = 0.0f;
      this->patrol_state = "";
      this->current_waypoint = 0l;
    }
  }

  // field types and members
  using _obstacle_distance_type =
    float;
  _obstacle_distance_type obstacle_distance;
  using _patrol_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _patrol_state_type patrol_state;
  using _current_waypoint_type =
    int32_t;
  _current_waypoint_type current_waypoint;

  // setters for named parameter idiom
  Type & set__obstacle_distance(
    const float & _arg)
  {
    this->obstacle_distance = _arg;
    return *this;
  }
  Type & set__patrol_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->patrol_state = _arg;
    return *this;
  }
  Type & set__current_waypoint(
    const int32_t & _arg)
  {
    this->current_waypoint = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    raspbot_patrol::msg::PatrolStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const raspbot_patrol::msg::PatrolStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      raspbot_patrol::msg::PatrolStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      raspbot_patrol::msg::PatrolStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__raspbot_patrol__msg__PatrolStatus
    std::shared_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__raspbot_patrol__msg__PatrolStatus
    std::shared_ptr<raspbot_patrol::msg::PatrolStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PatrolStatus_ & other) const
  {
    if (this->obstacle_distance != other.obstacle_distance) {
      return false;
    }
    if (this->patrol_state != other.patrol_state) {
      return false;
    }
    if (this->current_waypoint != other.current_waypoint) {
      return false;
    }
    return true;
  }
  bool operator!=(const PatrolStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PatrolStatus_

// alias to use template instance with default allocator
using PatrolStatus =
  raspbot_patrol::msg::PatrolStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace raspbot_patrol

#endif  // RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__STRUCT_HPP_
