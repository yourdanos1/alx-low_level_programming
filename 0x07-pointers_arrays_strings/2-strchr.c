#include "main.h"
#include <stddef.h>

/*
 * function that locates a character in a string.
 *
 * returns a pointer to the first occurrence of c in s
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
i
s++;
}
return (NULL);
}
