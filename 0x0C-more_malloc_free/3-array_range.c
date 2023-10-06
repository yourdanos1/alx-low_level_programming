#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers 
 * int min: holdes integer 
 * imt max: holes integer
 *
 * RETURN: arr 0 (Success)
 */
int *array_range(int min, int max)
{
int i;
int *arr;
if (min > max)
{
return (NULL);
}
arr = (int *)malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
arr[i - min] = i;
}
return arr;
}
