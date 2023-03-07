#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[(i + 1) * (size - 1)];
	}
	_putchar(sum1 / 10 + '0');
	_putchar(sum1 % 10 + '0');
	_putchar('\n');
	_putchar(sum2 / 10 + '0');
	_putchar(sum2 % 10 + '0');
	_putchar('\n');
}
