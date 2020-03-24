#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list.
 *@head: head.
 *Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *nodo = *head;

	if (*head == NULL)
	{
		return (i);
	}
	else
	{
		nodo = *head;
		i = nodo->n;
		*head = (*head)->next;
		free(nodo);
		return (i);
	}
}
