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

void print_all_points(Point *points, int num_rows, int num_cols) {
    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            print_at_position(points[i * num_cols + j], num_rows, num_cols);
        }
    }
}
