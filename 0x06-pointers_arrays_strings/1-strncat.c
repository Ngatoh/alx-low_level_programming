#include "main.h"


/* _strncat.c */
char *_strncat(char *dest, const char *src, int n)
{
    char *result = dest;

    /* Advance `dest` pointer to the end of the string */
    while (*dest != '\0')
        dest++;

    /* Copy up to `n` bytes from `src` to the end of `dest` */
    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    /* Add new null-terminating byte at the end of the concatenated string */
    *dest = '\0';

    /* Return a pointer to the resulting concatenated string */
    return result;
}
