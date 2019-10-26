cmake_minimum_required(VERSION 3.0.0)
project(codewars VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)
enable_testing()

add_executable(kata_are_they_the_same kata_are_they_the_same.cpp)
add_executable(kata_is_this_a_triangle kata_is_this_a_triangle.cpp)
add_executable(kata_equal-sides-of-an-array kata_equal-sides-of-an-array.cpp)
add_executable(kata_is-a-number-prime kata_is-a-number-prime.cpp)
add_executable( kata_sum-of-digits-slash-digital-root kata_sum-of-digits-slash-digital-root.cpp)
add_executable( kata_counting-duplicates kata_counting-duplicates.cpp)
add_executable( kata_vaporcode kata_vaporcode.cpp)
add_executable( kata_rot13 kata_rot13.cpp)
add_executable( kata_pyramid-array kata_pyramid-array.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
