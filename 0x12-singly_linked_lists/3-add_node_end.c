#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: Address of the first node of a list
 * @str: Address of the string to insert into the new body
 * Return: Address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;


	new_node = malloc(sizeof(size_t));
	if (new_node == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node->len = len;
	new_node->str = strdup(str);
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
