#ifndef HACK_COLORS_H
#define HACK_COLORS_H
#define _CRT_SECURE_NO_WARNINGS
#include "structs.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_pixel(Point visual);
int get_color_from_keypress(char symbol);
int get_symbol_from_keypress(char choice);
void convert_color_to_string(int color, char* string);
int convert_string_to_color(char *string);

#endif
