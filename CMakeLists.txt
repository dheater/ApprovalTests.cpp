cmake_minimum_required(VERSION 3.8)
project(CatchPlayground)

set(CMAKE_CXX_STANDARD 17)
include_directories(lib)

add_subdirectory(ApprovalTests)
add_subdirectory(ApprovalTests_Catch2_Tests)

