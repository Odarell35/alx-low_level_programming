#include "lists.h"

/**
 * print_listint_safe - Prints a linked list safely
 * @head: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *current, *temp;

	current = head;
	temp = NULL;

	i = 0;
	for (; current != NULL; current = current->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		i++;

	if (current <= current->next)
	{
		temp = current->next;
		for (; temp != NULL && temp < current; temp = temp->next)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);

			i++;
		}
			break;
	}
	}
return (i);
}
