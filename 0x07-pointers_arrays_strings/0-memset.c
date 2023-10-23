#include "main.h"
#include <string.h>

/**
* _memset - to fill with a constant byte
* @n: a memory address
* @s: a pointer
* @b: a constant
* Return: (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
