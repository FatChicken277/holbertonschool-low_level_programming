#include "lists.h"
/**
 *free_list - frees a list_t list.
 *@head: pointer to head.
 */
void free_list(list_t *head)
{
	list_t *ant;

	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		ant = head->next;
		free(head->str);
		free(head);
		head = ant;
	}
	free(head->str);
	free(head);
}
