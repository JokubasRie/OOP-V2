cmake_minimum_required(VERSION 3.29)
project(1_5)

set(CMAKE_CXX_STANDARD 14)
include_directories(.)

add_executable(1_5
        functions.cpp
        main.cpp
        Mylib.h
        student.h)

add_subdirectory(googletest)

add_executable(UnitTests tests.cpp functions.cpp)


target_link_libraries(UnitTests GTest::gtest GTest::gtest_main)
