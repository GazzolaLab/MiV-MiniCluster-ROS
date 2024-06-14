import os
from glob import glob
from setuptools import setup

package_name = 'miv_cluster'
submodules = "miv_cluster/submodules"

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name, submodules],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gazzolapi',
    maintainer_email='gazzolapi@todo.todo',
    description='MiV cluster control package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'talker = miv_cluster.gripper_command_node:main',
            'listener = miv_cluster.gripper_task_node:main',
            'server_gantry = miv_cluster.gantry_server_node:main',
            'server_camera = miv_cluster.camera_server_node:main',
            'client = miv_cluster.gantry_client_node:main',
            'MEA = miv_cluster.MEA_node:main',
            'scheduler = miv_cluster.scheduler_node:main',
            'run_now = miv_cluster.run_node:main',
            'chamber_cali = miv_cluster.chamber_cali:main',
            'listener_encoder = miv_cluster.encoder_task_node:main',
        ],
    },
)
