project(sheet01_task01_Transformations)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST transformations.cpp)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMakeFindFunctions ${CMAKE_MODULE_PATH})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${GLUT_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})

add_executable(trans ${SRC_LIST})

target_link_libraries(
                        trans
                        ${GLUT_LIBRARIES}
                        ${OPENGL_LIBRARIES}
)
