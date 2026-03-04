from setuptools import find_packages, setup

package_name = 'ired_movetogoal'

setup(
    name=package_name,
    version='2.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Thitipong T.',
    maintainer_email='t.thepsit@gmail.com',
    author='AIMs Lab, KMITL',
    author_email='aimslabkmitl@gmail.com',
    description='iRED Move to goal: This package is used for moving the robot with the point of interestT',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'movetogoal = ired_movetogoal.movetogoal:main'
        ],
    },
)
