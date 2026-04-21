// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__TRAITS_HPP_
#define RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "raspbot_patrol/msg/detail/patrol_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace raspbot_patrol
{

namespace msg
{

inline void to_flow_style_yaml(
  const PatrolStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle_distance
  {
    out << "obstacle_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_distance, out);
    out << ", ";
  }

  // member: patrol_state
  {
    out << "patrol_state: ";
    rosidl_generator_traits::value_to_yaml(msg.patrol_state, out);
    out << ", ";
  }

  // member: current_waypoint
  {
    out << "current_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PatrolStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.obstacle_distance, out);
    out << "\n";
  }

  // member: patrol_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patrol_state: ";
    rosidl_generator_traits::value_to_yaml(msg.patrol_state, out);
    out << "\n";
  }

  // member: current_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.current_waypoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PatrolStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace raspbot_patrol

namespace rosidl_generator_traits
{

[[deprecated("use raspbot_patrol::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const raspbot_patrol::msg::PatrolStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  raspbot_patrol::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use raspbot_patrol::msg::to_yaml() instead")]]
inline std::string to_yaml(const raspbot_patrol::msg::PatrolStatus & msg)
{
  return raspbot_patrol::msg::to_yaml(msg);
}

template<>
inline const char * data_type<raspbot_patrol::msg::PatrolStatus>()
{
  return "raspbot_patrol::msg::PatrolStatus";
}

template<>
inline const char * name<raspbot_patrol::msg::PatrolStatus>()
{
  return "raspbot_patrol/msg/PatrolStatus";
}

template<>
struct has_fixed_size<raspbot_patrol::msg::PatrolStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<raspbot_patrol::msg::PatrolStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<raspbot_patrol::msg::PatrolStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__TRAITS_HPP_
