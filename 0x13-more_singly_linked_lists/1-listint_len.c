#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer that points to the first node
 * Return: number of nodes/elements
 */
size_t listint_len(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h != 0)
	{
		length++;
		h = h->next;
	}
return (length);
}
