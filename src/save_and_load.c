#include "stdio.h"
#include "colors.h"
#include "string.h"
#include "stdlib.h"
#include "save_and_load.h"
#include "structs.h"


load_file(FILE* file, Point* point, int len)
{
	char line[100];

	while (file != NULL)
	{
		while(line)
		fgets(line, 100, file);
		strcpy(point->background, strtok(line, " "));
		strcpy(point->character, atoi(strtok(NULL, " ")));
		strcpy(point->foreground, strtok(NULL, ","));
	}

}

save_file(FILE* file, Point* point, int len)
{



}
