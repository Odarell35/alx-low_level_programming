#include "lists.h"
/**
 * delete_nodeint_at_index -deletes the node at index
 * index of a listint_t linked list.
 * @index: is the index of the node that should be deleted. Index starts at 0
 * @head: pointer pointing to first node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next_node;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	return (1);
	}
	else
	{
		return (-1);
	}
	i = 1;
	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
		if (i == index)
		{
			next_node = temp->next;
			temp->next = next_node->next;
			free(next_node);
				return (1);
		}
	else
	{
		return (-1);
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
}
