#include "menu.h"
#include "hack_menus.h"
#include "hack_colors.h"
#include "save_and_load.h"

int main(void) {
    int keep_running = 1, option_choice = 0;

    do
    {
        displayMenu();
        option_choice = menu_input(); //get input from user
        menu_actions(option_choice); //contains all other functions

    } while (keep_running == 1);

    print_help();

    return 0;
}

