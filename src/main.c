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

    test_print_pixel();
    test_get_color_from_keypress();
    test_convert_color_to_string();
    test_convert_string_to_color();
    // test_print_at_position();
}
