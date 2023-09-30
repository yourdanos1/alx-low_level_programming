#include <stdio.h>
#include "main.h"
/**
 * function that returns length of a string
 *
 *returns length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return 0;
}
/* Recursive case: Add 1 and call the function with the next character*/
return(1 + _strlen_recursion(s + 1));
}
