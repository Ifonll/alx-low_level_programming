#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculte the number of elements in a linked list.
 * @h: head of the liked list.
 *
 * Return: elements number .
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}