// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#include <ctty/colors.h>

/**
 * Function name: rescale_color
 * Date created: 3 Nov 2024
 * Date last modified: 6 Nov 2024
 * Description: Rescales a 24-bit RGB color to an 8-bit RGB color.
 *              Effectively turns a 256x256x256 color cube into a 6x6x6 color cube.
 * Inputs:
 * `color` : The color value to be converted
 * Outputs: The converted color value
 */
static int rescale_color(unsigned char color);

void set_color(Color foreground, Color background) {
    printf("\x1B[%d;%dm", (int)foreground, (int)background + 10);
}

void set_color_rgb(RGB foreground, RGB background) {
    // got this algorithm straight from Wikipedia
    int foreground_conv = 16 + 36 * rescale_color(foreground.r) + 6 * rescale_color(foreground.g) + rescale_color(foreground.b);
    int background_conv = 16 + 36 * rescale_color(background.r) + 6 * rescale_color(background.g) + rescale_color(background.b);
    printf("\x1B[38;5;%d;48;5;%dm", foreground_conv, background_conv);
}

void set_color_rgb_24bit(RGB foreground, RGB background) {
    printf("\x1B[38;2;%d;%d;%d;48;2;%d;%d;%dm", (int)foreground.r, (int)foreground.g, (int)foreground.b, (int)background.r, (int)background.g, (int)background.b);
}

void set_color_256(unsigned char foreground, unsigned char background) {
    printf("\x1B[38;5;%d;48;5;%dm", (int)foreground, (int)background);
}

int rescale_color(unsigned char color) {
    return (int)((double) color / 51 + 0.5); // converts the color that ranges 0-255 into one that ranges 0-5, then rounds to the nearest integer value
}
