# CMakeList.txt : CMake project for comme_engine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (comme_engine "main.cpp" "comme_engine.h")
find_package(glfw3)
find_package(imgui)

include_directories(${CONAN_GLFW_ROOT})
include_directories(${CONAN_GLAD_ROOT})
include_directories(${CONAN_IMGUI_ROOT})
target_link_libraries(comme_engine glfw::glfw glad imgui::imgui imgui_backend)

# TODO: Add tests and install targets if needed.
