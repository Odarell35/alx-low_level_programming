#include "lists.h"
/**
 * free_listint2- free the listint_t list
 * @head: pointer pointing to another pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *current_node;

	if (*head == NULL)
	{
	*head = NULL;
	}
	current_node = *head;
	for (; current_node != NULL; )
	{
		temp = current_node->next;
		free(current_node);
		current_node = temp;
	}
	*head = NULL;
}
