#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_realloc - reallocate memory
 * ptr: holding integer
 * old_size: olding integer
 * new_size: holding integer
 *
 * RETURN: new_ptr 0 (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
size_t copy_size;
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
copy_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
free(ptr);
return (new_ptr);
}
