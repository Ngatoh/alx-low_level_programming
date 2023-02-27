#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @s: Pointer to string to reverse
 */
void rev_string(char *s)
{
  int len = 0;
  char tmp;

  /* Get length of string */
  while (*(s + len))
    len++;

  /* Swap characters from opposite ends of string */
  for (int i = 0; i < len / 2; i++)
  {
    tmp = *(s + i);
    *(s + i) = *(s + len - i - 1);
    *(s + len - i - 1) = tmp;
  }
}
