#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: holding character
 *
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
