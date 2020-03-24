#include "lists.h"
/**
 *sum_listint - sum of all the data (n) of a listint_t linked list.
 *@head: head.
 *Return: the sum, if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int i;

	if (head)
	{
		i = head->n;
		return (i + sum_listint(head->next));
	}
	return (0);
}
