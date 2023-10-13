#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: number of command line
 * @argv: array of command line 
 *
 * Return: 0 on succsess
 */
int main(int argc, char *argv[])
{
int i;
if (argc != 2)
{
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0) {
putchar('E');
putchar('r');
putchar('r');
putchar('o');
putchar('r');
putchar('\n');
return (2);
}
char *start = (char *)main;
for (i = 0; i < num_bytes; i++) {
unsigned char opcode = (unsigned char)start[i];
putchar("0123456789abcdef"[opcode >> 4]);
putchar("0123456789abcdef"[opcode & 0xF]);
}
putchar('\n');
return (0);
}
