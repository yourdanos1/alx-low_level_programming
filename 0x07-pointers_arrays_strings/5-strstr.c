#include <stdio.h>
#include "main.h"

/*
 * a function that locates a substring.
 *
 * Returns a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
char *h = haystack;
char *n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
