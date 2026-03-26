# Copyright (C) 2022-2025 LEIDOS.
#
# Licensed under the Apache License, Version 2.0 (the "License"); you may not
# use this file except in compliance with the License. You may obtain a copy of
# the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
# WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
# License for the specific language governing permissions and limitations under
# the License.

import launch.actions
import launch.events
import launch_ros.events.lifecycle
import lifecycle_msgs.msg
from ament_index_python import get_package_share_directory
from launch import LaunchDescription, LaunchContext
from launch_ros.actions import ComposableNodeContainer, Node
from launch_ros.descriptions import ComposableNode
from launch.actions import DeclareLaunchArgument, Shutdown, ExecuteProcess, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from carma_ros2_utils.launch.get_current_namespace import GetCurrentNamespace
from launch.conditions import IfCondition
from launch.substitutions import PythonExpression
from launch.actions import GroupAction

import os


'''
This file is can be used to launch the CARMA v2x_ros_driver_node.
  Though in carma-platform it may be launched directly from the base launch file.
'''

def generate_launch_description():

    # Declare the log_level launch argument
    log_level = LaunchConfiguration('log_level')
    declare_log_level_arg = DeclareLaunchArgument(
        name ='log_level', default_value='WARN',
        description="The log level to use for the v2x_ros_driver_node")

    configuration_delay = LaunchConfiguration('configuration_delay')
    declare_configuration_delay_arg = DeclareLaunchArgument(
        name ='configuration_delay', default_value='2.0',
        description="The delay in seconds before the v2x_ros_driver_node is configured")

    enable_v2x_driver_lifecycle = LaunchConfiguration('enable_v2x_driver_lifecycle')
    declare_enable_v2x_driver_lifecycle = DeclareLaunchArgument(
        name ='enable_v2x_driver_lifecycle', default_value='False',
        description="Enable the v2x_ros_driver_node lifecycle. If enabled manually transitions the node to active state. Default is false")

    enable_map_spat_visualizer = LaunchConfiguration('enable_map_spat_visualizer')
    declare_enable_map_spat_visualizer = DeclareLaunchArgument(
        name ='enable_map_spat_visualizer', default_value='False',
        description="Enable RViz bird's-eye MAP/SPAT lane and signal visualization node")

    enable_inbound_binary_visualizer = LaunchConfiguration('enable_inbound_binary_visualizer')
    declare_enable_inbound_binary_visualizer = DeclareLaunchArgument(
        name='enable_inbound_binary_visualizer', default_value='False',
        description="Enable decoder-backed visualizer that subscribes to /comms/inbound_binary_msg directly")

    inbound_binary_topic = LaunchConfiguration('inbound_binary_topic')
    declare_inbound_binary_topic_arg = DeclareLaunchArgument(
        name='inbound_binary_topic', default_value='/comms/inbound_binary_msg',
        description='Raw inbound ByteArray topic from v2x_ros_driver')

    map_topic = LaunchConfiguration('map_topic')
    declare_map_topic_arg = DeclareLaunchArgument(
        name='map_topic', default_value='/message/incoming_map',
        description='Topic for decoded MAP messages (j2735_v2x_msgs/msg/MapData)')

    spat_topic = LaunchConfiguration('spat_topic')
    declare_spat_topic_arg = DeclareLaunchArgument(
        name='spat_topic', default_value='/message/incoming_spat',
        description='Topic for decoded SPAT messages (j2735_v2x_msgs/msg/SPAT)')

    bsm_topic = LaunchConfiguration('bsm_topic')
    declare_bsm_topic_arg = DeclareLaunchArgument(
        name='bsm_topic', default_value='/message/incoming_bsm',
        description='Topic for decoded BSM messages (j2735_v2x_msgs/msg/BSM)')

    marker_topic = LaunchConfiguration('marker_topic')
    declare_marker_topic_arg = DeclareLaunchArgument(
        name='marker_topic', default_value='/v2x/map_spat_markers',
        description='Output marker array topic for RViz bird\'s-eye visualization')

    inbound_marker_topic = LaunchConfiguration('inbound_marker_topic')
    declare_inbound_marker_topic_arg = DeclareLaunchArgument(
        name='inbound_marker_topic', default_value='/v2x/inbound_map_spat_markers',
        description='Output marker array topic for decoder-backed MAP/SPAT visualization')

    bsm_marker_topic = LaunchConfiguration('bsm_marker_topic')
    declare_bsm_marker_topic_arg = DeclareLaunchArgument(
        name='bsm_marker_topic', default_value='/v2x/bsm_markers',
        description='Output marker array topic for BSM-only visualization markers')

    # Get parameter file path
    param_file_path = os.path.join(
        get_package_share_directory('v2x_ros_driver'), 'config/params.yaml')

    # Declare the global_params_override_file launch argument
    # Parameters in this file will override any parameters loaded in their respective packages
    global_params_override_file = LaunchConfiguration('global_params_override_file')
    declare_global_params_override_file_arg = DeclareLaunchArgument(
        name = 'global_params_override_file',
        default_value = [os.path.join(get_package_share_directory('v2x_ros_driver'), 'config/GlobalParamsOverride.yaml')],
        description = "Path to global file containing the parameters overwrite"
    )

    # Launch node(s) in a carma container to allow logging to be configured
    container = ComposableNodeContainer(
        package='carma_ros2_utils',
        name='v2x_ros_driver_container',
        namespace=GetCurrentNamespace(),
        executable='carma_component_container_mt',
        composable_node_descriptions=[

            # Launch the core node(s)
            ComposableNode(
                    package='v2x_ros_driver',
                    plugin='V2XDriverApplication::Node',
                    name='v2x_ros_driver_node',
                    extra_arguments=[
                        {'use_intra_process_comms': True},
                        {'--log-level' : log_level }
                    ],
                    remappings=[
                        ("inbound_binary_msg", "/comms/inbound_binary_msg"),
                        ("outbound_binary_msg", "/comms/outbound_binary_msg"),
                    ],
                    parameters=[
                      param_file_path,
                      global_params_override_file
                    ]
            ),
        ],
        on_exit= Shutdown()
    )
    ros2_cmd = launch.substitutions.FindExecutable(name="ros2")
    process_configure_v2x_ros_driver_node = launch.actions.ExecuteProcess(
        cmd=[
            ros2_cmd, "lifecycle", "set", "/v2x_ros_driver_node", "configure",
        ],

    )

    activate_node_group_action = GroupAction(
        # Node lifecycle activation called only if enable_v2x_driver_lifecycle is set to true
        condition=IfCondition(LaunchConfiguration('enable_v2x_driver_lifecycle')),
        actions=[
            # Set node lifecycle to configure after a delay
            launch.actions.TimerAction(
                period=LaunchConfiguration('configuration_delay'),
                actions=[process_configure_v2x_ros_driver_node],
            ),

            # Activate node after configuration
            launch.actions.RegisterEventHandler(
                launch.event_handlers.OnExecutionComplete(
                    target_action=process_configure_v2x_ros_driver_node,
                    on_completion=[
                        launch.actions.ExecuteProcess(
                            cmd=[
                                ros2_cmd, "lifecycle", "set", "/v2x_ros_driver_node", "activate",
                            ],
                        )
                    ],
                )
            ),
        ]

    )

    map_spat_visualizer = Node(
        package='v2x_ros_driver',
        executable='v2x_map_spat_visualizer_exec',
        name='v2x_map_spat_visualizer',
        condition=IfCondition(enable_map_spat_visualizer),
        arguments=['--ros-args', '--log-level', log_level],
        parameters=[
            {
                'map_topic': map_topic,
                'spat_topic': spat_topic,
                'bsm_topic': bsm_topic,
                'marker_topic': marker_topic,
            },
            global_params_override_file
        ]
    )

    inbound_decoder_visualizer = Node(
        package='v2x_ros_driver',
        executable='v2x_inbound_marker_visualizer.py',
        name='v2x_inbound_marker_visualizer',
        condition=IfCondition(enable_inbound_binary_visualizer),
        arguments=['--ros-args', '--log-level', log_level],
        parameters=[
            {
                'inbound_topic': inbound_binary_topic,
                'marker_topic': inbound_marker_topic,
                'bsm_marker_topic': bsm_marker_topic,
                'frame_id': 'map',
                'enable_deep_scan': True,
            },
            global_params_override_file
        ]
    )

    return LaunchDescription([
        declare_log_level_arg,
        declare_configuration_delay_arg,
        declare_global_params_override_file_arg,
        declare_enable_v2x_driver_lifecycle,
        declare_enable_map_spat_visualizer,
        declare_enable_inbound_binary_visualizer,
        declare_inbound_binary_topic_arg,
        declare_map_topic_arg,
        declare_spat_topic_arg,
        declare_bsm_topic_arg,
        declare_marker_topic_arg,
        declare_inbound_marker_topic_arg,
        declare_bsm_marker_topic_arg,
        container,
        activate_node_group_action,
        map_spat_visualizer,
        inbound_decoder_visualizer
    ])
