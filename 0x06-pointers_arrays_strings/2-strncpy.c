#include "main.h"

/* _strncpy.c */
char *_strncpy(char *dest, const char *src, int n)
{
    char *result = dest;

    /* Copy up to `n` bytes from `src` to `dest` */
    while (n > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        n--;
    }

    /* If `src` is shorter than `n`, fill the remaining bytes with null characters */
    while (n > 0) {
        *dest = '\0';
        dest++;
        n--;
    }

    /* Return a pointer to the resulting copied string */
    return result;
}
