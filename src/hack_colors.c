#include <string.h>
#include <stdio.h>

#include "hack_colors.h"
#include "structs.h"

void print_pixel(Point visual)
{
	printf("\033[%d;%dm", visual.background + 10, visual.foreground);
	printf("%c", visual.character);
	printf("\033[%d;%dm", DEFAULT + 10, DEFAULT);
}
int get_color_from_keypress(char symbol)
{
	int color = DEFAULT;

	switch (symbol)
	{
	case '1':
	{
		color = BLACK;
	}break;
	case '2':
	{
		color = RED;
	}break;
	case '3':
	{
		color = GREEN;
	}break;
	case '4':
	{
		color = YELLOW;
	}break;
	case '5':
	{
		color = BLUE;
	}break;
	case '6':
	{
		color = PURPLE;
	}break;
	case '7':
	{
		color = CYAN;
	}break;
	case '8':
	{
		color = WHITE;
	}break;
	}

	return color;
}
int get_symbol_from_keypress(char choice)
{
	int symbol = 0;

	switch (choice)
	{
	case '1':
	{
		symbol = 176;
	}break;
	case '2':
	{
		symbol = 177;
	}break;
	case '3':
	{
		symbol = 178;
	}break;
	case '4':
	{
		symbol = 219;
	}break;
	case '5':
	{
		symbol = 220;
	}break;
	case '6':
	{
		symbol = 221;
	}break;
	case '7':
	{
		symbol = 222;
	}break;
	case '8':
	{
		symbol = 223;
	}break;
	case '9':
	{
		symbol = 254;
	}break;
	}

	return symbol;
}
void convert_color_to_string(int color, char* string)
{
	switch (color)
	{
	case 39:
	case 49:
	{
		strcpy(string, "DEFAULT");
	}break;
	case 30:
	case 40:
	{
		strcpy(string, "BLACK");
	}break;
	case 31:
	case 41:
	{
		strcpy(string, "RED");
	}break;
	case 32:
	case 42:
	{
		strcpy(string, "GREEN");
	}break;
	case 33:
	case 43:
	{
		strcpy(string, "YELLOW");
	}break;
	case 34:
	case 44:
	{
		strcpy(string, "BLUE");
	}break;
	case 35:
	case 45:
	{
		strcpy(string, "PURPLE");
	}break;
	case 36:
	case 46:
	{
		strcpy(string, "CYAN");
	}break;
	case 37:
	case 47:
	{
		strcpy(string, "WHITE");
	}break;
	}
}
int convert_string_to_color(char *string)
{
	int color = 39;

	if (strcmp(string, "DEFAULT") == 0)
	{
		color = DEFAULT;
	}
	else if (strcmp(string, "BLACK") == 0)
	{
		color = BLACK;
	}
	else if (strcmp(string, "RED") == 0)
	{
		color = RED;
	}
	else if (strcmp(string, "GREEN") == 0)
	{
		color = GREEN;
	}
	else if (strcmp(string, "YELLOW") == 0)
	{
		color = YELLOW;
	}
	else if (strcmp(string, "BLUE") == 0)
	{
		color = BLUE;
	}
	else if (strcmp(string, "PURPLE") == 0)
	{
		color = PURPLE;
	}
	else if (strcmp(string, "CYAN") == 0)
	{
		color = CYAN;
	}
	else if (strcmp(string, "WHITE") == 0)
	{
		color = WHITE;
	}

	return color;
}
