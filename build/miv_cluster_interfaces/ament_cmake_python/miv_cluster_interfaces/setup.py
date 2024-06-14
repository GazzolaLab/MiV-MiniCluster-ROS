from setuptools import find_packages
from setuptools import setup

setup(
    name='miv_cluster_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('miv_cluster_interfaces', 'miv_cluster_interfaces.*')),
)
