#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the minimum nmber of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int cents;
int count;
int numCoins;
int i;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
numCoins = sizeof(coins) / sizeof(coins[0]);
count = 0;
for (i = 0; i < numCoins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}
printf("%d\n", count);
return (0);
}
