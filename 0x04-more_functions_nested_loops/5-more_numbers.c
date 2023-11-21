#include "main.h"

/**
 * more_numbers - a function prints ten times the numbers, from zero to fourteen
 * followed by a new line
 */
void more_numbers(void)
{
	int k, j;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
