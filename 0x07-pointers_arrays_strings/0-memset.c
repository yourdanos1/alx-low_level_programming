#include <stddef.h>
#include "main.h"
/*
 * The _memset() function fills the first n bytes of the memory area
 *
 * Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
if (s == NULL || n == 0)
{
return s; }
for (i = 0; i < n; i++)
{
s[i] = b;
}
return s; }
