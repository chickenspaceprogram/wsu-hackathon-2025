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
void print_symbol_menu(void)
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 187);
	printf("%c%d%c%c%c%d%c%c%c%d%c%c%c%d%c%c%c%d%c%c%c\n", 186, 1, 179, 176, 186, 2, 179, 177, 186, 3, 179, 178, 186, 4, 179, 219, 186, 5, 179, 220, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 185);
	printf("%c%d%c%c%c%d%c%c%c%d%c%c%c%d%c%c%c%c%c%c%c\n", 186, 6, 179, 221, 186, 7, 179, 222, 186, 8, 179, 223, 186, 9, 179, 254, 186, ' ', 179, ' ', 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 188);
}
void print_color_menu(void)
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 201, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 187);
	printf("%c%d%c %c%d%c", 186, 1, 179, 186, 2, 179);
	printf("\033[40;37m"); printf("B"); printf("\033[49;39m");//2 black on white
	printf("%c%d%c", 186, 3, 179);
	printf("\033[49;31m"); printf("%c", 219); printf("\033[49;39m");//3 red
	printf("%c%d%c", 186, 4, 179);
	printf("\033[49;32m"); printf("%c", 219); printf("\033[49;39m");//4 green
	printf("%c%d%c", 186, 5, 179);
	printf("\033[49;33m"); printf("%c", 219); printf("\033[49;39m");//5 yellow
	printf("%c\n", 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 185);
	printf("%c%d%c", 186, 6, 179);
	printf("\033[49;34m"); printf("%c", 219); printf("\033[49;39m");//6 blue
	printf("%c%d%c", 186, 7, 179);
	printf("\033[49;35m"); printf("%c", 219); printf("\033[49;39m");//7 purple
	printf("%c%d%c", 186, 8, 179);
	printf("\033[49;36m"); printf("%c", 219); printf("\033[49;39m");//8 cyan
	printf("%c%d%c", 186, 9, 179);
	printf("\033[47;30m"); printf("W"); printf("\033[49;39m");//9 white on black
	printf("%c %c %c\n", 186, 179, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 200, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 188);
}
void swap_fore_back_menu(int fore_or_back)
{
	if (fore_or_back == 1)
	{
		printf("Background Color Picker\n");
	}
	else
	{
		printf("Foreground Color Picker\n");
	}
}