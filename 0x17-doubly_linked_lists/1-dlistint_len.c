#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len -  prints all the elements of a dlistint_t list.
 * @h: head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t num_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		num_nodes++;
	}
return (num_nodes);
}
