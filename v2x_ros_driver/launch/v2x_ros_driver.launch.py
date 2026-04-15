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

    enable_safety_alert_bridge = LaunchConfiguration('enable_safety_alert_bridge')
    declare_enable_safety_alert_bridge_arg = DeclareLaunchArgument(
        name='enable_safety_alert_bridge', default_value='False',
        description='Enable standalone safety alert bridge alongside raw message transport')

    enable_native_safety_alert_bridge = LaunchConfiguration('enable_native_safety_alert_bridge')
    declare_enable_native_safety_alert_bridge_arg = DeclareLaunchArgument(
        name='enable_native_safety_alert_bridge', default_value='False',
        description='Enable native C++ app-notif safety alert bridge (requires SDK-enabled build)')

    inbound_binary_topic = LaunchConfiguration('inbound_binary_topic')
    declare_inbound_binary_topic_arg = DeclareLaunchArgument(
        name='inbound_binary_topic', default_value='/comms/inbound_binary_msg',
        description='Raw inbound ByteArray topic from v2x_ros_driver')

    safety_alert_topic = LaunchConfiguration('safety_alert_topic')
    declare_safety_alert_topic_arg = DeclareLaunchArgument(
        name='safety_alert_topic', default_value='/v2x/safety_alerts',
        description='Topic for normalized safety alerts emitted by the standalone bridge')

    safety_alert_mapped_topic = LaunchConfiguration('safety_alert_mapped_topic')
    declare_safety_alert_mapped_topic_arg = DeclareLaunchArgument(
        name='safety_alert_mapped_topic', default_value='/v2x/safety_alert_mapped',
        description='Topic for mapped/derived safety alert abbreviations and confidence')

    safety_alert_debug_raw_topic = LaunchConfiguration('safety_alert_debug_raw_topic')
    declare_safety_alert_debug_raw_topic_arg = DeclareLaunchArgument(
        name='safety_alert_debug_raw_topic', default_value='/v2x/safety_alert_debug_raw',
        description='Topic for raw SDK safety payload passthrough for debugging')

    safety_alert_abbrev_marker_topic = LaunchConfiguration('safety_alert_abbrev_marker_topic')
    declare_safety_alert_abbrev_marker_topic_arg = DeclareLaunchArgument(
        name='safety_alert_abbrev_marker_topic', default_value='/v2x/safety_alert_abbrev_marker',
        description='RViz marker topic showing active safety alert abbreviations')

    safety_alert_abbrev_overlay_topic = LaunchConfiguration('safety_alert_abbrev_overlay_topic')
    declare_safety_alert_abbrev_overlay_topic_arg = DeclareLaunchArgument(
        name='safety_alert_abbrev_overlay_topic', default_value='/v2x/safety_alert_overlay_text',
        description='RViz 2D overlay topic showing active safety alert abbreviation text')

    safety_alert_enable_abbrev_overlay = LaunchConfiguration('safety_alert_enable_abbrev_overlay')
    declare_safety_alert_enable_abbrev_overlay_arg = DeclareLaunchArgument(
        name='safety_alert_enable_abbrev_overlay', default_value='True',
        description='Enable safety alert abbreviation screen-space overlay text publication')

    safety_alert_abbrev_marker_z = LaunchConfiguration('safety_alert_abbrev_marker_z')
    declare_safety_alert_abbrev_marker_z_arg = DeclareLaunchArgument(
        name='safety_alert_abbrev_marker_z', default_value='4.0',
        description='Z position for the RViz safety alert abbreviation text marker')

    safety_bridge_obu_host = LaunchConfiguration('safety_bridge_obu_host')
    declare_safety_bridge_obu_host_arg = DeclareLaunchArgument(
        name='safety_bridge_obu_host', default_value='127.0.0.1',
        description='OBU host IP for Commsignia SDK RPC connection')

    safety_bridge_obu_port = LaunchConfiguration('safety_bridge_obu_port')
    declare_safety_bridge_obu_port_arg = DeclareLaunchArgument(
        name='safety_bridge_obu_port', default_value='43985',
        description='OBU native app-notif UDP endpoint port for C++ bridge')

    safety_bridge_local_port = LaunchConfiguration('safety_bridge_local_port')
    declare_safety_bridge_local_port_arg = DeclareLaunchArgument(
        name='safety_bridge_local_port', default_value='0',
        description='Local UDP port for native app-notif C++ bridge client')

    safety_bridge_notif_filter_csv = LaunchConfiguration('safety_bridge_notif_filter_csv')
    declare_safety_bridge_notif_filter_csv_arg = DeclareLaunchArgument(
        name='safety_bridge_notif_filter_csv', default_value='',
        description='Optional comma-separated native notif filters (e.g., FCW,IMA,WWE,WWR)')

    safety_bridge_reconnect_delay = LaunchConfiguration('safety_bridge_reconnect_delay')
    declare_safety_bridge_reconnect_delay_arg = DeclareLaunchArgument(
        name='safety_bridge_reconnect_delay', default_value='2.0',
        description='Reconnect delay in seconds for SDK bridge')

    safety_bridge_subscription_key = LaunchConfiguration('safety_bridge_subscription_key')
    declare_safety_bridge_subscription_key_arg = DeclareLaunchArgument(
        name='safety_bridge_subscription_key', default_value='0',
        description='SDK fac_subscribe key (0 subscribes to all facility message types)')

    safety_bridge_derive_cff_only = LaunchConfiguration('safety_bridge_derive_cff_only')
    declare_safety_bridge_derive_cff_only_arg = DeclareLaunchArgument(
        name='safety_bridge_derive_cff_only', default_value='True',
        description='If true, publish only alerts derived from CFF/collision indicators')

    safety_bridge_publish_raw_passthrough = LaunchConfiguration('safety_bridge_publish_raw_passthrough')
    declare_safety_bridge_publish_raw_passthrough_arg = DeclareLaunchArgument(
        name='safety_bridge_publish_raw_passthrough', default_value='False',
        description='If true, include raw SDK event payload in published alerts for debugging')

    safety_bridge_dedupe_window_sec = LaunchConfiguration('safety_bridge_dedupe_window_sec')
    declare_safety_bridge_dedupe_window_sec_arg = DeclareLaunchArgument(
        name='safety_bridge_dedupe_window_sec', default_value='0.75',
        description='Minimum seconds between identical alert signatures')

    safety_bridge_critical_ttc_sec = LaunchConfiguration('safety_bridge_critical_ttc_sec')
    declare_safety_bridge_critical_ttc_sec_arg = DeclareLaunchArgument(
        name='safety_bridge_critical_ttc_sec', default_value='2.0',
        description='TTC threshold at or below which alert severity is critical')

    safety_bridge_warning_ttc_sec = LaunchConfiguration('safety_bridge_warning_ttc_sec')
    declare_safety_bridge_warning_ttc_sec_arg = DeclareLaunchArgument(
        name='safety_bridge_warning_ttc_sec', default_value='4.0',
        description='TTC threshold at or below which alert severity is warning')

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

    psm_marker_topic = LaunchConfiguration('psm_marker_topic')
    declare_psm_marker_topic_arg = DeclareLaunchArgument(
        name='psm_marker_topic', default_value='/v2x/psm_markers',
        description='Output marker array topic for PSM-only visualization markers')

    tim_marker_topic = LaunchConfiguration('tim_marker_topic')
    declare_tim_marker_topic_arg = DeclareLaunchArgument(
        name='tim_marker_topic', default_value='/v2x/tim_markers',
        description='Output marker array topic for TIM-only visualization markers')

    visualization_frame_id = LaunchConfiguration('visualization_frame_id')
    declare_visualization_frame_id_arg = DeclareLaunchArgument(
        name='visualization_frame_id', default_value='world',
        description='TF frame used by MAP/SPAT/BSM/PSM/TIM markers')

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
                'frame_id': visualization_frame_id,
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
                'psm_marker_topic': psm_marker_topic,
                'tim_marker_topic': tim_marker_topic,
                'frame_id': visualization_frame_id,
                'enable_deep_scan': True,
                'prefer_obu_bsm_anchor': False,
                'lock_global_anchor': True,
                'allow_bsm_anchor_fallback': True,
            },
            global_params_override_file
        ]
    )

    safety_alert_bridge = Node(
        package='v2x_ros_driver',
        executable='v2x_safety_alert_bridge.py',
        name='v2x_safety_alert_bridge',
        condition=IfCondition(enable_safety_alert_bridge),
        arguments=['--ros-args', '--log-level', log_level],
        parameters=[
            {
                'obu_host': safety_bridge_obu_host,
                'alert_topic': safety_alert_topic,
                'mapped_alert_topic': safety_alert_mapped_topic,
                'debug_raw_topic': safety_alert_debug_raw_topic,
                'abbrev_marker_topic': safety_alert_abbrev_marker_topic,
                'abbrev_marker_frame_id': visualization_frame_id,
                'abbrev_marker_z': safety_alert_abbrev_marker_z,
                'reconnect_delay_sec': safety_bridge_reconnect_delay,
                'subscription_key': safety_bridge_subscription_key,
                'derive_cff_only': safety_bridge_derive_cff_only,
                'publish_raw_passthrough': safety_bridge_publish_raw_passthrough,
                'dedupe_window_sec': safety_bridge_dedupe_window_sec,
                'critical_ttc_sec': safety_bridge_critical_ttc_sec,
                'warning_ttc_sec': safety_bridge_warning_ttc_sec,
            },
            global_params_override_file
        ]
    )

    safety_alert_bridge_native = Node(
        package='v2x_ros_driver',
        executable='v2x_safety_alert_bridge_native_exec',
        name='v2x_safety_alert_bridge_native',
        condition=IfCondition(enable_native_safety_alert_bridge),
        arguments=['--ros-args', '--log-level', log_level],
        parameters=[
            {
                'obu_host': safety_bridge_obu_host,
                'obu_port': safety_bridge_obu_port,
                'local_port': safety_bridge_local_port,
                'alert_topic': safety_alert_topic,
                'mapped_alert_topic': safety_alert_mapped_topic,
                'debug_raw_topic': safety_alert_debug_raw_topic,
                'abbrev_marker_topic': safety_alert_abbrev_marker_topic,
                'abbrev_overlay_topic': safety_alert_abbrev_overlay_topic,
                'enable_abbrev_overlay': safety_alert_enable_abbrev_overlay,
                'abbrev_marker_frame_id': visualization_frame_id,
                'abbrev_marker_z': safety_alert_abbrev_marker_z,
                'reconnect_delay_sec': safety_bridge_reconnect_delay,
                'derive_cff_only': safety_bridge_derive_cff_only,
                'publish_raw_passthrough': safety_bridge_publish_raw_passthrough,
                'dedupe_window_sec': safety_bridge_dedupe_window_sec,
                'critical_ttc_sec': safety_bridge_critical_ttc_sec,
                'warning_ttc_sec': safety_bridge_warning_ttc_sec,
                'notif_filter_csv': safety_bridge_notif_filter_csv,
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
        declare_enable_safety_alert_bridge_arg,
        declare_enable_native_safety_alert_bridge_arg,
        declare_inbound_binary_topic_arg,
        declare_safety_alert_topic_arg,
        declare_safety_alert_mapped_topic_arg,
        declare_safety_alert_debug_raw_topic_arg,
        declare_safety_alert_abbrev_marker_topic_arg,
        declare_safety_alert_abbrev_overlay_topic_arg,
        declare_safety_alert_enable_abbrev_overlay_arg,
        declare_safety_alert_abbrev_marker_z_arg,
        declare_safety_bridge_obu_host_arg,
        declare_safety_bridge_obu_port_arg,
        declare_safety_bridge_local_port_arg,
        declare_safety_bridge_notif_filter_csv_arg,
        declare_safety_bridge_reconnect_delay_arg,
        declare_safety_bridge_subscription_key_arg,
        declare_safety_bridge_derive_cff_only_arg,
        declare_safety_bridge_publish_raw_passthrough_arg,
        declare_safety_bridge_dedupe_window_sec_arg,
        declare_safety_bridge_critical_ttc_sec_arg,
        declare_safety_bridge_warning_ttc_sec_arg,
        declare_map_topic_arg,
        declare_spat_topic_arg,
        declare_bsm_topic_arg,
        declare_marker_topic_arg,
        declare_inbound_marker_topic_arg,
        declare_bsm_marker_topic_arg,
        declare_psm_marker_topic_arg,
        declare_tim_marker_topic_arg,
        declare_visualization_frame_id_arg,
        container,
        activate_node_group_action,
        map_spat_visualizer,
        inbound_decoder_visualizer,
        safety_alert_bridge,
        safety_alert_bridge_native
    ])
