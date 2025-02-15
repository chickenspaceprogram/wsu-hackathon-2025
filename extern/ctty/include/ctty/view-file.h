// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef SCREEN_VIEW_FILE_H
#define SCREEN_VIEW_FILE_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include <ctty/screen.h>

/**
* Function name: print_file
* Date created: 25 Sept 2024
* Date last modified: 12 Nov 2024
* Description:	Prints the contents of a file to stdout.
*				This is used to print the rules and the main menu because a bunch of printf() statements would've been extremely ugly
* Inputs:
* `filename` : The name of the file.
* `clear_screen` : Whether to clear the screen before displaying the file.
* Outputs: none
*/
void print_file(char *filename, int clear_screen);

#ifdef __cplusplus
}
#endif

#endif
