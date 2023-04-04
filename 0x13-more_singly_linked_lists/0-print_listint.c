#include "lists.h"
/**
 * print_listint - prints all elements in the list
 * @h: - points to the first node
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/*listint_t *temp;*/
	size_t count;

	count = 0;
	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
	count++;
	}
return (count);
	if (h == 0)
	{
		return (0);
	}
}
