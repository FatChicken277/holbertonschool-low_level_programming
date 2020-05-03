
#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index of a linked list.
 *@head: head.
 *@index: index.
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *new;
	unsigned int i = 0;

	if (*head != NULL)
	{
		aux = *head;
		new = *head;
		if (index == 0)
		{
			aux = aux->next;
			free(*head);
			(*head) = aux;
			return (1);
		}
		for (i = 0; i < index; i++, aux = aux->next)
		{
			if (aux == 0)
				return (-1);
			if (i < index - 1)
				new = new->next;
		}
		new->next = aux->next;
		new->prev = aux->prev;
		free(aux);
		return (1);
	}
	return (-1);
}