#include "structs.h"
#include "hack_colors.h"

void test_print_pixel(void)
{
	Point visual = { .character = 'c', .background = RED, .foreground = BLUE };

	printf("Testing print_pixel():\nExpected: ");
	printf("\033[31;34m");
	printf("c");
	printf("\033[32;33m");
	printf("a");
	printf("\033[35;36m");
	printf("t");
	printf("\033[39;39m");
	putchar('\n');
	print_pixel(visual);
	visual.character = 'a';
	visual.background = GREEN;
	visual.foreground = YELLOW;
	print_pixel(visual);
	visual.character = 't';
	visual.background = PURPLE;
	visual.foreground = CYAN;
	print_pixel(visual);
}
void test_get_color_from_keypress(void)
{

}
void test_convert_color_to_string(void)
{

}
void test_convert_string_to_color(void)
{

}