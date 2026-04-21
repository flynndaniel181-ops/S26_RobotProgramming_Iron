// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from raspbot_patrol:action/GoToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__ACTION__DETAIL__GO_TO_WAYPOINT__STRUCT_H_
#define RASPBOT_PATROL__ACTION__DETAIL__GO_TO_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_Goal
{
  int32_t waypoint_index;
} raspbot_patrol__action__GoToWaypoint_Goal;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_Goal.
typedef struct raspbot_patrol__action__GoToWaypoint_Goal__Sequence
{
  raspbot_patrol__action__GoToWaypoint_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_Result
{
  bool success;
  rosidl_runtime_c__String message;
} raspbot_patrol__action__GoToWaypoint_Result;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_Result.
typedef struct raspbot_patrol__action__GoToWaypoint_Result__Sequence
{
  raspbot_patrol__action__GoToWaypoint_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_state'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_Feedback
{
  float distance_to_waypoint;
  rosidl_runtime_c__String current_state;
} raspbot_patrol__action__GoToWaypoint_Feedback;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_Feedback.
typedef struct raspbot_patrol__action__GoToWaypoint_Feedback__Sequence
{
  raspbot_patrol__action__GoToWaypoint_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "raspbot_patrol/action/detail/go_to_waypoint__struct.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  raspbot_patrol__action__GoToWaypoint_Goal goal;
} raspbot_patrol__action__GoToWaypoint_SendGoal_Request;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_SendGoal_Request.
typedef struct raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence
{
  raspbot_patrol__action__GoToWaypoint_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} raspbot_patrol__action__GoToWaypoint_SendGoal_Response;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_SendGoal_Response.
typedef struct raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence
{
  raspbot_patrol__action__GoToWaypoint_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} raspbot_patrol__action__GoToWaypoint_GetResult_Request;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_GetResult_Request.
typedef struct raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence
{
  raspbot_patrol__action__GoToWaypoint_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "raspbot_patrol/action/detail/go_to_waypoint__struct.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_GetResult_Response
{
  int8_t status;
  raspbot_patrol__action__GoToWaypoint_Result result;
} raspbot_patrol__action__GoToWaypoint_GetResult_Response;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_GetResult_Response.
typedef struct raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence
{
  raspbot_patrol__action__GoToWaypoint_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "raspbot_patrol/action/detail/go_to_waypoint__struct.h"

/// Struct defined in action/GoToWaypoint in the package raspbot_patrol.
typedef struct raspbot_patrol__action__GoToWaypoint_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  raspbot_patrol__action__GoToWaypoint_Feedback feedback;
} raspbot_patrol__action__GoToWaypoint_FeedbackMessage;

// Struct for a sequence of raspbot_patrol__action__GoToWaypoint_FeedbackMessage.
typedef struct raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence
{
  raspbot_patrol__action__GoToWaypoint_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} raspbot_patrol__action__GoToWaypoint_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RASPBOT_PATROL__ACTION__DETAIL__GO_TO_WAYPOINT__STRUCT_H_
