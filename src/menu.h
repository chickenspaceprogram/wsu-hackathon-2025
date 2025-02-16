#ifndef MENU_H
#define MENU_H
#define _CRT_SECURE_NO_WARNINGS
#include "structs.h"

void displayMenu(void);

int menu_input(void);

//send menu_input result
void menu_actions(char choice);


#endif