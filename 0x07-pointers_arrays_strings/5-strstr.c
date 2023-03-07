#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Pointer to string to search in
 * @needle: Pointer to substring to locate
 *
 * Return: Pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n == *haystack && *n != '\0' && *haystack != '\0')
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
