import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/pp/Tawan-pe-/src/robot/motion_control/install/motion_control'
