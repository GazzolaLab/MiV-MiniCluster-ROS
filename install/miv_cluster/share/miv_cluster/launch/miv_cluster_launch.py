from launch import LaunchDescription
import launch_ros.actions

def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            package='miv_cluster', executable='listener'),
        launch_ros.actions.Node(
            package='miv_cluster', executable='server_gantry'),
        launch_ros.actions.Node(
            package='miv_cluster', executable='server_camera'),
        launch_ros.actions.Node(
            package='miv_cluster', executable='MEA'),
    ])
