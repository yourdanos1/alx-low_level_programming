#include "main.h"
/*
 * unction copies n bytes from memory area src
 *
 * Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;
while (n--)
*dest++ = *src++;
return original_dest;
}
