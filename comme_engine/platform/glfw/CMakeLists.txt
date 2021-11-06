include_directories("include/")

file(GLOB PLAT_INCL "src/*.h")
file(GLOB PLAT_SRC "src/*.cpp")

add_library(comme_platforms ${PLAT_INCL} ${PLAT_SRC} )
target_include_directories(comme_platforms PUBLIC "include/")

source_group("include" FILES ${PLAT_INCL} )
source_group("src" FILES ${PLAT_SRC})