#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
list_t temp;
temp = head;
while(temp != 0)
temp = temp->next;
free(temp->str);
free(temp);
}
