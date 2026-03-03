#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "carma_msgs::carma_msgs__rosidl_generator_c" for configuration "Release"
set_property(TARGET carma_msgs::carma_msgs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(carma_msgs::carma_msgs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcarma_msgs__rosidl_generator_c.so"
  IMPORTED_SONAME_RELEASE "libcarma_msgs__rosidl_generator_c.so"
  )

list(APPEND _cmake_import_check_targets carma_msgs::carma_msgs__rosidl_generator_c )
list(APPEND _cmake_import_check_files_for_carma_msgs::carma_msgs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libcarma_msgs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
