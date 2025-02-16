#pragma once

typedef enum input {
    CHARACTER,
    UP_ARROW,
    DOWN_ARROW,
    LEFT_ARROW,
    RIGHT_ARROW,
    ENTER
} Input;

Input get_user_input(char *chr);
