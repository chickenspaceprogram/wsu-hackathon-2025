#include <stdio.h>
#include "structs.h"
#include "draw.h"
#include "hack_colors.h"
#include "hack_menus.h"
#include "save_and_load.h"
#include "menu.h"
#include "position.h"
#include <ctty/text-modes.h>

int main(void) {
    int keep_running = 1, option_choice = 0;
    displayMenu();
    Point *pts = make_array(10, 20);
    if (pts == NULL) {
        puts("skissue");
    }
    Position position = {1, 1};
    printf(MODE_INVERSE);
    print_at_position(pts[0], 1, 1);
    printf(MODE_INVERSE_RESET);
    do
    {
        option_choice = menu_input(); //get input from user
        menu_actions(pts, &position, option_choice); //contains all other functions
        CURSOR_UP(13);
        displayMenu();
        print_all_points(pts, 10, 20);
    } while (keep_running == 1);

    return 0;
}
