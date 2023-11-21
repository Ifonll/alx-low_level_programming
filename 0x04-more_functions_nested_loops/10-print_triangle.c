#include "main.h"

/**
 * print_triangle - a function prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int k, j;

		for (k = 1; k <= size; k++)
		{
			for (j = k; j < size; k++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= k; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
