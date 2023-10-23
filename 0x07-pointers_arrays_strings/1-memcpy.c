#include "main.h"
#include <string.h>

/**
* _memcpy - copies memory area
* @n: bytes to be copied
* @src: source of bytes
* @dest: destination of bytes
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
