#include <stdio.h>
#include "main.h"

/*
 * function that gets the length of a prefix substring.
 *
 * eturns the number of bytes in s
 *
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0')
{
int f = 0;
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
f = 1;
break;
}
a++;
}
if (!f)
{
break;
}
count++;
s++;
}
return (count);
}
