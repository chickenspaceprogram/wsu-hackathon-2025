// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <ctty/keyselect.h>

int select_char(sequence *sequences, int num_sequences) {
    int ch = check_char(sequences, num_sequences);
    while (ch == -1) {
        ch = check_char(sequences, num_sequences);
    }
    return ch;
}

int check_char(sequence *sequences, int num_sequences) {

    // allocating the array on the heap since the size of the array is not known at compiletime
    // unfortunately, MSVC requires the array size to be known at compiletime
    int *valid_matches = (int *) malloc(num_sequences * sizeof(int));

    if (valid_matches == NULL) {
        return -1;
    }
    
    int longest_match = -1, j = 0, current_char = 0, num_chars_left = num_sequences;

    for (int i = 0; i < num_sequences; ++i) {
        valid_matches[i] = 1;
    }

    while (num_chars_left > 0) {
        current_char = GETCH();
        for (int i = 0; i < num_sequences; ++i) {
            if (valid_matches[i]) {
                if (current_char != sequences[i].chars[j]) {
                    valid_matches[i] = 0;
                    --num_chars_left;
                }
                else if (j >= sequences[i].len - 1) {
                    valid_matches[i] = 0;
                    longest_match = i;
                    --num_chars_left;
                }
            }
        }
        ++j;
    }

    free(valid_matches);
    return longest_match;
}
