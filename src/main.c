<<<<<<< Updated upstream
#include <stdio.h>
//#include "colors.h"
#include "draw.h"
#include "draw.c"
#include "hack_colors.h"
#include "structs.h"
#include "cetria_test.h"
#include "position-test.h"

#include "draw.h"
#include "menu.h"

int main(void) {
    puts("Hello, World!");
    puts("This is Cetria!");
    puts("This is Sydnee :)");
    puts("This is Bakenflake");

    Point* canvas = make_array(10, 10);
    initialize_array(canvas, 10, 10);


    puts("my test");
}
=======
<<<<<<< HEAD
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

    if (file == NULL)
    {
        puts("skill issue");
        return 1;
    }

    Point art[5][5];
    int length = 0;
    length = 5;

    load_file(file, *art, length);

    fclose(file);

    FILE* outfile = fopen("art_save.csv", "w");

    if (outfile == NULL) {
        printf("skill issue");
        return 1;
    }

    save_file(outfile, *art, length);

    fclose(outfile);

    test_print_pixel();
    test_get_color_from_keypress();
    test_convert_color_to_string();
    test_convert_string_to_color();
    // test_print_at_position();
}
=======
#include <stdio.h>
//#include "colors.h"
#include "draw.h"
#include "draw.c"
#include "hack_colors.h"
#include "structs.h"
#include "cetria_test.h"
#include "position-test.h"

#include "draw.h"
#include "menu.h"

int main(void) {
    puts("Hello, World!");
    puts("This is Cetria!");
    puts("This is Sydnee :)");
    puts("This is Bakenflake");

    Point* canvas = make_array(10, 10);
    initialize_array(canvas, 10, 10);


    puts("my test");
}
>>>>>>> ravensramen
>>>>>>> Stashed changes
