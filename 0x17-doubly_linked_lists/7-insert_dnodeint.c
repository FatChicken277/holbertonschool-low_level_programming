#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: head-
 * Return: returns the number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t index = 0;

	for (index = 0; h != NULL; index++)
	{
		h = h->next;
	}
	return (index);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index.
 * @n: data.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *aux = *h, *new;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(&(*h), n));
	i = dlistint_len(*h) - 1;
	if (i == 0)
		i++;
	if (idx == i)
		return (add_dnodeint_end(&(*h), n));
	if (idx > i)
		return (NULL);
	for (i = 0; aux && i < idx; i++)
		aux = aux->next;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = aux->next;
	new->prev = aux->prev;
	aux->prev->next = new;
	aux->next->prev = new;

	return (new);
}
