#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: holding integer
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list args;
sum = 0;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
