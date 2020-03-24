#include "lists.h"
/**
 *free_listint - frees a listint_t list.
 *@head: head.
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next == NULL)
		{
			free(head);
		}
		else
		{
			free_listint(head->next);
			free(head);
		}
	}
}
