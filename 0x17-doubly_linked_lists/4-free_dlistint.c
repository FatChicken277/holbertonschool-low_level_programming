#include "lists.h"
/**
 * free_dlistint - free a list.
 * @head: head.
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
