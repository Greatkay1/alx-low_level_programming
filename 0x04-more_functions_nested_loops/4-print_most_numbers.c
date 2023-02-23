#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, 0 to 9
 *
 * Return: 0-9 except 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; 1 <= 9; 1++)
	{
		if ((i == 2) || (i == 4))
			continue;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
