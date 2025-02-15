#ifndef COLORS_H
#define COLORS_H
#define _CRT_SECURE_NO_WARNINGS
#include "structs.h"

void print_pixel(Point visual);
int get_color_from_keypress(char symbol);
void convert_color_to_string(int color, char* string);
int convert_string_to_color(char string);

#endif