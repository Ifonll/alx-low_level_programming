#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int i, j, d, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (d = 0; d < i; d++)
		strout[d] = s1[d];

	limit = j;
	for (j = 0; j <= limit; d++, j++)
		strout[d] = s2[j];

	return (strout);
}
