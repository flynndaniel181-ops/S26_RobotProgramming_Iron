// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__BUILDER_HPP_
#define RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raspbot_patrol/msg/detail/patrol_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raspbot_patrol
{

namespace msg
{

namespace builder
{

class Init_PatrolStatus_current_waypoint
{
public:
  explicit Init_PatrolStatus_current_waypoint(::raspbot_patrol::msg::PatrolStatus & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::msg::PatrolStatus current_waypoint(::raspbot_patrol::msg::PatrolStatus::_current_waypoint_type arg)
  {
    msg_.current_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::msg::PatrolStatus msg_;
};

class Init_PatrolStatus_patrol_state
{
public:
  explicit Init_PatrolStatus_patrol_state(::raspbot_patrol::msg::PatrolStatus & msg)
  : msg_(msg)
  {}
  Init_PatrolStatus_current_waypoint patrol_state(::raspbot_patrol::msg::PatrolStatus::_patrol_state_type arg)
  {
    msg_.patrol_state = std::move(arg);
    return Init_PatrolStatus_current_waypoint(msg_);
  }

private:
  ::raspbot_patrol::msg::PatrolStatus msg_;
};

class Init_PatrolStatus_obstacle_distance
{
public:
  Init_PatrolStatus_obstacle_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PatrolStatus_patrol_state obstacle_distance(::raspbot_patrol::msg::PatrolStatus::_obstacle_distance_type arg)
  {
    msg_.obstacle_distance = std::move(arg);
    return Init_PatrolStatus_patrol_state(msg_);
  }

private:
  ::raspbot_patrol::msg::PatrolStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::msg::PatrolStatus>()
{
  return raspbot_patrol::msg::builder::Init_PatrolStatus_obstacle_distance();
}

}  // namespace raspbot_patrol

#endif  // RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__BUILDER_HPP_
