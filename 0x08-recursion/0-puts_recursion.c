#include <stdio.h>
#include "main.h"
/**
 * prints a string followed  by a new line
 *
 * returnns the printed string
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
