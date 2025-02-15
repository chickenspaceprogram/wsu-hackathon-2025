#include "hack_colors.h"
#include "structs.h"

void print_pixel(Point visual)
{
	printf("\033[%d;%dm", visual.background, visual.foreground);
	printf("%c", visual.character);
	printf("\033[%d;%dm", DEFAULT, DEFAULT);
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
char* convert_color_to_string(int color)
{
	char string[7] = "";

	switch (color)
	{
	case 39:
	{
		strcpy(string, "DEFAULT");
	}break;
	case 30:
	{
		strcpy(string, "BLACK");
	}break;
	case 31:
	{
		strcpy(string, "RED");
	}break;
	case 32:
	{
		strcpy(string, "GREEN");
	}break;
	case 33:
	{
		strcpy(string, "YELLOW");
	}break;
	case 34:
	{
		strcpy(string, "BLUE");
	}break;
	case 35:
	{
		strcpy(string, "PURPLE");
	}break;
	case 36:
	{
		strcpy(string, "CYAN");
	}break;
	case 37:
	{
		strcpy(string, "WHITE");
	}break;
	}

	return string;
}
int convert_string_to_color(char string)
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