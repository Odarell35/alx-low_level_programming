#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: points to the first node
 * Return: sum of all the data or o if list empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == 0)
	{
		return (0);
	}
	temp = head;
	sum = 0;
	while (temp != 0)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
