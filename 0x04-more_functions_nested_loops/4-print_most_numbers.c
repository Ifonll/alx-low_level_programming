#include "main.h"

/**
 * print_most_numbers - a function prints the numbers, from zero to nine,
 * except two and four, followed by a new line
 */
void print_most_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		if (k != 2 && k != 4)
		{
			_putchar(k + '0');
		}
	}

	_putchar('\n');
}
