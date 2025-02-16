#include <ctty/cursor.h>
#include "position.h"
#include "hack_colors.h"

void print_at_position(Point point, int row, int col) {
    CURSOR_DOWN(row);
    CURSOR_RIGHT(col);
    print_pixel(point);
    CURSOR_LEFT(col + 1);
    CURSOR_UP(row);
}
