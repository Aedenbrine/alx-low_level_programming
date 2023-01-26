#include "lists.h"

/**
 * print_list - prints out linked list elements
 * @h: list
 * Return: number of items returned
 */

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
