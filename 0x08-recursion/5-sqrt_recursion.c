#include "main.h"
/**
 * natural square root of a number
 *
 * returns root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursive_calculation(n, n / 2, 0));
}
int _sqrt_recursive_calculation(int n, int guess, int prev)
{
if (guess * guess == n)
return (guess);
if (guess == prev)
return (-1);
if (guess * guess > n)
return (_sqrt_recursive_calculation(n, guess/ 2, guess));
return (_sqrt_recursive_calculation(n, (n / guess + guess) / 2, guess));
}
