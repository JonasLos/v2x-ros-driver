# Copyright (C) 2022-2026 LEIDOS.
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

import os

from ament_index_python import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration


def _default_v2x_override_file():
    package_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    c2p_override = os.path.join(package_root, 'GlobalParamsOverride.c2p.yaml')
    if os.path.exists(c2p_override):
        return c2p_override

    return os.path.join(
        get_package_share_directory('v2x_ros_driver'),
        'config',
        'GlobalParamsOverride.yaml',
    )


def generate_launch_description():
    v2x_share = get_package_share_directory('v2x_ros_driver')
    base_launch = os.path.join(v2x_share, 'launch', 'v2x_ros_driver.launch.py')
    v2x_override_file = _default_v2x_override_file()

    return LaunchDescription([
        DeclareLaunchArgument(
            'enable_v2x_driver_lifecycle',
            default_value='true',
            description='Enable manual lifecycle configure/activate commands for v2x driver',
        ),
        DeclareLaunchArgument(
            'enable_map_spat_visualizer',
            default_value='false',
            description='Enable pre-decoded MAP/SPAT visualizer (requires external decoded /message/incoming_map and /message/incoming_spat publishers)',
        ),
        DeclareLaunchArgument(
            'enable_inbound_binary_visualizer',
            default_value='true',
            description='Enable decoder-backed visualizer from /comms/inbound_binary_msg',
        ),
        DeclareLaunchArgument(
            'v2x_inbound_binary_topic',
            default_value='/comms/inbound_binary_msg',
            description='Raw inbound V2X topic used by inbound visualizer and RTOR processing',
        ),
        DeclareLaunchArgument(
            'v2x_inbound_marker_topic',
            default_value='/v2x/map_spat_markers',
            description='Output marker topic for inbound decoder-backed visualizer',
        ),
        DeclareLaunchArgument(
            'v2x_visualization_frame',
            default_value='world',
            description='TF frame used by V2X MAP/SPAT/BSM/PSM/TIM marker visualization',
        ),
        DeclareLaunchArgument(
            'v2x_configuration_delay',
            default_value='8.0',
            description='Delay in seconds before running v2x lifecycle configure',
        ),
        DeclareLaunchArgument(
            'enable_native_safety_alert_bridge',
            default_value='true',
            description='Enable native C++ Commsignia app-notif safety bridge (requires SDK-enabled build)',
        ),
        DeclareLaunchArgument(
            'v2x_safety_alert_abbrev_overlay_topic',
            default_value='/v2x/safety_alert_overlay_text',
            description='RViz 2D overlay topic for active safety alert abbreviation text',
        ),
        DeclareLaunchArgument(
            'v2x_safety_alert_enable_abbrev_overlay',
            default_value='true',
            description='Enable RViz 2D overlay text publishing for safety alert abbreviations',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_obu_host',
            default_value='192.168.0.54',
            description='OBU host IP for SDK safety bridge RPC',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_obu_port',
            default_value='43985',
            description='OBU app-notif UDP port for native C++ bridge',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_local_port',
            default_value='0',
            description='Local UDP port for native C++ bridge client',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_notif_filter_csv',
            default_value='',
            description='Optional comma-separated native notif filters (e.g., FCW,IMA,WWE,WWR)',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_reconnect_delay',
            default_value='2.0',
            description='Reconnect delay in seconds for SDK safety bridge',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_subscription_key',
            default_value='0',
            description='SDK fac_subscribe key (0 subscribes to all facility message types)',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_derive_cff_only',
            default_value='false',
            description='If true, publish only alerts derived from CFF/collision indicators',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_publish_raw_passthrough',
            default_value='true',
            description='If true, include raw SDK event payload in published alerts for debugging',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_dedupe_window_sec',
            default_value='0.75',
            description='Minimum seconds between identical alert signatures',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_critical_ttc_sec',
            default_value='2.0',
            description='TTC threshold at or below which alert severity is critical',
        ),
        DeclareLaunchArgument(
            'v2x_safety_bridge_warning_ttc_sec',
            default_value='4.0',
            description='TTC threshold at or below which alert severity is warning',
        ),
        DeclareLaunchArgument(
            'enable_dbw_lights_sti_bridge',
            default_value='true',
            description='Enable DBW vehicle state to Commsignia STI bridge',
        ),
        DeclareLaunchArgument(
            'enable_rtor_node',
            default_value='true',
            description='Enable the V2X RTOR (right-turn-on-red) hazard node',
        ),
        DeclareLaunchArgument(
            'v2x_rtor_alerts_topic',
            default_value='/v2x/rtor_alerts',
            description='Topic for RTOR JSON hazard alerts',
        ),
        DeclareLaunchArgument(
            'v2x_rtor_markers_topic',
            default_value='/v2x/rtor_markers',
            description='Topic for RTOR hazard RViz markers',
        ),
        DeclareLaunchArgument(
            'v2x_rtor_overlay_topic',
            default_value='/v2x/rtor_overlay_text',
            description='Topic for RTOR screen-space overlay text',
        ),
        DeclareLaunchArgument(
            'v2x_rtor_obu_reference_bsm_id',
            default_value='e153df70',
            description='Hex TemporaryID of the OBU loopback BSM (identifies the ego vehicle)',
        ),
        DeclareLaunchArgument(
            'v2x_rtor_require_right_turn_signal',
            default_value='false',
            description='If true, gate RTOR evaluation on the ego right-turn signal extracted from BSM partII',
        ),
        DeclareLaunchArgument(
            'v2x_rtor_allow_alerts_without_map_right_turn',
            default_value='true',
            description='If true, allow RTOR alerts even when MAP lane maneuver data says right turn is not allowed',
        ),
        DeclareLaunchArgument(
            'v2x_dbw_sti_obu_host',
            default_value='192.168.0.54',
            description='OBU host IP for the DBW STI bridge session',
        ),
        DeclareLaunchArgument(
            'v2x_dbw_sti_obu_port',
            default_value='7942',
            description='OBU STI API port for the DBW bridge',
        ),
        DeclareLaunchArgument(
            'v2x_dbw_sti_reconnect_delay',
            default_value='2.0',
            description='Reconnect delay in seconds for the DBW STI bridge',
        ),
        DeclareLaunchArgument(
            'v2x_global_params_override_file',
            default_value=v2x_override_file,
            description='Path to v2x global override file (set listening_port to match OBU mode)',
        ),
        DeclareLaunchArgument(
            'enable_sdsm',
            default_value='false',
            description='Enable SDSM publisher (FAC-layer, signed broadcast to other OBUs). Set true to activate.',
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(base_launch),
            launch_arguments={
                'enable_v2x_driver_lifecycle': LaunchConfiguration('enable_v2x_driver_lifecycle'),
                'configuration_delay': LaunchConfiguration('v2x_configuration_delay'),
                'enable_map_spat_visualizer': LaunchConfiguration('enable_map_spat_visualizer'),
                'enable_inbound_binary_visualizer': LaunchConfiguration('enable_inbound_binary_visualizer'),
                'enable_native_safety_alert_bridge': LaunchConfiguration('enable_native_safety_alert_bridge'),
                'enable_dbw_lights_sti_bridge': LaunchConfiguration('enable_dbw_lights_sti_bridge'),
                'enable_rtor_node': LaunchConfiguration('enable_rtor_node'),
                'dbw_sti_obu_host': LaunchConfiguration('v2x_dbw_sti_obu_host'),
                'dbw_sti_obu_port': LaunchConfiguration('v2x_dbw_sti_obu_port'),
                'dbw_sti_reconnect_delay': LaunchConfiguration('v2x_dbw_sti_reconnect_delay'),
                'inbound_binary_topic': LaunchConfiguration('v2x_inbound_binary_topic'),
                'safety_alert_abbrev_overlay_topic': LaunchConfiguration('v2x_safety_alert_abbrev_overlay_topic'),
                'safety_alert_enable_abbrev_overlay': LaunchConfiguration('v2x_safety_alert_enable_abbrev_overlay'),
                'safety_bridge_obu_host': LaunchConfiguration('v2x_safety_bridge_obu_host'),
                'safety_bridge_obu_port': LaunchConfiguration('v2x_safety_bridge_obu_port'),
                'safety_bridge_local_port': LaunchConfiguration('v2x_safety_bridge_local_port'),
                'safety_bridge_notif_filter_csv': LaunchConfiguration('v2x_safety_bridge_notif_filter_csv'),
                'safety_bridge_reconnect_delay': LaunchConfiguration('v2x_safety_bridge_reconnect_delay'),
                'safety_bridge_subscription_key': LaunchConfiguration('v2x_safety_bridge_subscription_key'),
                'safety_bridge_derive_cff_only': LaunchConfiguration('v2x_safety_bridge_derive_cff_only'),
                'safety_bridge_publish_raw_passthrough': LaunchConfiguration('v2x_safety_bridge_publish_raw_passthrough'),
                'safety_bridge_dedupe_window_sec': LaunchConfiguration('v2x_safety_bridge_dedupe_window_sec'),
                'safety_bridge_critical_ttc_sec': LaunchConfiguration('v2x_safety_bridge_critical_ttc_sec'),
                'safety_bridge_warning_ttc_sec': LaunchConfiguration('v2x_safety_bridge_warning_ttc_sec'),
                'rtor_alerts_topic': LaunchConfiguration('v2x_rtor_alerts_topic'),
                'rtor_markers_topic': LaunchConfiguration('v2x_rtor_markers_topic'),
                'rtor_overlay_topic': LaunchConfiguration('v2x_rtor_overlay_topic'),
                'rtor_obu_reference_bsm_id': LaunchConfiguration('v2x_rtor_obu_reference_bsm_id'),
                'rtor_require_right_turn_signal': LaunchConfiguration('v2x_rtor_require_right_turn_signal'),
                'rtor_allow_alerts_without_map_right_turn': LaunchConfiguration('v2x_rtor_allow_alerts_without_map_right_turn'),
                'inbound_marker_topic': LaunchConfiguration('v2x_inbound_marker_topic'),
                'visualization_frame_id': LaunchConfiguration('v2x_visualization_frame'),
                'global_params_override_file': LaunchConfiguration('v2x_global_params_override_file'),
                'enable_sdsm_publisher': LaunchConfiguration('enable_sdsm'),
            }.items(),
        ),
    ])