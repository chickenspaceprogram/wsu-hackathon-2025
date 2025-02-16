#include "save_and_load.h"

int main(void) {
    puts("Hello, World!");
    puts("This is Cetria!");
    puts("This is Sydnee :)");
    puts("This is Bakenflake");

    puts("my test");

    FILE* file = fopen("art.csv", "r");
    Point art[5][5];
    int length = 0;
    length = 5;

    load_file(file, *art, length);

}
