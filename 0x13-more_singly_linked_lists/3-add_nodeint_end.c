#include "lists.h"
/**
 *add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: head.
 *@n: number.
 *Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodo_aux = *head;
	listint_t *nodo = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		return (NULL);
	}

	nodo->n = n;
	nodo->next = NULL;

	if (*head == NULL)
	{
		*head = nodo;
		return (*head);
	}

	while (nodo_aux->next)
	{
		nodo_aux = nodo_aux->next;
	}
	nodo_aux->next = nodo;

	return (*head);
}
