#include "colors.h"
#include "structs.h"

print_pixel_in_color(Point symbol, Position index)
{

}
get_color_from_keypress(char symbol)
{

}
char* convert_color_to_string(int color)
{
	char string[7] = "";

	if ()
	{
		strcpy(string, "DEFAULT");
	}
	else if ()
	{
		strcpy(string, "BLACK");
	}
	else if ()
	{
		strcpy(string, "RED");
	}
	else if ()
	{
		strcpy(string, "GREEN");
	}
	else if ()
	{
		strcpy(string, "YELLOW");
	}
	else if ()
	{
		strcpy(string, "BLUE");
	}
	else if ()
	{
		strcpy(string, "PURPLE");
	}
	else if ()
	{
		strcpy(string, "CYAN");
	}
	else if ()
	{
		strcpy(string, "WHITE");
	}

	return string;
}
int convert_string_to_color(char string)
{
	int color = 0;

	if (strcmp(string, "DEFAULT") == 0)
	{
		color = BLACK;
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