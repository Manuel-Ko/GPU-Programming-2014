project(sheet01_task03_Texture)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST Texture.cpp)
set(SRC_LIST bmp.cpp OGLTest.h ${SRC_LIST})

file(COPY rockwall_color.bmp DESTINATION ${CMAKE_BINARY_DIR})

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMakeFindFunctions ${CMAKE_MODULE_PATH})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenCV REQUIRED)

include_directories(${GLUT_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLEW_INCLUDE_PATH})
include_directories(${OPENCV_INCLUDE_DIRS})

add_executable(Texture ${SRC_LIST})

target_link_libraries(
                        Texture
                        ${GLUT_LIBRARIES}
                        ${OPENGL_LIBRARIES}
                        ${GLEW_LIBRARY}
                        ${OpenCV_LIBS}
)
