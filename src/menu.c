#include <string.h>
#include <stdio.h>
#include "menu.h"
#include "structs.h"
#include <ctty/text-modes.h>
#include "hack_menus.h"
#include "hack_colors.h"
#include "save_and_load.h"
#include <ctty/screen.h>
#include "get-user-input.h"
#include "position.h"

#define NUM_ROWS 10
#define NUM_COLS 20

void displayMenu(void) {
	CURSOR_LEFT(2);
    puts(MODE_DRAW"lqqqqqqqqqqqqqqqqqqqqqqqqqk"MODE_DRAW_RESET);	
	puts(MODE_DRAW"x"MODE_DRAW_RESET"       Main Menu:        "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"                         "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   1. Draw               "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   2. Color Foreground   "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   3. Color Background   "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   4. Save               "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   5. Load               "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   6. Help               "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"   7. Exit               "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"                         "MODE_DRAW"x"MODE_DRAW_RESET);
    puts(MODE_DRAW"mqqqqqqqqqqqqqqqqqqqqqqqqqj"MODE_DRAW_RESET);
	print_canvas_border();
}

int menu_input(void){
	int choice = 0;
	do {
		choice = GETCH() - '0';
	} while (choice < 1 || choice > 7);
	return choice;
}


void menu_actions(Point *points, Position *position, char choice) {
	FILE* inFile = NULL;
	FILE* outFile = NULL;
	Input input = CHARACTER;
	char chr = '\0';
	int x_len = 20;
	int y_len = 10;

	switch (choice) {
	case 1:
		CURSOR_UP(13);
		CURSOR_LEFT(2);
		printf("Draw With Symbols          \n");
		print_symbol_menu();
		while (input != ENTER) {
			input = get_user_input(&chr);
			switch (input) {
			case UP_ARROW: case DOWN_ARROW: case LEFT_ARROW: case RIGHT_ARROW:
				move_cursor(points, position, input);
				break;
			case CHARACTER:
				points[(position->row - 1) * NUM_COLS + (position->col - 1)].character = get_symbol_from_keypress(chr);
				printf(MODE_INVERSE);
				print_at_position(points[(position->row - 1) * NUM_COLS + (position->col - 1)], position->row, position->col);
				printf(MODE_INVERSE_RESET);
				break;
			}
		}
		break;
	case 2:
		CURSOR_UP(13);
		CURSOR_LEFT(2);
		printf("Foreground Color Select    \n");
		print_color_menu();
		while (input != ENTER) {
			input = get_user_input(&chr);
			switch (input) {
			case UP_ARROW: case DOWN_ARROW: case LEFT_ARROW: case RIGHT_ARROW:
				move_cursor(points, position, input);
				break;
			case CHARACTER:
				points[(position->row - 1) * NUM_COLS + (position->col - 1)].foreground = get_color_from_keypress(chr);
				printf(MODE_INVERSE);
				print_at_position(points[(position->row - 1) * NUM_COLS + (position->col - 1)], position->row, position->col);
				printf(MODE_INVERSE_RESET);
				break;
			}
		}
		break;
	case 3:
		CURSOR_UP(13);
		CURSOR_LEFT(2);
		printf("Background Color Select    \n");
		print_color_menu();
		while (input != ENTER) {
			input = get_user_input(&chr);
			switch (input) {
			case UP_ARROW: case DOWN_ARROW: case LEFT_ARROW: case RIGHT_ARROW:
				move_cursor(points, position, input);
				break;
			case CHARACTER:
				points[(position->row - 1) * NUM_COLS + (position->col - 1)].background = get_color_from_keypress(chr);
				printf(MODE_INVERSE);
				print_at_position(points[(position->row - 1) * NUM_COLS + (position->col - 1)], position->row, position->col);
				printf(MODE_INVERSE_RESET);
				break;
			}
		}
		break;
	case 4:
		outFile = fopen("art.csv", "w");
        if (outFile == NULL) {
            puts("we are dumb"); exit(1);
        }
		save_file(outFile, points, x_len, y_len);
		fclose(outFile);
		printf("Image Saved.\n\n");
        PAUSE();
        CLEAR_SCREEN();
		break;
	case 5:
		inFile = fopen("art.csv", "r");
        if (inFile == NULL) {
            puts("we are dumb"); exit(1);
        }
		load_file(inFile, points, x_len);
		fclose(inFile);
		printf("Loaded an image.\n\n");
        PAUSE();
        CLEAR_SCREEN();
		break; 
	case 6:
		CLEAR_SCREEN();
		print_help();
		CLEAR_SCREEN();
		displayMenu();
		print_all_points(points, NUM_ROWS, NUM_COLS);
		break;
	case 7:
		printf("Exiting...\n\n");
        	PAUSE();
        	CLEAR_SCREEN();
		exit(0);
		break;

	}
}
