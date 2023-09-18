#include <stdio.h>
#include "main.h"

// Function to swap the values of two integers
void  swap_int(int *a, int *b)
{
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}
/**
 * main swap the values of two integers
 *
 *returns 0
 */
int main() {
    int a = 98;
    int b = 42;

    printf("a=%d, b=%d\n", a, b);

    // Call the swapIntegers function to swap the values
    swap_int(&a, &b);

    printf("a=%d, b=%d\n", a, b);

    return 0;
}
