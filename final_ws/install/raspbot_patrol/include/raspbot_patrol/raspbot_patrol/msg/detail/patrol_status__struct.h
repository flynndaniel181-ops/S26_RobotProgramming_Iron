// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__STRUCT_H_
#define RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'patrol_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PatrolStatus in the package raspbot_patrol.
typedef struct raspbot_patrol__msg__PatrolStatus
{
  float obstacle_distance;
  rosidl_runtime_c__String patrol_state;
  int32_t current_waypoint;
} raspbot_patrol__msg__PatrolStatus;

// Struct for a sequence of raspbot_patrol__msg__PatrolStatus.
typedef struct raspbot_patrol__msg__PatrolStatus__Sequence
{
  raspbot_patrol__msg__PatrolStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__msg__PatrolStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__STRUCT_H_
