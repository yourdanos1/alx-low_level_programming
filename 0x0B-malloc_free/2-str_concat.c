#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concatonates two strings
 * @s1: holding first character
 * @s2: holding second character
 *
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
size_t i;
char *result;
size_t len1;
size_t len2;
size_t total_len;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
total_len = len1 + len2 + 1;
result = (char *)malloc(total_len);
if (result != NULL)
{
for (i = 0; i < len1; i++)
{
result[i] = s1[i];
}
for (i = 0; i < len2; i++)
{
result[len1 + i] = s2[i];
}
}
return (result);
}
