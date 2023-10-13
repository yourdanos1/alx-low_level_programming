#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that holds a function
 * @array: integer
 * @size: size of array
 * @action: a function to pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
