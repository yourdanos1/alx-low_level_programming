#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function of the program.
 * It initializes an integer 'n' to 402, prints its value,
 * calls the reset_to_98 function to set 'n' to 98,
 * and prints the updated value of 'n'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
