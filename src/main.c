#include "menu.h"
#include "hack_menus.h"
#include <stdio.h>
int main(void) {
    displayMenu();
    puts("symb menu");
    print_symbol_menu();
    puts("color menu");
    print_color_menu();
}

