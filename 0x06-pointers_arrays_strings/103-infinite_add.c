#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: A pointer to the first number.
 * @n2: A pointer to the second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: If the buffer is too small, return 0.
 * Otherwise, a pointer to the result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int n1_len, n2_len, r_len, i, j, k, l, sum;
for (n1_len = 0; n1[n1_len]; n1_len++)
	;
for (n2_len = 0; n2[n2_len]; n2_len++)
	;
if (n1_len > size_r || n2_len > size_r)
	return (0);

r_len = (n1_len > n2_len) ? n1_len : n2_len;

for (i = n1_len - 1, j = n2_len - 1, k = r_len - 1, l = 0; l < r_len; i--, j--, k--, l++)
{
	sum = ((i >= 0) ? n1[i] - '0' : 0)
		+ ((j >= 0) ? n2[j] - '0' : 0)
		+ ((k >= 0) ? r[k] - '0' : 0);

	if (l >= size_r || (i < 0 && j < 0 && sum == 0))
		return (0);

	if (k >= 0)
		r[k] = (sum % 10) + '0';
}

if (l == size_r && sum > 0)
	return (0);

return (r + k + 1);
