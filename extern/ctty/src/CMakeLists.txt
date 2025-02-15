cmake_minimum_required(VERSION 3.15)

add_library(ctty
    colors.c
    cursor.c
    keypress.c
    keyselect.c
    menu.c
    screen.c
    view-file.c
    ${CTTY_HEADER_LIST}
)

target_include_directories(ctty PUBLIC "${PROJECT_SOURCE_DIR}/include")


