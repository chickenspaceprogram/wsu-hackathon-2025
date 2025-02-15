#include "structs.h"
#include "hack_colors.h"

void test_print_pixel(void)
{
	Point visual = { .character = 'c', .background = RED, .foreground = BLUE };

	printf("\nTesting print_pixel():\nExpected: ");
	printf("\033[41;34m");
	printf("c");
	printf("\033[42;33m");
	printf("a");
	printf("\033[45;36m");
	printf("t");
	printf("\033[49;39m");
	printf("\nactual: ");
	print_pixel(visual);
	visual.character = 'a';
	visual.background = GREEN;
	visual.foreground = YELLOW;
	print_pixel(visual);
	visual.character = 't';
	visual.background = PURPLE;
	visual.foreground = CYAN;
	print_pixel(visual);
	printf("\033[49;39m");
	putchar('\n');
}
void test_get_color_from_keypress(void)
{
	int color = 0;
	printf("\nTesting get_color_from_keypress():\nExpected: 39 31 33 35 37\n");
	printf("Actual: ");
	color = get_color_from_keypress('1');
	printf("%d", color);
	putchar(' ');
	color = get_color_from_keypress('3');
	printf("%d", color);
	putchar(' ');
	color = get_color_from_keypress('5');
	printf("%d", color);
	putchar(' ');
	color = get_color_from_keypress('7');
	printf("%d", color);
	putchar(' ');
	color = get_color_from_keypress('9');
	printf("%d", color);
	putchar('\n');
}
void test_convert_color_to_string(void)
{
	char string[8] = "";

	printf("\nTesting get_color_from_keypress():\nExpected:	Actual:\n--------\t--------\n");
	printf("DEFAULT\t\t");
	convert_color_to_string(39, string);
	puts(string);
	printf("BLACK\t\t");
	convert_color_to_string(30, string);
	puts(string);
	printf("BLACK\t\t");
	convert_color_to_string(40, string);
	puts(string);
	printf("PURPLE\t\t");
	convert_color_to_string(35, string);
	puts(string);
	printf("PURPLE\t\t");
	convert_color_to_string(45, string);
	puts(string);
	printf("WHITE\t\t");
	convert_color_to_string(37, string);
	puts(string);
	printf("WHITE\t\t");
	convert_color_to_string(47, string);
	puts(string);
	printf("DEFAULT\t\t");
	convert_color_to_string(49, string);
	puts(string);
	putchar('\n');
}
void test_convert_string_to_color(void)
{
	int color = 0;

	printf("\nTesting convert_string_to_color():\n\n");

	color = convert_string_to_color("DEFAULT");
	printf("Expected: 39\tActual: %d\n", color);
	color = convert_string_to_color("RED");
	printf("Expected: 31\tActual: %d\n", color);
	color = convert_string_to_color("YELLOW");
	printf("Expected: 33\tActual: %d\n", color);
	color = convert_string_to_color("BLUE");
	printf("Expected: 34\tActual: %d\n", color);
	color = convert_string_to_color("WHITE");
	printf("Expected: 37\tActual: %d\n", color);
}