#include <string.h>
#include <stdio.h>
#include "menu.h"
#include "structs.h"

void displayMenu(void) {
	
	printf("%c     Main Menu:      %c\n", 179, 179);
	printf("%c                     %c\n", 179, 179);
	printf("%c      1. Draw        %c\n", 179, 179);
	printf("%c      2. Save        %c\n", 179, 179);
	printf("%c      3. Load        %c\n", 179, 179);
	printf("%c      4. Help        %c\n", 179, 179);
	printf("%c      5. Exit        %c\n", 179, 179);
	printf("%c                     %c\n", 179, 179);

	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 192, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 196, 217);
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
