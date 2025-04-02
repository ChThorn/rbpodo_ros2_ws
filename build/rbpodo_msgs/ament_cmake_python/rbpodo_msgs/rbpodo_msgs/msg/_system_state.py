# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rbpodo_msgs:msg/SystemState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'jnt_ref'
# Member 'jnt_ang'
# Member 'jnt_cur'
# Member 'tcp_ref'
# Member 'tcp_pos'
# Member 'analog_in'
# Member 'analog_out'
# Member 'jnt_temperature'
# Member 'jnt_info'
# Member 'tfb_analog_in'
# Member 'inbox_check_mode'
# Member 'eft'
# Member 'extend_io1_analog_in'
# Member 'extend_io1_analog_out'
# Member 'aa_joint_ref'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemState(type):
    """Metaclass of message 'SystemState'."""

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
            module = import_type_support('rbpodo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rbpodo_msgs.msg.SystemState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemState(metaclass=Metaclass_SystemState):
    """Message class 'SystemState'."""

    __slots__ = [
        '_time',
        '_jnt_ref',
        '_jnt_ang',
        '_jnt_cur',
        '_tcp_ref',
        '_tcp_pos',
        '_analog_in',
        '_analog_out',
        '_digital_in',
        '_digital_out',
        '_jnt_temperature',
        '_task_pc',
        '_task_repeat',
        '_task_run_id',
        '_task_run_num',
        '_task_run_time',
        '_task_state',
        '_default_speed',
        '_robot_state',
        '_information_chunk_1',
        '_jnt_info',
        '_collision_detect_onoff',
        '_is_freedrive_mode',
        '_real_vs_simulation_mode',
        '_init_state_info',
        '_init_error',
        '_tfb_analog_in',
        '_tfb_digital_in',
        '_tfb_digital_out',
        '_tfb_voltage_out',
        '_op_stat_collision_occur',
        '_op_stat_sos_flag',
        '_op_stat_self_collision',
        '_op_stat_soft_estop_occur',
        '_op_stat_ems_flag',
        '_information_chunk_2',
        '_information_chunk_3',
        '_inbox_trap_flag',
        '_inbox_check_mode',
        '_eft',
        '_information_chunk_4',
        '_extend_io1_analog_in',
        '_extend_io1_analog_out',
        '_extend_io1_digital_info',
        '_aa_joint_ref',
        '_safety_board_stat_info',
    ]

    _fields_and_field_types = {
        'time': 'float',
        'jnt_ref': 'float[6]',
        'jnt_ang': 'float[6]',
        'jnt_cur': 'float[6]',
        'tcp_ref': 'float[6]',
        'tcp_pos': 'float[6]',
        'analog_in': 'float[4]',
        'analog_out': 'float[4]',
        'digital_in': 'boolean[16]',
        'digital_out': 'boolean[16]',
        'jnt_temperature': 'float[6]',
        'task_pc': 'int32',
        'task_repeat': 'int32',
        'task_run_id': 'int32',
        'task_run_num': 'int32',
        'task_run_time': 'int32',
        'task_state': 'int32',
        'default_speed': 'float',
        'robot_state': 'int32',
        'information_chunk_1': 'int32',
        'jnt_info': 'int32[6]',
        'collision_detect_onoff': 'boolean',
        'is_freedrive_mode': 'boolean',
        'real_vs_simulation_mode': 'boolean',
        'init_state_info': 'int8',
        'init_error': 'int32',
        'tfb_analog_in': 'float[2]',
        'tfb_digital_in': 'boolean[2]',
        'tfb_digital_out': 'boolean[2]',
        'tfb_voltage_out': 'float',
        'op_stat_collision_occur': 'boolean',
        'op_stat_sos_flag': 'int8',
        'op_stat_self_collision': 'boolean',
        'op_stat_soft_estop_occur': 'boolean',
        'op_stat_ems_flag': 'int8',
        'information_chunk_2': 'int32',
        'information_chunk_3': 'int32',
        'inbox_trap_flag': 'boolean[2]',
        'inbox_check_mode': 'int8[2]',
        'eft': 'float[6]',
        'information_chunk_4': 'int32',
        'extend_io1_analog_in': 'float[4]',
        'extend_io1_analog_out': 'float[4]',
        'extend_io1_digital_info': 'uint32',
        'aa_joint_ref': 'float[6]',
        'safety_board_stat_info': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time = kwargs.get('time', float())
        if 'jnt_ref' not in kwargs:
            self.jnt_ref = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.jnt_ref = numpy.array(kwargs.get('jnt_ref'), dtype=numpy.float32)
            assert self.jnt_ref.shape == (6, )
        if 'jnt_ang' not in kwargs:
            self.jnt_ang = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.jnt_ang = numpy.array(kwargs.get('jnt_ang'), dtype=numpy.float32)
            assert self.jnt_ang.shape == (6, )
        if 'jnt_cur' not in kwargs:
            self.jnt_cur = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.jnt_cur = numpy.array(kwargs.get('jnt_cur'), dtype=numpy.float32)
            assert self.jnt_cur.shape == (6, )
        if 'tcp_ref' not in kwargs:
            self.tcp_ref = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.tcp_ref = numpy.array(kwargs.get('tcp_ref'), dtype=numpy.float32)
            assert self.tcp_ref.shape == (6, )
        if 'tcp_pos' not in kwargs:
            self.tcp_pos = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.tcp_pos = numpy.array(kwargs.get('tcp_pos'), dtype=numpy.float32)
            assert self.tcp_pos.shape == (6, )
        if 'analog_in' not in kwargs:
            self.analog_in = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.analog_in = numpy.array(kwargs.get('analog_in'), dtype=numpy.float32)
            assert self.analog_in.shape == (4, )
        if 'analog_out' not in kwargs:
            self.analog_out = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.analog_out = numpy.array(kwargs.get('analog_out'), dtype=numpy.float32)
            assert self.analog_out.shape == (4, )
        self.digital_in = kwargs.get(
            'digital_in',
            [bool() for x in range(16)]
        )
        self.digital_out = kwargs.get(
            'digital_out',
            [bool() for x in range(16)]
        )
        if 'jnt_temperature' not in kwargs:
            self.jnt_temperature = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.jnt_temperature = numpy.array(kwargs.get('jnt_temperature'), dtype=numpy.float32)
            assert self.jnt_temperature.shape == (6, )
        self.task_pc = kwargs.get('task_pc', int())
        self.task_repeat = kwargs.get('task_repeat', int())
        self.task_run_id = kwargs.get('task_run_id', int())
        self.task_run_num = kwargs.get('task_run_num', int())
        self.task_run_time = kwargs.get('task_run_time', int())
        self.task_state = kwargs.get('task_state', int())
        self.default_speed = kwargs.get('default_speed', float())
        self.robot_state = kwargs.get('robot_state', int())
        self.information_chunk_1 = kwargs.get('information_chunk_1', int())
        if 'jnt_info' not in kwargs:
            self.jnt_info = numpy.zeros(6, dtype=numpy.int32)
        else:
            self.jnt_info = numpy.array(kwargs.get('jnt_info'), dtype=numpy.int32)
            assert self.jnt_info.shape == (6, )
        self.collision_detect_onoff = kwargs.get('collision_detect_onoff', bool())
        self.is_freedrive_mode = kwargs.get('is_freedrive_mode', bool())
        self.real_vs_simulation_mode = kwargs.get('real_vs_simulation_mode', bool())
        self.init_state_info = kwargs.get('init_state_info', int())
        self.init_error = kwargs.get('init_error', int())
        if 'tfb_analog_in' not in kwargs:
            self.tfb_analog_in = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.tfb_analog_in = numpy.array(kwargs.get('tfb_analog_in'), dtype=numpy.float32)
            assert self.tfb_analog_in.shape == (2, )
        self.tfb_digital_in = kwargs.get(
            'tfb_digital_in',
            [bool() for x in range(2)]
        )
        self.tfb_digital_out = kwargs.get(
            'tfb_digital_out',
            [bool() for x in range(2)]
        )
        self.tfb_voltage_out = kwargs.get('tfb_voltage_out', float())
        self.op_stat_collision_occur = kwargs.get('op_stat_collision_occur', bool())
        self.op_stat_sos_flag = kwargs.get('op_stat_sos_flag', int())
        self.op_stat_self_collision = kwargs.get('op_stat_self_collision', bool())
        self.op_stat_soft_estop_occur = kwargs.get('op_stat_soft_estop_occur', bool())
        self.op_stat_ems_flag = kwargs.get('op_stat_ems_flag', int())
        self.information_chunk_2 = kwargs.get('information_chunk_2', int())
        self.information_chunk_3 = kwargs.get('information_chunk_3', int())
        self.inbox_trap_flag = kwargs.get(
            'inbox_trap_flag',
            [bool() for x in range(2)]
        )
        if 'inbox_check_mode' not in kwargs:
            self.inbox_check_mode = numpy.zeros(2, dtype=numpy.int8)
        else:
            self.inbox_check_mode = numpy.array(kwargs.get('inbox_check_mode'), dtype=numpy.int8)
            assert self.inbox_check_mode.shape == (2, )
        if 'eft' not in kwargs:
            self.eft = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.eft = numpy.array(kwargs.get('eft'), dtype=numpy.float32)
            assert self.eft.shape == (6, )
        self.information_chunk_4 = kwargs.get('information_chunk_4', int())
        if 'extend_io1_analog_in' not in kwargs:
            self.extend_io1_analog_in = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.extend_io1_analog_in = numpy.array(kwargs.get('extend_io1_analog_in'), dtype=numpy.float32)
            assert self.extend_io1_analog_in.shape == (4, )
        if 'extend_io1_analog_out' not in kwargs:
            self.extend_io1_analog_out = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.extend_io1_analog_out = numpy.array(kwargs.get('extend_io1_analog_out'), dtype=numpy.float32)
            assert self.extend_io1_analog_out.shape == (4, )
        self.extend_io1_digital_info = kwargs.get('extend_io1_digital_info', int())
        if 'aa_joint_ref' not in kwargs:
            self.aa_joint_ref = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.aa_joint_ref = numpy.array(kwargs.get('aa_joint_ref'), dtype=numpy.float32)
            assert self.aa_joint_ref.shape == (6, )
        self.safety_board_stat_info = kwargs.get('safety_board_stat_info', int())

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
        if self.time != other.time:
            return False
        if all(self.jnt_ref != other.jnt_ref):
            return False
        if all(self.jnt_ang != other.jnt_ang):
            return False
        if all(self.jnt_cur != other.jnt_cur):
            return False
        if all(self.tcp_ref != other.tcp_ref):
            return False
        if all(self.tcp_pos != other.tcp_pos):
            return False
        if all(self.analog_in != other.analog_in):
            return False
        if all(self.analog_out != other.analog_out):
            return False
        if self.digital_in != other.digital_in:
            return False
        if self.digital_out != other.digital_out:
            return False
        if all(self.jnt_temperature != other.jnt_temperature):
            return False
        if self.task_pc != other.task_pc:
            return False
        if self.task_repeat != other.task_repeat:
            return False
        if self.task_run_id != other.task_run_id:
            return False
        if self.task_run_num != other.task_run_num:
            return False
        if self.task_run_time != other.task_run_time:
            return False
        if self.task_state != other.task_state:
            return False
        if self.default_speed != other.default_speed:
            return False
        if self.robot_state != other.robot_state:
            return False
        if self.information_chunk_1 != other.information_chunk_1:
            return False
        if all(self.jnt_info != other.jnt_info):
            return False
        if self.collision_detect_onoff != other.collision_detect_onoff:
            return False
        if self.is_freedrive_mode != other.is_freedrive_mode:
            return False
        if self.real_vs_simulation_mode != other.real_vs_simulation_mode:
            return False
        if self.init_state_info != other.init_state_info:
            return False
        if self.init_error != other.init_error:
            return False
        if all(self.tfb_analog_in != other.tfb_analog_in):
            return False
        if self.tfb_digital_in != other.tfb_digital_in:
            return False
        if self.tfb_digital_out != other.tfb_digital_out:
            return False
        if self.tfb_voltage_out != other.tfb_voltage_out:
            return False
        if self.op_stat_collision_occur != other.op_stat_collision_occur:
            return False
        if self.op_stat_sos_flag != other.op_stat_sos_flag:
            return False
        if self.op_stat_self_collision != other.op_stat_self_collision:
            return False
        if self.op_stat_soft_estop_occur != other.op_stat_soft_estop_occur:
            return False
        if self.op_stat_ems_flag != other.op_stat_ems_flag:
            return False
        if self.information_chunk_2 != other.information_chunk_2:
            return False
        if self.information_chunk_3 != other.information_chunk_3:
            return False
        if self.inbox_trap_flag != other.inbox_trap_flag:
            return False
        if all(self.inbox_check_mode != other.inbox_check_mode):
            return False
        if all(self.eft != other.eft):
            return False
        if self.information_chunk_4 != other.information_chunk_4:
            return False
        if all(self.extend_io1_analog_in != other.extend_io1_analog_in):
            return False
        if all(self.extend_io1_analog_out != other.extend_io1_analog_out):
            return False
        if self.extend_io1_digital_info != other.extend_io1_digital_info:
            return False
        if all(self.aa_joint_ref != other.aa_joint_ref):
            return False
        if self.safety_board_stat_info != other.safety_board_stat_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time = value

    @builtins.property
    def jnt_ref(self):
        """Message field 'jnt_ref'."""
        return self._jnt_ref

    @jnt_ref.setter
    def jnt_ref(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'jnt_ref' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'jnt_ref' numpy.ndarray() must have a size of 6"
            self._jnt_ref = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'jnt_ref' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jnt_ref = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def jnt_ang(self):
        """Message field 'jnt_ang'."""
        return self._jnt_ang

    @jnt_ang.setter
    def jnt_ang(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'jnt_ang' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'jnt_ang' numpy.ndarray() must have a size of 6"
            self._jnt_ang = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'jnt_ang' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jnt_ang = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def jnt_cur(self):
        """Message field 'jnt_cur'."""
        return self._jnt_cur

    @jnt_cur.setter
    def jnt_cur(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'jnt_cur' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'jnt_cur' numpy.ndarray() must have a size of 6"
            self._jnt_cur = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'jnt_cur' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jnt_cur = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def tcp_ref(self):
        """Message field 'tcp_ref'."""
        return self._tcp_ref

    @tcp_ref.setter
    def tcp_ref(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'tcp_ref' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'tcp_ref' numpy.ndarray() must have a size of 6"
            self._tcp_ref = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'tcp_ref' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._tcp_ref = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def tcp_pos(self):
        """Message field 'tcp_pos'."""
        return self._tcp_pos

    @tcp_pos.setter
    def tcp_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'tcp_pos' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'tcp_pos' numpy.ndarray() must have a size of 6"
            self._tcp_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'tcp_pos' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._tcp_pos = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def analog_in(self):
        """Message field 'analog_in'."""
        return self._analog_in

    @analog_in.setter
    def analog_in(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'analog_in' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'analog_in' numpy.ndarray() must have a size of 4"
            self._analog_in = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'analog_in' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._analog_in = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def analog_out(self):
        """Message field 'analog_out'."""
        return self._analog_out

    @analog_out.setter
    def analog_out(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'analog_out' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'analog_out' numpy.ndarray() must have a size of 4"
            self._analog_out = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'analog_out' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._analog_out = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def digital_in(self):
        """Message field 'digital_in'."""
        return self._digital_in

    @digital_in.setter
    def digital_in(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'digital_in' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._digital_in = value

    @builtins.property
    def digital_out(self):
        """Message field 'digital_out'."""
        return self._digital_out

    @digital_out.setter
    def digital_out(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'digital_out' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._digital_out = value

    @builtins.property
    def jnt_temperature(self):
        """Message field 'jnt_temperature'."""
        return self._jnt_temperature

    @jnt_temperature.setter
    def jnt_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'jnt_temperature' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'jnt_temperature' numpy.ndarray() must have a size of 6"
            self._jnt_temperature = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'jnt_temperature' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._jnt_temperature = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def task_pc(self):
        """Message field 'task_pc'."""
        return self._task_pc

    @task_pc.setter
    def task_pc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_pc' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_pc' field must be an integer in [-2147483648, 2147483647]"
        self._task_pc = value

    @builtins.property
    def task_repeat(self):
        """Message field 'task_repeat'."""
        return self._task_repeat

    @task_repeat.setter
    def task_repeat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_repeat' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_repeat' field must be an integer in [-2147483648, 2147483647]"
        self._task_repeat = value

    @builtins.property
    def task_run_id(self):
        """Message field 'task_run_id'."""
        return self._task_run_id

    @task_run_id.setter
    def task_run_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_run_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_run_id' field must be an integer in [-2147483648, 2147483647]"
        self._task_run_id = value

    @builtins.property
    def task_run_num(self):
        """Message field 'task_run_num'."""
        return self._task_run_num

    @task_run_num.setter
    def task_run_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_run_num' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_run_num' field must be an integer in [-2147483648, 2147483647]"
        self._task_run_num = value

    @builtins.property
    def task_run_time(self):
        """Message field 'task_run_time'."""
        return self._task_run_time

    @task_run_time.setter
    def task_run_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_run_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_run_time' field must be an integer in [-2147483648, 2147483647]"
        self._task_run_time = value

    @builtins.property
    def task_state(self):
        """Message field 'task_state'."""
        return self._task_state

    @task_state.setter
    def task_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_state' field must be an integer in [-2147483648, 2147483647]"
        self._task_state = value

    @builtins.property
    def default_speed(self):
        """Message field 'default_speed'."""
        return self._default_speed

    @default_speed.setter
    def default_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'default_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'default_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._default_speed = value

    @builtins.property
    def robot_state(self):
        """Message field 'robot_state'."""
        return self._robot_state

    @robot_state.setter
    def robot_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_state' field must be an integer in [-2147483648, 2147483647]"
        self._robot_state = value

    @builtins.property
    def information_chunk_1(self):
        """Message field 'information_chunk_1'."""
        return self._information_chunk_1

    @information_chunk_1.setter
    def information_chunk_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'information_chunk_1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'information_chunk_1' field must be an integer in [-2147483648, 2147483647]"
        self._information_chunk_1 = value

    @builtins.property
    def jnt_info(self):
        """Message field 'jnt_info'."""
        return self._jnt_info

    @jnt_info.setter
    def jnt_info(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'jnt_info' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 6, \
                "The 'jnt_info' numpy.ndarray() must have a size of 6"
            self._jnt_info = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'jnt_info' field must be a set or sequence with length 6 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._jnt_info = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def collision_detect_onoff(self):
        """Message field 'collision_detect_onoff'."""
        return self._collision_detect_onoff

    @collision_detect_onoff.setter
    def collision_detect_onoff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'collision_detect_onoff' field must be of type 'bool'"
        self._collision_detect_onoff = value

    @builtins.property
    def is_freedrive_mode(self):
        """Message field 'is_freedrive_mode'."""
        return self._is_freedrive_mode

    @is_freedrive_mode.setter
    def is_freedrive_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_freedrive_mode' field must be of type 'bool'"
        self._is_freedrive_mode = value

    @builtins.property
    def real_vs_simulation_mode(self):
        """Message field 'real_vs_simulation_mode'."""
        return self._real_vs_simulation_mode

    @real_vs_simulation_mode.setter
    def real_vs_simulation_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'real_vs_simulation_mode' field must be of type 'bool'"
        self._real_vs_simulation_mode = value

    @builtins.property
    def init_state_info(self):
        """Message field 'init_state_info'."""
        return self._init_state_info

    @init_state_info.setter
    def init_state_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'init_state_info' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'init_state_info' field must be an integer in [-128, 127]"
        self._init_state_info = value

    @builtins.property
    def init_error(self):
        """Message field 'init_error'."""
        return self._init_error

    @init_error.setter
    def init_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'init_error' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'init_error' field must be an integer in [-2147483648, 2147483647]"
        self._init_error = value

    @builtins.property
    def tfb_analog_in(self):
        """Message field 'tfb_analog_in'."""
        return self._tfb_analog_in

    @tfb_analog_in.setter
    def tfb_analog_in(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'tfb_analog_in' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'tfb_analog_in' numpy.ndarray() must have a size of 2"
            self._tfb_analog_in = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'tfb_analog_in' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._tfb_analog_in = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def tfb_digital_in(self):
        """Message field 'tfb_digital_in'."""
        return self._tfb_digital_in

    @tfb_digital_in.setter
    def tfb_digital_in(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'tfb_digital_in' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._tfb_digital_in = value

    @builtins.property
    def tfb_digital_out(self):
        """Message field 'tfb_digital_out'."""
        return self._tfb_digital_out

    @tfb_digital_out.setter
    def tfb_digital_out(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'tfb_digital_out' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._tfb_digital_out = value

    @builtins.property
    def tfb_voltage_out(self):
        """Message field 'tfb_voltage_out'."""
        return self._tfb_voltage_out

    @tfb_voltage_out.setter
    def tfb_voltage_out(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tfb_voltage_out' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tfb_voltage_out' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tfb_voltage_out = value

    @builtins.property
    def op_stat_collision_occur(self):
        """Message field 'op_stat_collision_occur'."""
        return self._op_stat_collision_occur

    @op_stat_collision_occur.setter
    def op_stat_collision_occur(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'op_stat_collision_occur' field must be of type 'bool'"
        self._op_stat_collision_occur = value

    @builtins.property
    def op_stat_sos_flag(self):
        """Message field 'op_stat_sos_flag'."""
        return self._op_stat_sos_flag

    @op_stat_sos_flag.setter
    def op_stat_sos_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op_stat_sos_flag' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'op_stat_sos_flag' field must be an integer in [-128, 127]"
        self._op_stat_sos_flag = value

    @builtins.property
    def op_stat_self_collision(self):
        """Message field 'op_stat_self_collision'."""
        return self._op_stat_self_collision

    @op_stat_self_collision.setter
    def op_stat_self_collision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'op_stat_self_collision' field must be of type 'bool'"
        self._op_stat_self_collision = value

    @builtins.property
    def op_stat_soft_estop_occur(self):
        """Message field 'op_stat_soft_estop_occur'."""
        return self._op_stat_soft_estop_occur

    @op_stat_soft_estop_occur.setter
    def op_stat_soft_estop_occur(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'op_stat_soft_estop_occur' field must be of type 'bool'"
        self._op_stat_soft_estop_occur = value

    @builtins.property
    def op_stat_ems_flag(self):
        """Message field 'op_stat_ems_flag'."""
        return self._op_stat_ems_flag

    @op_stat_ems_flag.setter
    def op_stat_ems_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op_stat_ems_flag' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'op_stat_ems_flag' field must be an integer in [-128, 127]"
        self._op_stat_ems_flag = value

    @builtins.property
    def information_chunk_2(self):
        """Message field 'information_chunk_2'."""
        return self._information_chunk_2

    @information_chunk_2.setter
    def information_chunk_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'information_chunk_2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'information_chunk_2' field must be an integer in [-2147483648, 2147483647]"
        self._information_chunk_2 = value

    @builtins.property
    def information_chunk_3(self):
        """Message field 'information_chunk_3'."""
        return self._information_chunk_3

    @information_chunk_3.setter
    def information_chunk_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'information_chunk_3' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'information_chunk_3' field must be an integer in [-2147483648, 2147483647]"
        self._information_chunk_3 = value

    @builtins.property
    def inbox_trap_flag(self):
        """Message field 'inbox_trap_flag'."""
        return self._inbox_trap_flag

    @inbox_trap_flag.setter
    def inbox_trap_flag(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'inbox_trap_flag' field must be a set or sequence with length 2 and each value of type 'bool'"
        self._inbox_trap_flag = value

    @builtins.property
    def inbox_check_mode(self):
        """Message field 'inbox_check_mode'."""
        return self._inbox_check_mode

    @inbox_check_mode.setter
    def inbox_check_mode(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'inbox_check_mode' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 2, \
                "The 'inbox_check_mode' numpy.ndarray() must have a size of 2"
            self._inbox_check_mode = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'inbox_check_mode' field must be a set or sequence with length 2 and each value of type 'int' and each integer in [-128, 127]"
        self._inbox_check_mode = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def eft(self):
        """Message field 'eft'."""
        return self._eft

    @eft.setter
    def eft(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'eft' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'eft' numpy.ndarray() must have a size of 6"
            self._eft = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'eft' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._eft = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def information_chunk_4(self):
        """Message field 'information_chunk_4'."""
        return self._information_chunk_4

    @information_chunk_4.setter
    def information_chunk_4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'information_chunk_4' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'information_chunk_4' field must be an integer in [-2147483648, 2147483647]"
        self._information_chunk_4 = value

    @builtins.property
    def extend_io1_analog_in(self):
        """Message field 'extend_io1_analog_in'."""
        return self._extend_io1_analog_in

    @extend_io1_analog_in.setter
    def extend_io1_analog_in(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'extend_io1_analog_in' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'extend_io1_analog_in' numpy.ndarray() must have a size of 4"
            self._extend_io1_analog_in = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'extend_io1_analog_in' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._extend_io1_analog_in = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def extend_io1_analog_out(self):
        """Message field 'extend_io1_analog_out'."""
        return self._extend_io1_analog_out

    @extend_io1_analog_out.setter
    def extend_io1_analog_out(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'extend_io1_analog_out' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'extend_io1_analog_out' numpy.ndarray() must have a size of 4"
            self._extend_io1_analog_out = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'extend_io1_analog_out' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._extend_io1_analog_out = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def extend_io1_digital_info(self):
        """Message field 'extend_io1_digital_info'."""
        return self._extend_io1_digital_info

    @extend_io1_digital_info.setter
    def extend_io1_digital_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extend_io1_digital_info' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'extend_io1_digital_info' field must be an unsigned integer in [0, 4294967295]"
        self._extend_io1_digital_info = value

    @builtins.property
    def aa_joint_ref(self):
        """Message field 'aa_joint_ref'."""
        return self._aa_joint_ref

    @aa_joint_ref.setter
    def aa_joint_ref(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'aa_joint_ref' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'aa_joint_ref' numpy.ndarray() must have a size of 6"
            self._aa_joint_ref = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'aa_joint_ref' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._aa_joint_ref = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def safety_board_stat_info(self):
        """Message field 'safety_board_stat_info'."""
        return self._safety_board_stat_info

    @safety_board_stat_info.setter
    def safety_board_stat_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safety_board_stat_info' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'safety_board_stat_info' field must be an unsigned integer in [0, 4294967295]"
        self._safety_board_stat_info = value
