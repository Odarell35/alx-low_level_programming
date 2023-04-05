#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 * @h: Pointer to pointer to the head of the linked list
 ** Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next_node;
	size_t i;

	current = *h;
	for (i = 0; current != NULL; i++)
	{
		next_node = current->next;
		free(current);
		current = next_node;
		if (next_node >= current)
		{
			break;
		}
	}
	*h = NULL;
return (i);
}

