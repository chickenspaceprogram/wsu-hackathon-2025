// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef ANSI_TEXT_MODES_H
#define ANSI_TEXT_MODES_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef RESET_GRAPHICS // only defining RESET_GRAPHICS if it has not already been defined
#define RESET_GRAPHICS              "\x1B[0m" // resets graphics
#endif

/* Set Text Modes */
#define MODE_BOLD                   "\x1B[1m"
#define MODE_FAINT                  "\x1B[2m"
#define MODE_ITALIC                 "\x1B[3m"
#define MODE_UNDERLINE              "\x1B[4m"
#define MODE_BLINKING               "\x1B[5m"
#define MODE_INVERSE                "\x1B[7m"
#define MODE_HIDDEN                 "\x1B[8m"
#define MODE_STRIKETHROUGH          "\x1B[9m"
#define MODE_DRAW                   "\x1B(0"

/* Reset Text Modes */
#define MODE_BOLD_FAINT_RESET       "\x1B[22m"
#define MODE_ITALIC_RESET           "\x1B[23m"
#define MODE_UNDERLINE_RESET        "\x1B[24m"
#define MODE_BLINKING_RESET         "\x1B[25m"
#define MODE_INVERSE_RESET          "\x1B[27m"
#define MODE_HIDDEN_RESET           "\x1B[28m"
#define MODE_STRIKETHROUGH_RESET    "\x1B[29m" // Puts the terminal into draw mode, where line-drawing characters are drawn instead of ASCII characters
#define MODE_DRAW_RESET             "\x1B(B" // Takes the terminal out of line-drawing mode and puts it back in ASCII mode.

#ifdef __cplusplus
}
#endif

#endif