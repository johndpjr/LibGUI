cmake_minimum_required(VERSION 3.22)
project(LibGUI)

set(CMAKE_CXX_STANDARD 20)

add_executable(LibGUI main.cpp Window.cpp Window.h Widget.cpp Widget.h Frame.cpp Frame.h CommonTypes.h constants.h GUI.h GUI.cpp)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(LibGUI glfw)
find_package(OpenGL REQUIRED)
target_link_libraries(LibGUI OpenGL::GL)