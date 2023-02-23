/**
 * main - entry point for the program
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
long int num = 612852475143;
long int i;

while (num % 2 == 0)
{
num /= 2;
i = 2;
}

for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
num /= i;
if (i > 2)
{
i += 2;
}
}
}

if (num > 2)
{
printf("%ld\n", num);
}
else
{
printf("%ld\n", i - 2);
}

return (0);
}
