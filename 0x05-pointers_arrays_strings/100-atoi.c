#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    int digit;

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            digit = *s - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                num = (sign == 1) ? INT_MAX : INT_MIN;
                break;
            }
            num = num * 10 + digit;
        }
        else if (num > 0)
        {
            break;
        }
        s++;
    }

    return (num * sign);
}
