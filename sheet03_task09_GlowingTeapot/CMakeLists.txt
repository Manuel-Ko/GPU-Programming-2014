project(sheet03_task09_GlowingTeapot)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST GlowingTeapot.cpp)

set(SHADER_FILES blur.vert)
set(SHADER_FILES blur.frag ${SHADER_FILES})
set(SHADER_FILES blur_hori.frag ${SHADER_FILES})
set(SHADER_FILES blur_vert.frag ${SHADER_FILES})
file(COPY ${SHADER_FILES} DESTINATION ${CMAKE_BINARY_DIR})

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMakeFindFunctions ${CMAKE_MODULE_PATH})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)

include_directories(${GLUT_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLEW_INCLUDE_PATH})

add_executable(GlowingTeapot ${SRC_LIST} ${SHADER_FILES})

target_link_libraries(
                        GlowingTeapot
                        ${GLUT_LIBRARIES}
                        ${OPENGL_LIBRARIES}
                        ${GLEW_LIBRARY}
)
