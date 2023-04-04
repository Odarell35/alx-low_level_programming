#include "lists.h"
/**
 * *insert_nodeint_at_index -  function that inserts a new 
 * node at a given position.
 * @head:pointer that points to another pointer 
 * @idk:the index of the list where the new node should be added. Index starts at 0
 * @n:integer
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp
