#include "main.h"
#include <stddef.h>

/*
 *
 * function that searches a string for any of a set of bytes.
 *
 * Returns a pointer to the byte in s
 *
 */

char *_strpbrk(char *s, char *accept)
{
char *a;
if (s == NULL || accept == NULL)
return (NULL);
for (; *s != '\0'; s++)
{
for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
return (s);
}
}
return (NULL);
}
