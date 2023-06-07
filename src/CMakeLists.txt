set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

file(GLOB HEADER_LIST CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/include/*/*.hpp")

file(GLOB src "${CMAKE_SOURCE_DIR}/src/*/*.cpp")


add_library(gamelib STATIC ${src} ${HEADER_LIST})


target_include_directories(gamelib PUBLIC ${INCLUDE_DIR}/util)
