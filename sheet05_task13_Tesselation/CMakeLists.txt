project(sheet05_task13_Tessellation)
cmake_minimum_required(VERSION 2.8)

set(SRC_LIST elephant.cpp)
set(SRC_LIST Tessellation.cpp ${SRC_LIST})

set(SHADER_FILES Tessellation.vert)
set(SHADER_FILES Tessellation.dom ${SHADER_FILES})
set(SHADER_FILES Tessellation.hull ${SHADER_FILES})
set(SHADER_FILES Tessellation.frag ${SHADER_FILES})
file(COPY ${SHADER_FILES} DESTINATION ${CMAKE_BINARY_DIR})

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMakeFindFunctions ${CMAKE_MODULE_PATH})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
find_package(GLEW REQUIRED)

include_directories(${GLUT_INCLUDE_PATH})
include_directories(${OPENGL_INCLUDE_DIR})
include_directories(${GLEW_INCLUDE_PATH})

add_executable(Tesselation2 ${SRC_LIST} ${SHADER_FILES})

target_link_libraries(
                        Tesselation2
                        ${GLUT_LIBRARIES}
                        ${OPENGL_LIBRARIES}
                        ${GLEW_LIBRARY}
)
