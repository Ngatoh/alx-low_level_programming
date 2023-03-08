#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of using i
 * @i: The current value to test for the square root
 *
 * Return: The square root of n, or -1 if n doesn't have square root
 */
int sqrt_helper(int n, int i);

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helper function to find the square root using recursion
 * @n: The number to find the square root of
 * @i: The current value to test for the square root
 *
 * Return: The square root of n, or -1 if n doesn't have a natural square root
 */
int sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);

if (i * i > n)
return (-1);

return (sqrt_helper(n, i + 1));
}
