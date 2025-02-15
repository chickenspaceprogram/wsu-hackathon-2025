// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <ctty/view-file.h>

#define PAGE_SIZE 4096

#ifdef _WIN32

void print_file(char *filename, int clear_screen) {

	// opening file, ensuring it is non-null
	FILE* input = fopen(filename, "r");
	if (input == NULL) {
		printf("An error occurred while loading the file `%s`.\n\nPress any key to continue . . . ", filename);
		CURSOR_OFF();
		PAUSE();
		CURSOR_ON();
		return;
	}
	
	// allocating it on the stack is probably bad practice since the buffer's relatively large, but I'm lazy and this worked
	char buffer[PAGE_SIZE + 1]; 
	memset(buffer, '\0', PAGE_SIZE + 1);
	
	// if we want to clear the screen, do it now after everything's been allocated to minimize time where screen is blank
	if (clear_screen) {
		CLEAR_SCREEN(); // the option to not clear the screen is not used, but I want to make this function more general
	}

	do {
		fread(buffer, sizeof(char), PAGE_SIZE, input);

		fputs(buffer, stdout);
		if (!feof(input)) {
			memset(buffer, '\0', PAGE_SIZE);
		}
	} while (!feof(input)); // keep looping until we reach EOF

	// closing file
	fclose(input);
}

#else

// using less(1) because it's pretty
void print_file(char *filename, int clear_screen) {
	if (clear_screen) {
		CLEAR_SCREEN();
	}
	size_t len = strlen(filename);
	char *buf = calloc(len + 6, sizeof(char));
	strcpy(buf, "less ");
	strcat(buf, filename);
	system(buf);
	free(buf);
}

#endif
