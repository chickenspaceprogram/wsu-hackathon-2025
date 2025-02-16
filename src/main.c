#include "menu.h"
#include "hack_menus.h"
#include "hack_colors.h"
#include "save_and_load.h"

int main(void) {
    int keep_running = 1;

    do
    {
        displayMenu();

    } while (keep_running == 1);

    return 0;
}

