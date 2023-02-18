/*
 * File: 0-positive_or_negative.c
 * Auth: Alex
 */


#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Program to generate a random number
 * and display whether it is positive,
 * negative or zero
 */
int main(void)
{
int n;
/* 
 * Seed the random number 
 * generator with the current time
 */
srand(time(0));
/* 
 * Generate a random integer
 * between -RAND_MAX/2 and RAND_MAX/2
 */
n = rand() - RAND_MAX / 2;
/* 
 * Print the value of the random 
 * number generated
 */
printf("%d is ", n);
/* 
 * Check whether the value of n is positive, zero or negative
 * and print the appropriate message accordingly
 */
if (n > 0)
{
printf("positive\n");
}
else if (n == 0)
{
printf("zero\n");
}
else
{
printf("negative\n");
}
/* 
 * Indicate that the program has executed 
 * successfully and return 0 to the operating system
 */
return (0);
}
