import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yahboom/S26_RobotProgramming_Iron/Lab4/Flynn/roscourse_ws/src/install/teleop_twist_keyboard'
