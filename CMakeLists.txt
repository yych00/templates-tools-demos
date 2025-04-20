cmake_minimum_required(VERSION 3.15)
project(CMakeVSProjectTemplate VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    src/main.cpp
    src/hello.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

include(CompilerWarnings)
enable_compiler_warnings(${PROJECT_NAME})

enable_testing()
add_executable(test_hello tests/test_hello.cpp src/hello.cpp)
add_test(NAME HelloTest COMMAND test_hello)
