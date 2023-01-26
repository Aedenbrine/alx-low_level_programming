#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: linked list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
