#include "lists.h"
/**
 *free_listint2 - frees a listint_t list.
 *@head: head.
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
		}
		else
		{
			free_listint2(&(*head)->next);
			free(*head);
		}
	}
	*head = NULL;
}
