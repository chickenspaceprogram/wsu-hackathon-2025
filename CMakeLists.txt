cmake_minimum_required(VERSION 3.15)

project(
    wsu-hackathon-2025
    VERSION 1.0
    DESCRIPTION "Our entry for WSU's 2025 hackathon"
    LANGUAGES C
)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(extern)
add_subdirectory(src)

add_executable(hackathon
    src/main.c
 "src/hack_colors.h" "src/hack_colors.c" "src/structs.h" "src/cetria_test.c" "src/cetria_test.h" "src/save_and_load.h" "src/save_and_load.c"
"src/fgets-resize.c" "src/fgets-resize.h" "src/hack_menus.c" "src/hack_menus.h" "src/draw.h" "src/draw.c")

target_link_libraries(hackathon PUBLIC ctty position test-position get-user-input)
target_link_libraries(hackathon PUBLIC ctty position test-position)
configure_file(out/build/x64-Debug/art.csv art.csv)
