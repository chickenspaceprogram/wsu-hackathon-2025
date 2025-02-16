#include <string.h>
#include <stdio.h>
#include "menu.h"
#include "structs.h"
#include <ctty/text-modes.h>

void displayMenu(void) {
    puts(MODE_DRAW"lqqqqqqqqqqqqqqqqqqqqqk"MODE_DRAW_RESET);	
	puts(MODE_DRAW"x"MODE_DRAW_RESET"     Main Menu:      "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"                     "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"      1. Draw        "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"      2. Save        "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"      3. Load        "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"      4. Help        "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"      5. Exit        "MODE_DRAW"x"MODE_DRAW_RESET);
	puts(MODE_DRAW"x"MODE_DRAW_RESET"                     "MODE_DRAW"x"MODE_DRAW_RESET);
    puts(MODE_DRAW"mqqqqqqqqqqqqqqqqqqqqqj"MODE_DRAW_RESET);
}

int menu_input(void){
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


void menu_actions(char choice) {
	switch (choice) {
	case 1:
		//run drawing function
		break;
	case 2:
		//color foreground
		break;
	case 3:
		//color background
		break;
	case 4:
		//save
		break;
	case 5:
		//load
		break; 
	case 6:
		//help
		break;
	case 7:
		//exit;
		break;

	}
}


#include "menu.h"
#include "structs.h"
