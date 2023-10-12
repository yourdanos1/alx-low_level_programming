#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print string values
 * @separator: holding character
 * @n: holding integer
 *
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
int j;
char *str;
char *nil;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
nil = "(nil)";
for (j = 0; nil[j] != '\0'; j++)
{
putchar(nil[j]);
}
}
else
{
for (j = 0; str[j] != '\0'; j++)
{
putchar(str[j]);
}
}
if (i < n - 1 && separator != NULL)
{
for (j = 0; separator[j] != '\0'; j++)
{
putchar(separator[j]);
}
}
}
putchar('\n');
va_end(args);
}
