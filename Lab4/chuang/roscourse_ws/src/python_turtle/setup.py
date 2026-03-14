from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'python_turtle'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[(os.path.join('share',package_name,'launch'), glob(os.path.join('launch','*launch.[pxy][yma]*'))),
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yahboom',
    maintainer_email='ian.chuang27@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        'turtlebot_server = python_turtle.turtlebot_server:main',
'turtlebot_client = python_turtle.turtlebot_client:main',
'service_client = python_turtle.service_client:main',
        ],
    },
)
