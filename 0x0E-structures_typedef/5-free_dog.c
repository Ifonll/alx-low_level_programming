#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function frees dog
 * @d: a dog structure
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
