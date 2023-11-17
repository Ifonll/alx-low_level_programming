#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the first node .
 */
void free_list(list_t *head)
{
	list_t *cur, *next;

	current = head;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur->str);
		free(cur);
		cur = next;
	}
}