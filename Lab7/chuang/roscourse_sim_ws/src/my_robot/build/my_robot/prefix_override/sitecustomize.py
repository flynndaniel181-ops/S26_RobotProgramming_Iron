import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yahboom/S26_RobotProgramming_Iron/Lab7/Flynn/roscourse_sim_ws/src/my_robot/install/my_robot'
