/*
 * File: 8-print_base16.c
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
  int digit = 48;

  while (digit <= 57)
  {
    putchar(digit);
    digit++;
  }

  digit = 97;

  while (digit <= 102)
  {
    putchar(digit);
    digit++;
  }

  putchar('\n');

  return (0);
}
