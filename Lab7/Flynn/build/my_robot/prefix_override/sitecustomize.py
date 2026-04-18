import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yahboom/S26_RobotProgramming_Iron/Lab7/Flynn/install/my_robot'
