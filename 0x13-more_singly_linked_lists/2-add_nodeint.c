#include "lists.h"
/**
 * *add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: ponter that points to another pointer that points to first node
 * @n: element in the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;

		if (new_node->next != *head)
		{
			return (NULL);
		}
		return (new_node);
}

