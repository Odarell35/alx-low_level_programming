#include "lists.h"
/**
 * free_listint- frees listint_t list.
 * @head: points to first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
	free(temp);
	}
}


