#include <ctty/cursor.h>
#include <ctty/text-modes.h>
#include "position.h"
#include "hack_colors.h"

#define ROW_MAX 10
#define COL_MAX 20

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

void move_cursor(Point *points, Position *pos, Input input) {
    Position temp_pos = *pos;
    switch (input) {
        case UP_ARROW:
            --(temp_pos.col);
            break;
        case DOWN_ARROW:
            ++(temp_pos.col);
            break;
        case LEFT_ARROW:
            --(temp_pos.row);
            break;
        case RIGHT_ARROW:
            ++(temp_pos.row);
            break;
    }
    if (temp_pos.row < 1 || temp_pos.row > ROW_MAX || temp_pos.col < 1 || temp_pos.col > COL_MAX) {
        return;
    }
    print_at_position(points[(pos->row - 1) * COL_MAX + (pos->col - 1)], pos->row, pos->col);
    printf(MODE_INVERSE);
    print_at_position(points[(temp_pos.row - 1) * COL_MAX + (temp_pos.col - 1)], temp_pos.row, temp_pos.col);
    printf(MODE_INVERSE_RESET);
    *pos = temp_pos;

}