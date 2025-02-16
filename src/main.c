#include "save_and_load.h"
#include <stdio.h>
#include "hack_colors.h"
#include "structs.h"
#include "cetria_test.h"
#include "position-test.h"

int main(void) {
    puts("Hello, World!");
    puts("This is Cetria!");
    puts("This is Sydnee :)");
    puts("This is Bakenflake");

    puts("my test");

    FILE* file = fopen("art.csv", "r");
    Point art[5][5];
    int length = 0;
    length = 5;

    load_file(file, *art, length);

    test_print_pixel();
    test_get_color_from_keypress();
    test_convert_color_to_string();
    test_convert_string_to_color();
    // test_print_at_position();
}
