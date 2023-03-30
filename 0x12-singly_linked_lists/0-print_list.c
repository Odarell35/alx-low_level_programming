#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer pointer to the first node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nill)");
	}
	else
	{
		while (h != 0)
	{
		printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	}
	return (count);
}

