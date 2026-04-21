# generated from rosidl_generator_py/resource/_idl.py.em
# with input from raspbot_patrol:action/GoToWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GoToWaypoint_Goal(type):
    """Metaclass of message 'GoToWaypoint_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_Goal(metaclass=Metaclass_GoToWaypoint_Goal):
    """Message class 'GoToWaypoint_Goal'."""

    __slots__ = [
        '_waypoint_index',
    ]

    _fields_and_field_types = {
        'waypoint_index': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.waypoint_index = kwargs.get('waypoint_index', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.waypoint_index != other.waypoint_index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def waypoint_index(self):
        """Message field 'waypoint_index'."""
        return self._waypoint_index

    @waypoint_index.setter
    def waypoint_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'waypoint_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'waypoint_index' field must be an integer in [-2147483648, 2147483647]"
        self._waypoint_index = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_Result(type):
    """Metaclass of message 'GoToWaypoint_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_Result(metaclass=Metaclass_GoToWaypoint_Result):
    """Message class 'GoToWaypoint_Result'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_Feedback(type):
    """Metaclass of message 'GoToWaypoint_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_Feedback(metaclass=Metaclass_GoToWaypoint_Feedback):
    """Message class 'GoToWaypoint_Feedback'."""

    __slots__ = [
        '_distance_to_waypoint',
        '_current_state',
    ]

    _fields_and_field_types = {
        'distance_to_waypoint': 'float',
        'current_state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_to_waypoint = kwargs.get('distance_to_waypoint', float())
        self.current_state = kwargs.get('current_state', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.distance_to_waypoint != other.distance_to_waypoint:
            return False
        if self.current_state != other.current_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance_to_waypoint(self):
        """Message field 'distance_to_waypoint'."""
        return self._distance_to_waypoint

    @distance_to_waypoint.setter
    def distance_to_waypoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_to_waypoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_to_waypoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_to_waypoint = value

    @builtins.property
    def current_state(self):
        """Message field 'current_state'."""
        return self._current_state

    @current_state.setter
    def current_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_state' field must be of type 'str'"
        self._current_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_SendGoal_Request(type):
    """Metaclass of message 'GoToWaypoint_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__send_goal__request

            from raspbot_patrol.action import GoToWaypoint
            if GoToWaypoint.Goal.__class__._TYPE_SUPPORT is None:
                GoToWaypoint.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_SendGoal_Request(metaclass=Metaclass_GoToWaypoint_SendGoal_Request):
    """Message class 'GoToWaypoint_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'raspbot_patrol/GoToWaypoint_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raspbot_patrol', 'action'], 'GoToWaypoint_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Goal
        self.goal = kwargs.get('goal', GoToWaypoint_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Goal
            assert \
                isinstance(value, GoToWaypoint_Goal), \
                "The 'goal' field must be a sub message of type 'GoToWaypoint_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_SendGoal_Response(type):
    """Metaclass of message 'GoToWaypoint_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_SendGoal_Response(metaclass=Metaclass_GoToWaypoint_SendGoal_Response):
    """Message class 'GoToWaypoint_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_GoToWaypoint_SendGoal(type):
    """Metaclass of service 'GoToWaypoint_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__go_to_waypoint__send_goal

            from raspbot_patrol.action import _go_to_waypoint
            if _go_to_waypoint.Metaclass_GoToWaypoint_SendGoal_Request._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_SendGoal_Request.__import_type_support__()
            if _go_to_waypoint.Metaclass_GoToWaypoint_SendGoal_Response._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_SendGoal_Response.__import_type_support__()


class GoToWaypoint_SendGoal(metaclass=Metaclass_GoToWaypoint_SendGoal):
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_SendGoal_Request as Request
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_GetResult_Request(type):
    """Metaclass of message 'GoToWaypoint_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_GetResult_Request(metaclass=Metaclass_GoToWaypoint_GetResult_Request):
    """Message class 'GoToWaypoint_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_GetResult_Response(type):
    """Metaclass of message 'GoToWaypoint_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__get_result__response

            from raspbot_patrol.action import GoToWaypoint
            if GoToWaypoint.Result.__class__._TYPE_SUPPORT is None:
                GoToWaypoint.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_GetResult_Response(metaclass=Metaclass_GoToWaypoint_GetResult_Response):
    """Message class 'GoToWaypoint_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'raspbot_patrol/GoToWaypoint_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raspbot_patrol', 'action'], 'GoToWaypoint_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Result
        self.result = kwargs.get('result', GoToWaypoint_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Result
            assert \
                isinstance(value, GoToWaypoint_Result), \
                "The 'result' field must be a sub message of type 'GoToWaypoint_Result'"
        self._result = value


class Metaclass_GoToWaypoint_GetResult(type):
    """Metaclass of service 'GoToWaypoint_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__go_to_waypoint__get_result

            from raspbot_patrol.action import _go_to_waypoint
            if _go_to_waypoint.Metaclass_GoToWaypoint_GetResult_Request._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_GetResult_Request.__import_type_support__()
            if _go_to_waypoint.Metaclass_GoToWaypoint_GetResult_Response._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_GetResult_Response.__import_type_support__()


class GoToWaypoint_GetResult(metaclass=Metaclass_GoToWaypoint_GetResult):
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_GetResult_Request as Request
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GoToWaypoint_FeedbackMessage(type):
    """Metaclass of message 'GoToWaypoint_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__go_to_waypoint__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__go_to_waypoint__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__go_to_waypoint__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__go_to_waypoint__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__go_to_waypoint__feedback_message

            from raspbot_patrol.action import GoToWaypoint
            if GoToWaypoint.Feedback.__class__._TYPE_SUPPORT is None:
                GoToWaypoint.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GoToWaypoint_FeedbackMessage(metaclass=Metaclass_GoToWaypoint_FeedbackMessage):
    """Message class 'GoToWaypoint_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'raspbot_patrol/GoToWaypoint_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['raspbot_patrol', 'action'], 'GoToWaypoint_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Feedback
        self.feedback = kwargs.get('feedback', GoToWaypoint_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Feedback
            assert \
                isinstance(value, GoToWaypoint_Feedback), \
                "The 'feedback' field must be a sub message of type 'GoToWaypoint_Feedback'"
        self._feedback = value


class Metaclass_GoToWaypoint(type):
    """Metaclass of action 'GoToWaypoint'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('raspbot_patrol')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'raspbot_patrol.action.GoToWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__go_to_waypoint

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from raspbot_patrol.action import _go_to_waypoint
            if _go_to_waypoint.Metaclass_GoToWaypoint_SendGoal._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_SendGoal.__import_type_support__()
            if _go_to_waypoint.Metaclass_GoToWaypoint_GetResult._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_GetResult.__import_type_support__()
            if _go_to_waypoint.Metaclass_GoToWaypoint_FeedbackMessage._TYPE_SUPPORT is None:
                _go_to_waypoint.Metaclass_GoToWaypoint_FeedbackMessage.__import_type_support__()


class GoToWaypoint(metaclass=Metaclass_GoToWaypoint):

    # The goal message defined in the action definition.
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Goal as Goal
    # The result message defined in the action definition.
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Result as Result
    # The feedback message defined in the action definition.
    from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from raspbot_patrol.action._go_to_waypoint import GoToWaypoint_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
