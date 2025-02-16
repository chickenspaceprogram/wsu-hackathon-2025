#include "draw.h"
#include "stdlib.h"


Point* make_array(int rows, int columns) {
	//canvas array of points
	Point* canvas = (Point*)malloc(sizeof(Point) * rows * columns);
	
	if (canvas == NULL) {
		printf("Memory alloc failed. \n");
		return 0;
	}

	return canvas;
}

void initialize_array(Point* canvas, int rows, int columns) { 
	int i = 0, j = 0; 

	do {
		//modify each pixel
		canvas->background = DEFAULT;
		canvas->character = ' ';
		canvas->foreground = DEFAULT;
		
		canvas++; //move to next pixel
		i++; //move right one in row

		if (i == rows) { //end of row
			j++; //move down 1
			i = 0;
		}

	} while (i<rows&&j<columns); //set to default until last pixel reached
}

char get_input(void) {
	char user_char = '\0';
	user_char = getchar();

	return user_char;
}

//int valid_char(char input) {
//	int valid = 0;
//	if (input!= 27 || input != 224|| input!= 72||input!=80|| input!= 75|| input!=77)//insure input is not esc sequences or arrows
//		//an esc key or arrow keys were inputted
//		return 0;
//	else {
//		return 1; //return 1 for valid
//		//assign to 176-178, 219-223, 233, 254
//	}
//}
//
////if valid_char returns 1
//void* assign_chars(Point* canvas, Position* location, char user_char){
//	//apply user_char to canvas position
//}





