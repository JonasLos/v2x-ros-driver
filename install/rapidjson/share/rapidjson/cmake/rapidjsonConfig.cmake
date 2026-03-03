# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rapidjson_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rapidjson_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rapidjson_FOUND FALSE)
  elseif(NOT rapidjson_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rapidjson_FOUND FALSE)
  endif()
  return()
endif()
set(_rapidjson_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rapidjson_FIND_QUIETLY)
  message(STATUS "Found rapidjson: 1.1.0 (${rapidjson_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rapidjson' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT rapidjson_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rapidjson_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${rapidjson_DIR}/${_extra}")
endforeach()
