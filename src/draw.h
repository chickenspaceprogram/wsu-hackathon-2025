//use malloc to allocate array of pointers

//point*make_array(int rows, int columns)
//allocate new array, check for malloc null return

//set each char to default space

#include "structs.h"
#include <stdio.h>
#include <ctty/cursor.h>



Point* make_array(int rows, int columns); 

void initialize_array(Point* canvas, int rows, int columns);

char get_input(void);
//
////send result of get_input to valid_char
//int valid_char(char input);
//
////if valid character, save char to array of struct points
//void* assign_chars(Point* canvas, char user_char);