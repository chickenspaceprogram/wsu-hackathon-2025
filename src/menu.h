#ifndef MENU_H
#define MENU_H
#define _CRT_SECURE_NO_WARNINGS
#include "structs.h"
#include <ctty/cursor.h>

void displayMenu(void);

int menu_input(void);

//send menu_input result
void menu_actions(Point *points, Position *position, char choice);


#endif