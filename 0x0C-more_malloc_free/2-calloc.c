#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * unsigned int nmemb: holding integer
 * unsigned int size: holding integer
 *
 * RETURN: ptr 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = calloc(nmemb, size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
