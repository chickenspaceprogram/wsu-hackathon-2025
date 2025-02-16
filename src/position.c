#include <ctty/cursor.h>
#include "position.h"

void print_at_position(int row, int col) {
    CURSOR_DOWN(row);
    CURSOR_RIGHT(col);
    // print shit
    CURSOR_LEFT(col + 1);
    CURSOR_UP(row);
}
