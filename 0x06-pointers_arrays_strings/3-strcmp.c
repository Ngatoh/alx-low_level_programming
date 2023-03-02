#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: An integer greater than, equal to, or less than 0, according to
 * whether the first string is greater than, equal to, or less than the
 * second string, respectively.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
