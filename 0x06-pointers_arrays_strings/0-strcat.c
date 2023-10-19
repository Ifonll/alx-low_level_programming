#include "main.h"

/**
* _strcat - to concatenates two strings
* @dest: the first array
* @src: the second array
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int c, c2;
for (c = 0; dest[c]; c++)
for (c2 = 0; src[c2]; c2++)
dest[c++] = src[c2];
dest[c] = '\0';

return (dest);
}
