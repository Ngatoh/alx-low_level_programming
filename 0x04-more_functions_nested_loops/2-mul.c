#include "main.h"
/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
    int result = 0;
    int sign = 1;

    /* Handle the sign of the result */
    if (a < 0)
    {
        sign = -sign;
        a = -a;
    }
    if (b < 0)
    {
        sign = -sign;
        b = -b;
    }

    /* Compute the product using repeated addition */
    while (b > 0)
    {
        result += a;
        b--;
    }

    /* Adjust the sign of the result */
    if (sign < 0)
        result = -result;

    return result;
}
