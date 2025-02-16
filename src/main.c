#include <stdio.h>
#include "structs.h"
#include "draw.h"
#include "hack_colors.h"
#include "hack_menus.h"
#include "save_and_load.h"
#include "menu.h"

int main(void) {
    int keep_running = 1, option_choice = 0;
    //displayMenu();
    //Point *pts = make_array(10, 20);
    //if (pts == NULL) {
    //    puts("skissue");
    //}
    //Position position = {1, 1};
    //do
    //{
    //    option_choice = menu_input(); //get input from user
    //    menu_actions(pts, &position, option_choice); //contains all other functions
    //    CURSOR_UP(12);
    //    displayMenu();
    //} while (keep_running == 1);
    print_canvas_border();
    return 0;
}
