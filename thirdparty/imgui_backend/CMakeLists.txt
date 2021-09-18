
#Imgui_Backend CMakeList
project(imgui_backend)

file(GLOB imgui_backend_SRC "*.h" "*.cpp")

add_library(imgui_backend STATIC ${imgui_backend_SRC})
target_include_directories(imgui_backend PUBLIC "${CONAN_IMGUI_ROOT}/include/")
target_include_directories(imgui_backend PUBLIC "${CONAN_GLFW_ROOT}/include/")
target_include_directories(imgui_backend PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")


message("Imgui Backened Included")