#include <stdio.h>
#include "main.h"
/**
 * prints strings in reverse
 *
 * returns the string
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0') /*Base case*/
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);                
}
