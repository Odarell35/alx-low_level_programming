#include "lists.h"
/**
 * pop_listint- deletes head node and returns its data
 * @head: pointer that points to another pointer
 * Return: data of the deleted node or 0 if list empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp_var;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp_var = *head;
	*head = (*head)->next;
	free(temp_var);
	return (n);
}
