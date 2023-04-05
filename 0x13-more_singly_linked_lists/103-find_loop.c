#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of the linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *previous, *next_n;

	previous = next_n = head;

	while (previous && next_n && next_n->next)
	{
		previous = previous->next;
		next_n = next_n->next->next;

	if (previous == next_n)
	{
		previous = head;

	while (previous != next_n)
	{
		previous = previous->next;
		next_n = next_n->next;
	}
		return (previous);
	}
	}
return (NULL);
}

