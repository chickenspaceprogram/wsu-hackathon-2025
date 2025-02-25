#include "save_and_load.h"
#include <stdio.h>

void load_file(FILE* file, Point* point, int x_len)
{
	char* line = malloc(128 * sizeof(char));
	size_t size = 128;
	int ch = 0;
	int length = 1;

	while ((ch = getc(file)) != EOF)
	{
		ungetc(ch, file);

		line = fgets_resize(line, &size, file);

		point->background = atoi(strtok(line, " "));
		point->character = atoi(strtok(NULL, " "));
		point->foreground = atoi(strtok(NULL, ","));
		point++;

		length = 1;
		while (length < x_len)
		{
			point->background = atoi(strtok(NULL, " "));
			point->character = atoi(strtok(NULL, " "));
			point->foreground = atoi(strtok(NULL, ","));
			point++;
			length++;
		}

	}

	free(line);
}

void save_file(FILE* outfile, Point* point, int x_len, int y_len)
{
	int x = 0;
	int y = 0;

	while (y < y_len)
	{
		x = 0;
		while (x < x_len - 1)
		{

			fprintf(outfile, "%d %d %d,", point->background, point->character, point->foreground);
			point++;
			x++;

		}
		fprintf(outfile, "%d %d %d\n", point->background, point->character, point->foreground);
		point++;
		y++;
	}
	

}
