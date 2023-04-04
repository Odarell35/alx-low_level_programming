#include "lists.h"
/**
 * *reverse_listint - reverses a listint_t linked list.
 * @head:pointer that points to another pointer pointing to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_node, *next_node;

	if (*head == NULL)
		return (NULL);

	curr_node = 0;
	next_node = *head;
	while (next_node != NULL)
	{
		next_node = next_node->next;
		(*head)->next = curr_node;
		curr_node = *head;
		*head = next_node;
	}
		*head = curr_node;
		return (*head);
}

