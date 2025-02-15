cmake_minimum_required(VERSION 3.15)

project(
    wsu-hackathon-2025
    VERSION 1.0
    DESCRIPTION "Our entry for WSU's 2025 hackathon"
    LANGUAGES C
)

add_subdirectory(extern)
add_subdirectory(src)

add_executable(hackathon
    src/main.c
)
