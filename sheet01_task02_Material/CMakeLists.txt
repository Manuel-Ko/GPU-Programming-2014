project(sheet01_task02_Material)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST material.cpp)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMakeFindFunctions ${CMAKE_MODULE_PATH})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${GLUT_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})

add_executable(Material ${SRC_LIST})

target_link_libraries(
                        Material
                        ${GLUT_LIBRARIES}
                        ${OPENGL_LIBRARIES}
)
