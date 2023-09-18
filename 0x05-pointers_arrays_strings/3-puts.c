#include <stdio.h>
#include "main.h"

/**
 * main prints a string, followed by a new line
 *
 * return 0
 *
 */

void _puts( char *str) {
    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main() {
    char *n= "I do not fear computers. I fear the lack of them - Isaac Asimov";

    // Call the function to print the string with a new line using putchar
    _puts(n);

    return 0;
}
