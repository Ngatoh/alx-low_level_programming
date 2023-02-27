#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	j = _strlen(s) - 1;

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
