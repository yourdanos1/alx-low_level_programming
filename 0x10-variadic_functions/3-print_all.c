#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - prints all arguments
 * @format: a format string containing format specifiers
 * @...: additional arguments
 *
 * Return: no return value
 */

void print_all(const char * const format, ...)
{
unsigned int i;
char *separator;
va_list args;
char *str;
va_start(args, format);
separator = "";
i = 0;
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
separator = ", ";
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
separator = ", ";
break;
case 's':
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", separator, str);
separator = ",";
break;
}
}
i++;
}
va_end(args);
printf("\n");
}
