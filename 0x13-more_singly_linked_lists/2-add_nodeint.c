#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of a listint_t list.
 *@head: head.
 *@n: number.
 *Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		return (NULL);
	}

	nodo->n = n;
	nodo->next = *head;
	*head = nodo;

	return (*head);
}
