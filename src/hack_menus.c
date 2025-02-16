#include "hack_menus.h"
#include <ctty/cursor.h>


#ifdef _WIN32

void print_canvas_border(void)
{
	//26 wide, 14 tall
	//top border width = 2
	//side border width = 3
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 201, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 186, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 186, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 186, 32, 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188, 32, 186); CURSOR_DOWN(1); CURSOR_LEFT(26);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 188); CURSOR_DOWN(1); CURSOR_LEFT(26);
	CURSOR_UP(13);
	CURSOR_RIGHT(2);
}
void print_symbol_menu(void)
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      \n", 201, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 187);
	printf("%c%d%c%c%c%d%c%c%c%d%c%c%c%d%c%c%c%d%c%c%c      \n", 186, 1, 179, 176, 186, 2, 179, 177, 186, 3, 179, 178, 186, 4, 179, 219, 186, 5, 179, 220, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      \n", 204, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 185);
	printf("%c%d%c%c%c%d%c%c%c%d%c%c%c%d%c%c%c%c%c%c%c      \n", 186, 6, 179, 221, 186, 7, 179, 222, 186, 8, 179, 223, 186, 9, 179, 254, 186, ' ', 179, ' ', 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      \n", 200, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 188);
	puts("                           ");
	puts("                           ");
	puts("                           ");
	puts("                           ");
	puts("                           ");
	puts("                           ");
	CURSOR_DOWN(1);
	CURSOR_RIGHT(2);
}
void print_color_menu(void)
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c          \n", 201, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 203, 205, 209, 205, 187);
	printf("%c%d%c", 186, 1, 179);
	printf("\033[40;37m"); printf("B"); printf("\033[49;39m");//1 black on white
	printf("%c%d%c", 186, 2, 179);
	printf("\033[49;31m"); printf("%c", 219); printf("\033[49;39m");//2 red
	printf("%c%d%c", 186, 3, 179);
	printf("\033[49;32m"); printf("%c", 219); printf("\033[49;39m");//3 green
	printf("%c%d%c", 186, 4, 179);
	printf("\033[49;33m"); printf("%c", 219); printf("\033[49;39m");//4 yellow
	printf("%c          \n", 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c          \n", 204, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 206, 205, 216, 205, 185);
	printf("%c%d%c", 186, 5, 179);
	printf("\033[49;34m"); printf("%c", 219); printf("\033[49;39m");//5 blue
	printf("%c%d%c", 186, 6, 179);
	printf("\033[49;35m"); printf("%c", 219); printf("\033[49;39m");//6 purple
	printf("%c%d%c", 186, 7, 179);
	printf("\033[49;36m"); printf("%c", 219); printf("\033[49;39m");//7 cyan
	printf("%c%d%c", 186, 8, 179);
	printf("\033[47;30m"); printf("W"); printf("\033[49;39m");//8 white on black
	printf("%c          \n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c          \n", 186, 200, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 202, 205, 207, 205, 188);
	puts("                           ");
	puts("                           ");
	puts("                           ");
	puts("                           ");
	puts("                           ");
	puts("                           ");
	CURSOR_DOWN(1);
	CURSOR_RIGHT(2);
}

#else

void print_symbol_menu() {
    CURSOR_UP(5);
    puts("╔═╤═╦═╤═╦═╤═╦═╤═╦═╤═╗");
    puts("║1│░║2│▒║3│▓║4│█║5│▄║");
    puts("╠═╪═╬═╪═╬═╪═╬═╪═╬═╪═╣");
    puts("║6│▌║7│▐║8│▀║9│■║ │ ║");
    puts("╚═╧═╩═╧═╩═╧═╩═╧═╩═╧═╝");
    CURSOR_DOWN_LINE_START(1);
}

void print_color_menu() {
    CURSOR_UP(5);
    puts("╔═╤═╦═╤═╦═╤═╦═╤═╗");
    puts("║1│\x1b[40;37mB\x1b[49;39m║2│\033[49;31m█\033[49;39m║3│\033[49;32m█\033[49;39m║4│\033[49;33m█\033[49;39m║");
    puts("╠═╪═╬═╪═╬═╪═╬═╪═╣");
    puts("║5│\033[49;34m█\033[49;39m║6│\033[49;35m█\033[49;39m║7│\033[49;36m█\033[49;39m║8│\033[47;30mW\033[49;39m║");
    puts("╚═╧═╩═╧═╩═╧═╩═╧═╝");
    CURSOR_DOWN_LINE_START(1);
}

#endif

void print_help(void)
{
	printf("This is a program that allows you to draw and color using ASCII characters.\n\n\n");
	printf("Select \"Draw\" to place ASCII symbols into the drawing.\nSimply hover over the space you wish to place it, and press the corresponding key.\n\n");
	printf("Select \"Color Foreground\" to change the color of the symbol that is currently occupying a space.\nHover over the space whose symbol you wish to color, and press the corresponding key.\n\n");
	printf("Select \"Color Background\" to change the color of the background at the current space.\n Hover over the space whose background you wish to change, and press the corresponding key.\n\n");
	printf("Select \"Save\" to save your drawing to a .csv file.\n\n");
	printf("Select \"Load\" to load a drawing from a .csv file.\n\n");
	printf("Select \"Help\" to view instructions.\n\n");
	printf("Select \"Exit\" to exit the program.\n\n\n");
	system("pause");
}
