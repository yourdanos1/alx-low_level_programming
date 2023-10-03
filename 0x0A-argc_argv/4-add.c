#include <stdio.h>
#include <stdlib.h>


/**
 * main - print the addition of positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
int result;
int error;
int num;
result = 0;
error = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
char *endptr;
num = strtol(argv[i], &endptr, 10);
if (*endptr == '\0' && !error)
{
result += num;
}
else
{
error = 1;
}
}
if (!error)
{
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
