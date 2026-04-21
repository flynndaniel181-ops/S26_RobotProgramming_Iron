// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from raspbot_patrol:action/GoToWaypoint.idl
// generated code does not contain a copyright notice

#ifndef RASPBOT_PATROL__ACTION__DETAIL__GO_TO_WAYPOINT__BUILDER_HPP_
#define RASPBOT_PATROL__ACTION__DETAIL__GO_TO_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "raspbot_patrol/action/detail/go_to_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_Goal_waypoint_index
{
public:
  Init_GoToWaypoint_Goal_waypoint_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspbot_patrol::action::GoToWaypoint_Goal waypoint_index(::raspbot_patrol::action::GoToWaypoint_Goal::_waypoint_index_type arg)
  {
    msg_.waypoint_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_Goal>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_Goal_waypoint_index();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_Result_message
{
public:
  explicit Init_GoToWaypoint_Result_message(::raspbot_patrol::action::GoToWaypoint_Result & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::action::GoToWaypoint_Result message(::raspbot_patrol::action::GoToWaypoint_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_Result msg_;
};

class Init_GoToWaypoint_Result_success
{
public:
  Init_GoToWaypoint_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToWaypoint_Result_message success(::raspbot_patrol::action::GoToWaypoint_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GoToWaypoint_Result_message(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_Result>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_Result_success();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_Feedback_current_state
{
public:
  explicit Init_GoToWaypoint_Feedback_current_state(::raspbot_patrol::action::GoToWaypoint_Feedback & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::action::GoToWaypoint_Feedback current_state(::raspbot_patrol::action::GoToWaypoint_Feedback::_current_state_type arg)
  {
    msg_.current_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_Feedback msg_;
};

class Init_GoToWaypoint_Feedback_distance_to_waypoint
{
public:
  Init_GoToWaypoint_Feedback_distance_to_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToWaypoint_Feedback_current_state distance_to_waypoint(::raspbot_patrol::action::GoToWaypoint_Feedback::_distance_to_waypoint_type arg)
  {
    msg_.distance_to_waypoint = std::move(arg);
    return Init_GoToWaypoint_Feedback_current_state(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_Feedback>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_Feedback_distance_to_waypoint();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_SendGoal_Request_goal
{
public:
  explicit Init_GoToWaypoint_SendGoal_Request_goal(::raspbot_patrol::action::GoToWaypoint_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::action::GoToWaypoint_SendGoal_Request goal(::raspbot_patrol::action::GoToWaypoint_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_SendGoal_Request msg_;
};

class Init_GoToWaypoint_SendGoal_Request_goal_id
{
public:
  Init_GoToWaypoint_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToWaypoint_SendGoal_Request_goal goal_id(::raspbot_patrol::action::GoToWaypoint_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToWaypoint_SendGoal_Request_goal(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_SendGoal_Request>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_SendGoal_Request_goal_id();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_SendGoal_Response_stamp
{
public:
  explicit Init_GoToWaypoint_SendGoal_Response_stamp(::raspbot_patrol::action::GoToWaypoint_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::action::GoToWaypoint_SendGoal_Response stamp(::raspbot_patrol::action::GoToWaypoint_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_SendGoal_Response msg_;
};

class Init_GoToWaypoint_SendGoal_Response_accepted
{
public:
  Init_GoToWaypoint_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToWaypoint_SendGoal_Response_stamp accepted(::raspbot_patrol::action::GoToWaypoint_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_GoToWaypoint_SendGoal_Response_stamp(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_SendGoal_Response>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_SendGoal_Response_accepted();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_GetResult_Request_goal_id
{
public:
  Init_GoToWaypoint_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::raspbot_patrol::action::GoToWaypoint_GetResult_Request goal_id(::raspbot_patrol::action::GoToWaypoint_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_GetResult_Request>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_GetResult_Request_goal_id();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_GetResult_Response_result
{
public:
  explicit Init_GoToWaypoint_GetResult_Response_result(::raspbot_patrol::action::GoToWaypoint_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::action::GoToWaypoint_GetResult_Response result(::raspbot_patrol::action::GoToWaypoint_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_GetResult_Response msg_;
};

class Init_GoToWaypoint_GetResult_Response_status
{
public:
  Init_GoToWaypoint_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToWaypoint_GetResult_Response_result status(::raspbot_patrol::action::GoToWaypoint_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GoToWaypoint_GetResult_Response_result(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_GetResult_Response>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_GetResult_Response_status();
}

}  // namespace raspbot_patrol


namespace raspbot_patrol
{

namespace action
{

namespace builder
{

class Init_GoToWaypoint_FeedbackMessage_feedback
{
public:
  explicit Init_GoToWaypoint_FeedbackMessage_feedback(::raspbot_patrol::action::GoToWaypoint_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::raspbot_patrol::action::GoToWaypoint_FeedbackMessage feedback(::raspbot_patrol::action::GoToWaypoint_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_FeedbackMessage msg_;
};

class Init_GoToWaypoint_FeedbackMessage_goal_id
{
public:
  Init_GoToWaypoint_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GoToWaypoint_FeedbackMessage_feedback goal_id(::raspbot_patrol::action::GoToWaypoint_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_GoToWaypoint_FeedbackMessage_feedback(msg_);
  }

private:
  ::raspbot_patrol::action::GoToWaypoint_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::raspbot_patrol::action::GoToWaypoint_FeedbackMessage>()
{
  return raspbot_patrol::action::builder::Init_GoToWaypoint_FeedbackMessage_goal_id();
}

}  // namespace raspbot_patrol

#endif  // RASPBOT_PATROL__ACTION__DETAIL__GO_TO_WAYPOINT__BUILDER_HPP_
