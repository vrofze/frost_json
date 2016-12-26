cmake_minimum_required (VERSION 2.6)
project (frostjson_test C CXX)

if (CMAKE_C_COMPILER_ID MATCHES "GNU|clang")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c++11 -pedantic -Wall")
endif()

add_library(frostjson frostjson.cpp)
add_executable(frostjson_test test.cpp)
target_link_libraries(frostjson_test frostjson)
