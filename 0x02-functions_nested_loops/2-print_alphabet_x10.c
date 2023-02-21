#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
    int i, letter;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';

        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        _putchar('\n');
    }
}
