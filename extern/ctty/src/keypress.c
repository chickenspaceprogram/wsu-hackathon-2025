// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <ctty/keypress.h>

#ifdef _WIN32
#define ESC_SEQ_START 0xE0
#else
#define ESC_SEQ_START 0x1B

// credit goes to the manpage for termios for explaining how this stuff works, this code may be unreadable but it does at least work!
int unix_getch(void) {
	// declaring structs that contain the terminal information
	struct termios prev_settings, non_canon;

	// getting the settings of the current tty, setting both structs to that information
	tcgetattr(STDIN_FILENO, &prev_settings);
	non_canon = prev_settings;

	// setting both the bits at the ICANON place and the ECHO place to 1, then flipping all bits
	tcflag_t flags = ~(ICANON | ECHO);

	// binary AND-ing `flags` with the currently-set flags forces the bits at the ICANON and ECHO places to 0, and leaves all others unchanged
	non_canon.c_lflag = flags & non_canon.c_lflag;

	tcsetattr(STDIN_FILENO, TCSANOW, &non_canon);
	int char_gotten = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &prev_settings);

	return char_gotten;
}
#endif
