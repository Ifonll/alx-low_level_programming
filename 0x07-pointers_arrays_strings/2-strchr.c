#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: input string.
 * @c: input character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
