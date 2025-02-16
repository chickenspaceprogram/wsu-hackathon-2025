#include "save_and_load.h"

void load_file(FILE* file, Point* point, int len)
{
	char* line = malloc(128 * sizeof(char));
	size_t size = 128;
	int ch = 0;
	int length = 1;

	while ((ch = getc(file)) != EOF)
	{
		ungetc(ch);

		fgets_resize(line, &size, file);

		strcpy(point->background, strtok(line, " "));
		strcpy(point->character, atoi(strtok(NULL, " ")));
		strcpy(point->foreground, strtok(NULL, ","));
		*point++;

		while (length != len)
		{
			strcpy(point->background, strtok(NULL, " "));
			strcpy(point->character, atoi(strtok(NULL, " ")));
			strcpy(point->foreground, strtok(NULL, ","));
			*point++;
			length++;
		}
	}

	free(line);
}

void save_file(FILE* file, Point* point, int len)
{



}
