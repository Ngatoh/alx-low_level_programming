#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 *
 * @dest: A pointer to the destination array where the content is to be copied.
 * @src: A pointer to the source string to be copied.
 *
 * Return: A pointer to the destination array dest.
 */
char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (start);
}
