project(glad)

set(GLAD_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(GLAD_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

include_directories(${GLAD_INCLUDE_DIR})
message("TEST glad")

add_library(glad STATIC "${GLAD_SOURCE_DIR}/glad.c")
target_include_directories(glad PUBLIC "${GLAD_INCLUDE_DIR}")