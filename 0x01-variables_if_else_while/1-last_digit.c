#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  Entry point
 * Desscription: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: Always 0
 */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %i is %i and is 0\n", n, last);
else if (last < 6)
printf("Last digit of %i is %i and is less tha 6 and not 0\n", n, last);
return (0);
}
