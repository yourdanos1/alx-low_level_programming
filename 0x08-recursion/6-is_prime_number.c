#include <stdio.h>
#include "main.h"
/**
 * prime number
 *
 * returns 1 if its prime 
 */

int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
{
return (0);
} else if (divisor == 1)
{
return (1);
}
else
{
if (n % divisor == 0)
{
return (0);
}
else 
{
return (is_prime_recursive(n, divisor - 1));
}
}
}
int is_prime_number(int n)
{
return (is_prime_recursive(n, n - 1));
}
