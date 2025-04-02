from setuptools import find_packages
from setuptools import setup

setup(
    name='rbpodo_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rbpodo_msgs', 'rbpodo_msgs.*')),
)
