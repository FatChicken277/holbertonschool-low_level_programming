#include "lists.h"
/**
 *free_listint2 - frees a listint_t list.
 *@head: head.
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo;

	while ((*head)->next)
	{
		nodo = (*head)->next;
		free(*head);
		*head = nodo;
	}
	free(*head);
	*head = NULL;
}
