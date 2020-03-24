#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: head.
 *@index: int node index.
 *Return: returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next != NULL)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
