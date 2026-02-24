import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yahboom/S26_RobotProgramming_Iron/Lab3/Flynn/roscourse_ws/install/python_turtle'
