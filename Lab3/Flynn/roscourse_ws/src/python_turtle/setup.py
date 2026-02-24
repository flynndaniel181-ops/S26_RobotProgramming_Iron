from setuptools import find_packages, setup

package_name = 'python_turtle'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yahboom',
    maintainer_email='flynndaniel181@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
        'turtlebot_server = python_turtle.turtlebot_server:main',
	'turtlebot_client = python_turtle.turtlebot_client:main',
	'service_client = python_turtle.service_client:main'
        ],
    },
)
