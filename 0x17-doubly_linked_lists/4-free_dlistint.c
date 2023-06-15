#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head
 * Reurn: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
 
	while (current != NULL)
	{
		dlistint_t *next = current->next;
		free(current);
		current = next;
	}
}

