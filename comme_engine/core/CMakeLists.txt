project(comme-core)

include_directories("include/")

file(GLOB CORE_HEADERS "src/*.h")
file(GLOB CORE_SRC "src/*.cpp")

add_library(comme_core ${CORE_HEADERS} ${CORE_SRC} )
target_include_directories(comme_core PUBLIC "include/")

source_group("include" FILES ${CORE_HEADERS} )
source_group("src" FILES ${CORE_SRC})