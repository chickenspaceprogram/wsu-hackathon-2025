// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <stdio.h>
#include <ctty/screen.h>

void resize_screen(int lines, int cols) {
    printf("\x1B[8;%d;%dt", lines, cols);
}
