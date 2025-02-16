#include <ctty/keypress.h>
#include "get-user-input.h"

#ifdef _WIN32
#   define ESC_CHAR '\xE0'
#   define ENTER_CHAR '\r'
#   define UP_CHAR 'K' // H
#   define DOWN_CHAR 'M' // P
#   define LEFT_CHAR 'H' // K
#   define RIGHT_CHAR 'P' // M
#else
#   define ESC_CHAR '\x1B'
#   define ENTER_CHAR '\n'
#   define UP_CHAR 'A'
#   define DOWN_CHAR 'B'
#   define LEFT_CHAR 'D'
#   define RIGHT_CHAR 'C'
#endif

Input get_user_input(char *chr) {
    char current_char = GETCH();
    if (current_char == ESC_CHAR) {
        *chr = '\0';
#       ifndef _WIN32
            GETCH();
#       endif
        switch(GETCH()) {
            case UP_CHAR: return UP_ARROW;
            case DOWN_CHAR: return DOWN_ARROW;
            case LEFT_CHAR: return LEFT_ARROW;
            case RIGHT_CHAR: return RIGHT_ARROW;
        }
    }
    if (current_char == ENTER_CHAR) {
        *chr = '\0';
        return ENTER;
    }
    *chr = current_char;
    return CHARACTER;
}
