// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <ctty/cursor.h>

/**
 * Function name: read_number
 * Date created: 31 Oct 2024
 * Date last modified: 31 Oct 2024
 * Description: Reads a number from stdin, stopping when a ';' or an 'R' is detected.
 * Inputs: none
 * Outputs: The number that was read.
 */
static int read_number(void);


int read_number(void) {
    int ch = 0, num = 0;
    while ((ch = GETCH()) != ';' && ch != 'R') {
        if (ch < '0' || ch > '9') {
            return -1;
        }
        num *= 10;
        num += ch - '0';
    }
    return num;
}

Position cursor_get_position(void) {
    Position pos;
    int ch;

    // printing an escape sequence that makes the terminal put a string of the form "ESC[{row};{col}R" onto stdin, where ESC is the escape character (0x1B), {row} is a number indicating the cursor row, and {col} is a number indicating the cursor column
    printf("\x1B[6n");

    while ((ch = GETCH()) != '\x1B'); // turns out that if there are keypresses left in stdin they can ruin your day if you don't clear them. you don't wanna know how long this took me to debug.
    GETCH(); // getting rid of `[`

    // reading row and column, and returning position
    pos.row = read_number();
    pos.col = read_number();
    return pos;
}
