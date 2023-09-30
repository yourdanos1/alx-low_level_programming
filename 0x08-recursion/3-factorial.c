#include <stdio.h>
#include "main.h"
/**
 * a function that calculates a factorial to a num
 *
 * returns the factorial of a num
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
int result = 1;
int i;
for (i = 1; i <= n; i++)
{
result *= i;
}
return (result);
}
}
