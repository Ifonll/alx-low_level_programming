#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - a function that prints all lowercase letters
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
	putchar('\n');
}
