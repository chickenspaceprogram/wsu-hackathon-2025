// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef ANSI_COLORS_H
#define ANSI_COLORS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <math.h>

#ifndef RESET_GRAPHICS // only defining RESET_GRAPHICS if it has not already been defined
#define RESET_GRAPHICS  "\x1B[0m" // resets graphics
#endif

typedef enum {
    Default = 39,
    Black = 30,
    Red,
    Green,
    Yellow,
    Blue,
    Magenta,
    Cyan,
    White,
    BrightBlack = 90,
    BrightRed,
    BrightGreen,
    BrightYellow,
    BrightBlue,
    BrightMagenta,
    BrightCyan,
    BrightWhite,
} Color;

/**
 * Struct name: RGB
 * Date created: 3 Nov 2024
 * Date last modified: 3 Nov 2024
 * Description: A struct containing fields for an RGB color.
 * Fields: 
 * `r` : The red value of the pixel. Should be 0-255.
 * `g` : The green value of the pixel. Should be 0-255.
 * `b` : The blue value of the pixel. Should be 0-255.
 */
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
} RGB;

/* 4-bit colors */

/**
 * Function name: set_color
 * Date created: 3 Nov 2024
 * Date last modified: 3 Nov 2024
 * Description: Sets the color of the terminal screen.
 * Inputs: 
 * `foreground` : An enum containing the desired color of the foreground.
 * `background` : An enum containing the desired color of the background.
 * Outputs: none
 */
void set_color(Color foreground, Color background);

/* 8-bit colors */

/**
 * Function name: set_color_rgb
 * Date created: 3 Nov 2024
 * Date last modified: 3 Nov 2024
 * Description: Sets the color of the terminal screen to the closest 8-bit color possible.
 *              This is more portable than set_color_rgb, but there are only 216 colors available instead of 16 777 216 colors.
 * Inputs: 
 * `foreground` : A struct containing the desired color of the foreground.
 * `background` : A struct containing the desired color of the background.
 * Outputs: none
 */
void set_color_rgb(RGB foreground, RGB background);

/**
 * Function name: set_color_256
 * Date created: 3 Nov 2024
 * Date last modified: 3 Nov 2024
 * Description: Sets the color of the terminal screen to the desired 8-bit color sequence manually.
 *              For information on what values to input for `foreground` and `background`, see https://en.wikipedia.org/wiki/ANSI_escape_code#8-bit.
 * Inputs: 
 * `foreground` : The color value of the foreground.
 * `background` : The color value of the background.
 * Outputs: none
 */
void set_color_256(unsigned char foreground, unsigned char background);

/* 24-bit colors */

/**
 * Function name: set_color_rgb_24bit
 * Date created: 3 Nov 2024
 * Date last modified: 3 Nov 2024
 * Description: Sets the color of the terminal screen to a chosen RGB color.
 *              This does not appear to work properly in `Terminal.app` and possibly other terminal emulators as well.
 *              As such, it is best to use set_color_rgb instead of this function when exact color is unimportant.
 * Inputs: 
 * `foreground` : A struct containing the desired color of the foreground.
 * `background` : A struct containing the desired color of the background.
 * Outputs: none
 */
void set_color_rgb_24bit(RGB foreground, RGB background);

#ifdef __cplusplus
}
#endif

#endif
