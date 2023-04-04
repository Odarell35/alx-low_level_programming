#include "lists.h"
/**
 * *get_nodeint_at_index-  returns the nth node of a listint_t linked list.
 * @head: pointer pointing to another pointer
 * @index: is the index of the node, starting at 0
 * Return: the nth node or null if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *actual_node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	actual_node = head;
	for (i = 1; actual_node != NULL && i < index; i++)
	{
		actual_node = actual_node->next;
	}
	if (i == index && actual_node != NULL)
	{
		return (actual_node);
	}
	else
		return (NULL);
}
