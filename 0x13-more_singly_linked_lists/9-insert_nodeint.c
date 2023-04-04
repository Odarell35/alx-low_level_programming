#include "lists.h"
/**
 * *insert_nodeint_at_index -  function that inserts a new
 * node at a given position.
 * @head:pointer that points to another pointer
 * @idx:the index of the list where the new node should be
 * added. Index starts at 0
 * @n:integer
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current, *prev_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	current = *head;
	prev_node = NULL;
	i = 0;
	while (i < idx && current != NULL)
	{
		prev_node = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		{
		prev_node->next = new_node;
		}
	else
	{
		new_node->next = current;
	}
	if (prev_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		prev_node->next = new_node;
	}
	return (new_node);
}
