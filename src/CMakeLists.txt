cmake_minimum_required(VERSION 3.15)

add_library(position position.c position.h)
add_library(test-position position-test.h position-test.c)

target_link_libraries(position PRIVATE ctty)
target_link_libraries(test-position position)


