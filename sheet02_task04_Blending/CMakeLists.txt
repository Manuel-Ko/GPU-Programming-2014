project(sheet02_task04_Blending)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST blending.cpp)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMakeFindFunctions ${CMAKE_MODULE_PATH})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${GLUT_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})

add_executable(Blending ${SRC_LIST})

target_link_libraries(
                        Blending
                        ${GLUT_LIBRARIES}
                        ${OPENGL_LIBRARIES}
)
