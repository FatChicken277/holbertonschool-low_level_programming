#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: head.
 * @index: index.
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
