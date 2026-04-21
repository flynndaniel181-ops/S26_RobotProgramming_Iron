// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "raspbot_patrol/msg/detail/patrol_status__rosidl_typesupport_introspection_c.h"
#include "raspbot_patrol/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "raspbot_patrol/msg/detail/patrol_status__functions.h"
#include "raspbot_patrol/msg/detail/patrol_status__struct.h"


// Include directives for member types
// Member `patrol_state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  raspbot_patrol__msg__PatrolStatus__init(message_memory);
}

void raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_fini_function(void * message_memory)
{
  raspbot_patrol__msg__PatrolStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_member_array[3] = {
  {
    "obstacle_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspbot_patrol__msg__PatrolStatus, obstacle_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "patrol_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspbot_patrol__msg__PatrolStatus, patrol_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(raspbot_patrol__msg__PatrolStatus, current_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_members = {
  "raspbot_patrol__msg",  // message namespace
  "PatrolStatus",  // message name
  3,  // number of fields
  sizeof(raspbot_patrol__msg__PatrolStatus),
  raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_member_array,  // message members
  raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_type_support_handle = {
  0,
  &raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_raspbot_patrol
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, raspbot_patrol, msg, PatrolStatus)() {
  if (!raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_type_support_handle.typesupport_identifier) {
    raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &raspbot_patrol__msg__PatrolStatus__rosidl_typesupport_introspection_c__PatrolStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
