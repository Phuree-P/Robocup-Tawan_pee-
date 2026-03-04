from setuptools import find_packages
from setuptools import setup

setup(
    name='ired_msgs',
    version='2.0.1',
    packages=find_packages(
        include=('ired_msgs', 'ired_msgs.*')),
)
