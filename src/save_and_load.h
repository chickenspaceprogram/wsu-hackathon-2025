#ifndef save_and_load_H
#define save_and_load_H

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include "fgets-resize.h"

void load_file(FILE* file, Point* point, int x_len);

void save_file(FILE* outfile, Point* point, int x_len, int y_len);

#endif