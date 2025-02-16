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
	int color = 39;

	switch (symbol)
	{
	case '1':
	{
		color = 39;
	}break;
	case '2':
	{
		color = 30;
	}break;
	case '3':
	{
		color = 31;
	}break;
	case '4':
	{
		color = 32;
	}break;
	case '5':
	{
		color = 33;
	}break;
	case '6':
	{
		color = 34;
	}break;
	case '7':
	{
		color = 35;
	}break;
	case '8':
	{
		color = 36;
	}break;
	case '9':
	{
		color = 37;
	}break;
	}

	return color;
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
