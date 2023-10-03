#include <stdio.h>

/**
 * main - print the command line argument
 * @argc: number of arguments 
 * @argv: array of arguments
 *
 */

int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
