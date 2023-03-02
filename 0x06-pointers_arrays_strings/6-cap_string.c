#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: modified string
 */
char *cap_string(char *s)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else
			{
				for (j = 0; separators[j] != '\0'; j++)
				{
					if (s[i - 1] == separators[j])
					{
						s[i] -= 32;
						break;
					}
				}
			}
		}
	}

	return (s);
}
