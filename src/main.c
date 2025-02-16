#include <stdio.h>
<<<<<<< HEAD
#include "colors.h"
#include "draw.h";
#include "draw.c";
=======
#include "hack_colors.h"
#include "structs.h"
#include "cetria_test.h"
#include "position-test.h"
>>>>>>> main

int main(void) {
    puts("Hello, World!");
    puts("This is Cetria!");
    puts("This is Sydnee :)");
    puts("This is Bakenflake");
 
    Point* canvas = make_array(10, 10);
    initialize_array(canvas, 10, 10);
    

    puts("my test");

    test_print_pixel();
    test_get_color_from_keypress();
    test_convert_color_to_string();
    test_convert_string_to_color();
    // test_print_at_position();
}
