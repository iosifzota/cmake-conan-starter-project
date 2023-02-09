cmake_minimum_required(VERSION 3.10)
project(tiny_fsm)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Poco and argh setup
include(${CMAKE_CURRENT_LIST_DIR}/conan/conanbuildinfo.cmake)
conan_basic_setup()

# Needed?
include_directories("${CMAKE_CURRENT_LIST_DIR}/include")

add_subdirectory(src)
