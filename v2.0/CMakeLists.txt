cmake_minimum_required(VERSION 3.29)
project(1_5)

set(CMAKE_CXX_STANDARD 14)
include_directories(.)

# Pagrindinio vykdomojo failo apibrėžimas
add_executable(1_5
        functions.cpp
        main.cpp
        Mylib.h
        student.h)

# Pridedame Google Test
add_subdirectory(googletest)

# Sukuriame Unit Test vykdomąjį failą
add_executable(UnitTests tests.cpp functions.cpp)


# Susiejame UnitTests su Google Test bibliotekomis
target_link_libraries(UnitTests GTest::gtest GTest::gtest_main)
