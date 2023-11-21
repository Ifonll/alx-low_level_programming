#include "variadic_functions.h"
#include <stdarg.h>
/**
 * Variadic function - a function that returns the sum of all its parameters
 * va_list - a fuction in library stdarg
 * va_satrt - a fuction in library stdarg
 * va_end - a fuction in library stdarg
 * @num: a parameter of integer type
 * @i: an integer
 * Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
