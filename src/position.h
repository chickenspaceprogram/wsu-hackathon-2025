#pragma once
#include <ctty/cursor.h>
#include "structs.h"
void print_at_position(Point point, int row, int col);
void print_all_points(Point *points, int num_rows, int num_cols);
