#include <stdlib.h>

#include "fgets-resize.h"

#define BUFFER_GROW_RATE 2

char *resize_buffer(char *buffer, size_t size);

char *resize_buffer(char *buffer, size_t size) {
    char *temp = realloc(buffer, size * BUFFER_GROW_RATE);
    if (temp == NULL) {
        free(buffer);
        return NULL;
    }
    return temp;
}

char *fgets_resize(char *buffer, size_t *size, FILE *fp) {
    size_t start_position = 0;
    while (1) {
        buffer[*size - 2] = '\0'; // if this is still \n after calling fgets, it was either set that way by fgets or fgets didn't fill the buffer fully
        fgets(buffer + start_position, *size - start_position, fp);
        if (buffer[*size - 2] == '\n' || buffer[*size - 2] == '\0') {
            return buffer;
        }
        // in this case, fgets completely filled the buffer and it's necessary to scan again
        start_position = *size - 1; // want to overwrite '\0'
        buffer = resize_buffer(buffer, *size);
        if (buffer == NULL) {
            return NULL; // malloc failed
        }
        *size *= BUFFER_GROW_RATE;
    }
}

