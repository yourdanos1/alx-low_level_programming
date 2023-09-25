#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/*
 * a function that sets the value of a pointer to a char
 *
 * returns the value
 */

void set_string(char **s, char *to)
{
if (s != NULL)
{
*s = (char *)malloc(strlen(to) + 1);
if (*s != NULL)
{
strcpy(*s, to);
}
}
}
