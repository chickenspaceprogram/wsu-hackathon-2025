#include <string.h>
#include <stdio.h>
#include "menu.h"
#include "structs.h"
#include <ctty/text-modes.h>
#include "hack_menus.h"
#include "hack_colors.h"
#include "save_and_load.h"
#include <ctty/screen.h>

void displayMenu(void) {
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
}

int menu_input(void){
	int choice = GETCH() - '0';
	return choice;
}


void menu_actions(char choice) {
	FILE* inFile = NULL;
	FILE* outFile = NULL;

	switch (choice) {
	case 1:
		printf("Draw With Symbols\n");
		print_symbol_menu();
		//navigation and printing
		break;
	case 2:
		printf("Foreground Color Select\n");
		print_color_menu();
		//navigation and printing
		break;
	case 3:
		printf("Background Color Select\n");
		print_color_menu();
		//navigation and printing
        PAUSE();
        CLEAR_SCREEN();
		break;
	case 4:
		outFile = fopen("art_save.csv", "w");
        if (outFile == NULL) {
            puts("we are dumb"); exit(1);
        }
		//save_file(outFile, pixel, length);
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
		//load_file(inFile, pixel, length);
		fclose(inFile);
		printf("Loaded an image.\n\n");
        PAUSE();
        CLEAR_SCREEN();
		break; 
	case 6:
		//print_help();
		break;
	case 7:
		printf("Exiting...\n\n");
        PAUSE();
        CLEAR_SCREEN();
		exit(0);
		break;

	}
}
