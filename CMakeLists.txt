# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
project (comme_engine)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
message(${CMAKE_MODULE_PATH})

include(cmake/conan_paths.cmake)
# Include sub-projects.

add_subdirectory ("comme_engine")
add_subdirectory ("thirdparty")

# Warnings
if(MSVC)
  target_compile_options(comme_engine PRIVATE /W4)
else()
  target_compile_options(comme_engine PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()