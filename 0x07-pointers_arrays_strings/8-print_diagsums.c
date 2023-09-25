#include <stdio.h>
#include "main.h"

/*
 * a function that prints the sum of the two diagonals
 *
 * returns the printed values
 */

void print_diagsums(int *a, int size)
{
int primaryDiagonalSum = 0;
int secondaryDiagonalSum = 0;
int i;
for (i = 0; i < size; i++)
primaryDiagonalSum += a[i * size + i];
for (i = 0; i < size; i++)
secondaryDiagonalSum += a[i * size + (size - 1 - i)];
printf("%d, %d\n", primaryDiagonalSum, secondaryDiagonalSum);
}
