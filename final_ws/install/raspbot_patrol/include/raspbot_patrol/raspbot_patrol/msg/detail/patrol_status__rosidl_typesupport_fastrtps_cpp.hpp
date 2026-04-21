// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from raspbot_patrol:msg/PatrolStatus.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "raspbot_patrol/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "raspbot_patrol/msg/detail/patrol_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace raspbot_patrol
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
cdr_serialize(
  const raspbot_patrol::msg::PatrolStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  raspbot_patrol::msg::PatrolStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
get_serialized_size(
  const raspbot_patrol::msg::PatrolStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
max_serialized_size_PatrolStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace raspbot_patrol

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_raspbot_patrol
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, raspbot_patrol, msg, PatrolStatus)();

#ifdef __cplusplus
}
#endif

#endif  // RASPBOT_PATROL__MSG__DETAIL__PATROL_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
