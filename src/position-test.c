#include "position-test.h"
#include "position.h"


void test_print_at_position(void) {
    Point pt1 = {
        .character = 'a',
        .background = CYAN,
        .foreground = RED,
    };
    Point pt2 = {
        .character = 'b',
        .background = WHITE,
        .foreground = YELLOW,
    };

    print_at_position(pt1, 8, 12);
    print_at_position(pt2, 8, 13);

}
