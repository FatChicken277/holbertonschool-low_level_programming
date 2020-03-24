#include "lists.h"
/**
 *reverse_listint - reverses a listint_t linked list.
 *@head: head.
 *Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nodo_ant;
	listint_t *nodo_sig;

	nodo_ant = NULL;

	while (*head)
	{
		nodo_sig = (*head)->next;
		(*head)->next = nodo_ant;
		nodo_ant = *head;
		*head = nodo_sig;
	}
	*head = nodo_ant;
	return (*head);
}