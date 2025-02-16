cmake_minimum_required(VERSION 3.15)

add_library(position position.c position.h)
add_library(test-position position-test.h position-test.c)

add_library(get-user-input get-user-input.c get-user-input.h)

target_link_libraries(position PUBLIC ctty)
target_link_libraries(get-user-input PRIVATE ctty)
target_link_libraries(test-position position)


