#include <stdio.h>
#include "main.h"
/**
 * main returns the length of a string.
 *
 * returns len
 */
int _strlen(char *s) {
     char *str = s;
    while (*str) {
        str++;
    }
    return str - s;
}

int main() {
     char *str = "My first strlen!";
    int len = _strlen(str);
    len++; 
    while (len > 0)
   {
    int digit = len % 10;
    putchar('0' + digit);
    len /= 10;
   }
   putchar('\n');
    return 0;
}
