/*
 * File: 4-print_alphabt.c
 * Auth: Alex
 */
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char letter = 'a';

  while (letter <= 'z')
  {
    if (letter != 'e' && letter != 'q')
      putchar(letter);
    letter++;
  }

  putchar('\n');

  return (0);
}
