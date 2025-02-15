cmake_minimum_required(VERSION 3.15)
project(
    ctty
    VERSION 6.0
    DESCRIPTION "A simple C terminal graphics library."
    LANGUAGES C
)

set(CTTY_HEADER_LIST
    "${ctty_SOURCE_DIR}/include/ctty/colors.h"
    "${ctty_SOURCE_DIR}/include/ctty/cursor.h"
    "${ctty_SOURCE_DIR}/include/ctty/erase.h"
    "${ctty_SOURCE_DIR}/include/ctty/keypress-codes.h"
    "${ctty_SOURCE_DIR}/include/ctty/keypress.h"
    "${ctty_SOURCE_DIR}/include/ctty/keyselect.h"
    "${ctty_SOURCE_DIR}/include/ctty/menu.h"
    "${ctty_SOURCE_DIR}/include/ctty/screen.h"
    "${ctty_SOURCE_DIR}/include/ctty/text-modes.h"
    "${ctty_SOURCE_DIR}/include/ctty/view-file.h"
)

add_subdirectory(src)
