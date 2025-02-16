#include "hack_menus.h"


#ifdef _WIN32


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

#else

void print_symbol_menu() {
    puts("╔═╤═╦═╤═╦═╤═╦═╤═╦═╤═╗");
    puts("║1│░║2│▒║3│▓║4│█║5│▄║");
    puts("╠═╪═╬═╪═╬═╪═╬═╪═╬═╪═╣");
    puts("║6│▌║7│▐║8│▀║9│■║ │ ║");
    puts("╚═╧═╩═╧═╩═╧═╩═╧═╩═╧═╝");
}

void print_color_menu() {
    puts("╔═╤═╦═╤═╦═╤═╦═╤═╦═╤═╗");
    puts("║1│ ║2│\033[40;37m \033[49;39m║3│▓║4│█║5│▄║");
    puts("╠═╪═╬═╪═╬═╪═╬═╪═╬═╪═╣");
    puts("║6│▌║7│▐║8│▀║9│■║ │ ║");
    puts("╚═╧═╩═╧═╩═╧═╩═╧═╩═╧═╝");
}

#endif
