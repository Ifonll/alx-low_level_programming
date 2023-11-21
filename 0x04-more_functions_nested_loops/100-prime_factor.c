#include <stdio.h>
#include <math.h>

/**
 * main - a function finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int k;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (k = 3; k <= sqrt(n); k = k + 2)
	{
		while (n % k == 0)
		{
			max = k;
			n = n / k;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
