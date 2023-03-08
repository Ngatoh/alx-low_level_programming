#include "main.h"

/**
 * str_len - Returns the length of a string
 * @s: string to check the length of
 * Return: length of the string
 */
int str_len(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + str_len(s + 1));
}

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
else if (*s != *(s + str_len(s) - 1))
return (0);
else
*(s + str_len(s) - 1) = '\0';
return (is_palindrome(s + 1));
}
