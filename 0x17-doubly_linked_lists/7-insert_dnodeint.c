#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_dlistint_at_index - insert node
 * @h: head
 * @idx: index
 * @n: data
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int count = 0;
   
	new_node =malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (*h == NULL || idx == 0)
	{
        	free(new_node);
        	return (NULL);
	}
	current = *h;
	count = 0;

	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new_node);
        	return (NULL);
		new_node->next = current;
	}
	if (current->prev != NULL)
	{
		current->prev->next = new_node;
	}
	else
	{
		*h = new_node;
	}
	current->prev = new_node;
return (new_node);
}
