#include <stdio.h>

/**
 * main - prints multiplied arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Returns: Always 0 (Success)
 */

int stringToInteger(const char *str)
{
int result = 0;
int sign = 1;
int i = 0;
if (str[0] == '-')
{
sign = -1;
i = 1;
}
for (; str[i] != '\0'; ++i)
{
if (str[i] >= '0' && str[i] <= '9')
{
result = result * 10 + (str[i] - '0');
}
else
{
return (0);
}
}
return (result *sign);
}
int main(int argc, char *argv[])
{
int result;
int num1;
int num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = stringToInteger(argv[1]);
num2 = stringToInteger(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
