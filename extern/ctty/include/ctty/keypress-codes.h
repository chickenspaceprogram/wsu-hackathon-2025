// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

/**
 * A file providing preprocessor macros for common keypresses.
 * This is not all-inclusive, but it has all of the macros that I personally need and I'm not going to bother adding more.
 * Feel free to submit a PR adding more keycodes if you want, though!
 */

#ifndef KEYPRESS_CODES_H
#define KEYPRESS_CODES_H

#ifdef __cplusplus
extern "C" {
#endif

#define CTTY_ESC        {(unsigned char *)"\x1B", 1}

#define CTTY_a          {(unsigned char *)"a", 1}
#define CTTY_b          {(unsigned char *)"b", 1}
#define CTTY_c          {(unsigned char *)"c", 1}
#define CTTY_d          {(unsigned char *)"d", 1}
#define CTTY_e          {(unsigned char *)"e", 1}
#define CTTY_f          {(unsigned char *)"f", 1}
#define CTTY_g          {(unsigned char *)"g", 1}
#define CTTY_h          {(unsigned char *)"h", 1}
#define CTTY_i          {(unsigned char *)"i", 1}
#define CTTY_j          {(unsigned char *)"j", 1}
#define CTTY_k          {(unsigned char *)"k", 1}

#define CTTY_1          {(unsigned char *)"1", 1}
#define CTTY_2          {(unsigned char *)"2", 1}
#define CTTY_3          {(unsigned char *)"3", 1}
#define CTTY_4          {(unsigned char *)"4", 1}
#define CTTY_5          {(unsigned char *)"5", 1}
#define CTTY_6          {(unsigned char *)"6", 1}
#define CTTY_7          {(unsigned char *)"7", 1}
#define CTTY_8          {(unsigned char *)"8", 1}
#define CTTY_9          {(unsigned char *)"9", 1}
#define CTTY_0          {(unsigned char *)"0", 1}

#define CTTY_SPACE      {(unsigned char *)" ", 1}


#ifdef _WIN32

#define CTTY_UP         {(unsigned char *)"\xE0H", 2} // up arrow key
#define CTTY_DOWN       {(unsigned char *)"\xE0P", 2} // down arrow key
#define CTTY_LEFT       {(unsigned char *)"\xE0K", 2} // left arrow key
#define CTTY_RIGHT      {(unsigned char *)"\xE0M", 2} // right arrow key
#define CTTY_ENTER      {(unsigned char *)"\r", 1} // [Enter] key

#define CTTY_DEL        {(unsigned char *)"\xE0S", 2}

#else

#define CTTY_UP         {(unsigned char *)"\x1B[A", 3} // up arrow key
#define CTTY_DOWN       {(unsigned char *)"\x1B[B", 3} // down arrow key
#define CTTY_LEFT       {(unsigned char *)"\x1B[D", 3} // left arrow key
#define CTTY_RIGHT      {(unsigned char *)"\x1B[C", 3} // right arrow key
#define CTTY_ENTER      {(unsigned char *)"\n", 1} // [Enter] key

#define CTTY_DEL        {(unsigned char *)"\x1B[3~", 4}

#endif

#ifdef __cplusplus
}
#endif

#endif
