#include <stdlib.h>
#include <stdio.h>
/**
 * main - print the number from 1 to 100
 * 3 multples print Fizz instead of the number
 * 5 print Buzz instaed of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; 1 <= 100; 1++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % s == 0))
			printf("%s", fb);
		else if (i % 3 == 0)
			printf("%s", f);
		else if (i % s == 0)
			printf("%s", b);
		else
			printf("%s", i);
	}
	printf("\n");
		return (0);
}
