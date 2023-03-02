#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: Pointer to the first element of the array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
