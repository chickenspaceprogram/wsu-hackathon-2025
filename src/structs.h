#ifndef STRUCTS_H
#define STRUCTS_H
#define _CRT_SECURE_NO_WARNINGS

typedef enum
{
	DEFAULT = 39,
	BLACK = 30,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	PURPLE,
	CYAN,
	WHITE,
} Color;

typedef struct point {
    int character;
    Color foreground;
    Color background;
} Point;

typedef enum input {
    CHARACTER,
    UP_ARROW,
    DOWN_ARROW,
    LEFT_ARROW,
    RIGHT_ARROW,
    ENTER
} Input;

#endif
