#ifndef HACK_COLORS_H
#define HACK_COLORS_H
#define _CRT_SECURE_NO_WARNINGS
#include "structs.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_pixel(Point visual);
int get_color_from_keypress(char symbol);
void convert_color_to_string(int color, char* string);
int convert_string_to_color(char *string);
void print_symbol_menu(void);
void print_color_menu(void);

#endif
