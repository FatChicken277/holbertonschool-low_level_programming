#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position.
 *@head: head.
 *@idx:	index of the list where the new node should be added.
 *@n: number.
 *Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, x = 0;
	listint_t *nodo;
	listint_t *nodop = *head;
	listint_t *cont = *head;

	while (cont)
	{
		cont = cont->next;
		x++;
	}
	if (idx > x)
	{
		return (NULL);
	}
	nodo = malloc(sizeof(listint_t));
	if (nodo == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		nodo->next = *head;
		nodo->n = n;
		*head = nodo;
		return (nodo);
	}
	while (i < idx - 1 && nodop->next)
	{
		nodop = nodop->next;
		i++;
	}
	nodo->n = n;
	nodo->next = nodop->next;
	nodop->next = nodo;
	return (nodo);
}
