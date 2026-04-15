cmake_minimum_required(VERSION 3.20)
project(lld_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(lld_cpp
  src/main.cpp
  src/Hello.cpp
)


target_include_directories(lld_cpp PRIVATE include)

