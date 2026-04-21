from setuptools import find_packages
from setuptools import setup

setup(
    name='raspbot_patrol',
    version='0.0.0',
    packages=find_packages(
        include=('raspbot_patrol', 'raspbot_patrol.*')),
)
