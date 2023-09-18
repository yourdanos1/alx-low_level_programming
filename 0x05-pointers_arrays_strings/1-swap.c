#include <stdio.h>
#include "main.h"

// Function to swap the values of two integers
void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;      
    *b = temp;     
}

// Function to print an integer using putchar
void printInteger(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n == 0) {
        putchar('0');
    } else {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        while (rev > 0) {
            putchar('0' + rev % 10);
            rev /= 10;
        }
    }
}

int main() {
    int a = 98;
    int b = 42;

    putchar('a');
    putchar('=');
    printInteger(a);
    putchar(',');
    putchar(' '); // Print a space for separation
    putchar('b');
    putchar('=');
    printInteger(b);
    putchar('\n');

    // Call the swapIntegers function to swap the values
    swap_int(&a, &b);
    
     putchar('a');
    putchar('=');
    printInteger(a);
    putchar(',');
    putchar(' '); // Print a space for separation
    putchar('b');
    putchar('=');
    printInteger(b);
    putchar('\n');

    return 0;
}
