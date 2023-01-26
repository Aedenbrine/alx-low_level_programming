#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the linked list
 * @head: double pointer to the list_t head list
 * @str: string to add to node
 * Return: the address of the new element, NULL upon failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
