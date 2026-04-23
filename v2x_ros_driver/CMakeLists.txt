cmake_minimum_required(VERSION 3.5)
project(v2x_ros_driver)

# find dependencies
find_package(carma_cmake_common REQUIRED)
carma_check_ros_version(2)
carma_package()

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()
find_package(rviz_2d_overlay_msgs QUIET)

# Name build targets
set(node_exec v2x_ros_driver_node_exec)
set(node_lib v2x_ros_driver_node)
set(visualizer_exec v2x_map_spat_visualizer_exec)
set(native_safety_bridge_exec v2x_safety_alert_bridge_native_exec)

option(ENABLE_COMMSIGNIA_APP_NOTIF_BRIDGE "Build native Commsignia app-notification safety bridge" OFF)
set(COMMSIGNIA_APP_NOTIF_SDK_DIR "" CACHE PATH "Path to extracted Commsignia app-notif-sdk root directory")

# Includes
include_directories(
  include
)

ament_export_include_directories(include)


# Build
ament_auto_add_library(${node_lib} SHARED
        src/v2x_ros_driver_node.cpp
        src/v2x_radio_client.cpp
)

ament_auto_add_executable(${node_exec}
        src/main.cpp
)

ament_auto_add_executable(${visualizer_exec}
        src/v2x_map_spat_visualizer.cpp
)

if(ENABLE_COMMSIGNIA_APP_NOTIF_BRIDGE)
        if("${COMMSIGNIA_APP_NOTIF_SDK_DIR}" STREQUAL "" AND DEFINED ENV{COMMSIGNIA_APP_NOTIF_SDK_DIR})
                set(COMMSIGNIA_APP_NOTIF_SDK_DIR "$ENV{COMMSIGNIA_APP_NOTIF_SDK_DIR}")
        endif()

        if(EXISTS "${COMMSIGNIA_APP_NOTIF_SDK_DIR}/include/cffclient/Client.h" AND
                 EXISTS "${COMMSIGNIA_APP_NOTIF_SDK_DIR}/include/safclient/tools/NotifFetcher.h")
                ament_auto_add_executable(${native_safety_bridge_exec}
                                                src/v2x_safety_alert_bridge_native.cpp
                                                ${COMMSIGNIA_APP_NOTIF_SDK_DIR}/src/Client.cpp
                                                ${COMMSIGNIA_APP_NOTIF_SDK_DIR}/src/EntityAggregator.cpp
                                                ${COMMSIGNIA_APP_NOTIF_SDK_DIR}/src/Geodesy.cpp
                                                ${COMMSIGNIA_APP_NOTIF_SDK_DIR}/src/UnsolicitedDispatcher.cpp
                )

                target_include_directories(${native_safety_bridge_exec} PRIVATE
                                                ${COMMSIGNIA_APP_NOTIF_SDK_DIR}/include
                )
                target_compile_definitions(${native_safety_bridge_exec} PRIVATE
                        CFFCLIENT_USE_SOCKET=1
                )

                if(rviz_2d_overlay_msgs_FOUND)
                        ament_target_dependencies(${native_safety_bridge_exec}
                                rviz_2d_overlay_msgs
                        )
                endif()
        else()
                message(WARNING
                        "ENABLE_COMMSIGNIA_APP_NOTIF_BRIDGE=ON but COMMSIGNIA_APP_NOTIF_SDK_DIR is not set to a valid app-notif-sdk root; skipping ${native_safety_bridge_exec} build")
        endif()
endif()

# Register component
rclcpp_components_register_nodes(${node_lib} "V2XDriverApplication::Node")

# All locally created targets will need to be manually linked
# ament auto will handle linking of external dependencies
target_link_libraries(${node_exec}
        ${node_lib}
)


# Testing
if(BUILD_TESTING)

  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies() # This populates the ${${PROJECT_NAME}_FOUND_TEST_DEPENDS} variable

  ament_add_gtest(test_v2x_ros_driver test/node_test.cpp)

  ament_target_dependencies(test_v2x_ros_driver ${${PROJECT_NAME}_FOUND_TEST_DEPENDS})

  target_link_libraries(test_v2x_ros_driver ${node_lib})

endif()

# Install
install(PROGRAMS
        scripts/v2x_inbound_marker_visualizer.py
        scripts/v2x_safety_alert_bridge.py
        scripts/dbw_lights_sti_bridge.py
        DESTINATION lib/${PROJECT_NAME}
)

ament_auto_package(
        INSTALL_TO_SHARE config etc launch
)
