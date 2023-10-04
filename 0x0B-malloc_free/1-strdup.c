#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - printes copied string
 * @*str: holding a character
 *
 * Return: copied string
 */

char *_strdup(char *str)
{
size_t i;
size_t len;
char *duplicate;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
duplicate = (char *)malloc(len + 1);
if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
