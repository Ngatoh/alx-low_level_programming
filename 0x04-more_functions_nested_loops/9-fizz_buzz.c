#include <stdio.h>
#include "main.h"

/**
 * print_fizz_buzz - prints FizzBuzz up to a given number
 * @n: the maximum number to print
 *
 * Return: void
 */
void print_fizz_buzz(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	_putchar('\n');
}

int main(void)
{
	print_fizz_buzz(100);
	return (0);
}
