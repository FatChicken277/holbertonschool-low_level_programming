#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index of a linked list.
 *@head: head.
 *@index: int node index.
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodop, *nodo;
	unsigned int i = 0;

	if (*head != NULL)
	{
		nodop = *head;
		nodo = *head;
		if (index == 0)
		{
			nodop = nodop->next;
			free(*head);
			(*head) = nodop;
			return (1);
		}
		while (i < index)
		{
			if (nodop == 0)
			{
				return (-1);
			}
			if (i < index - 1)
			{
				nodo = nodo->next;
			}
			nodop = nodop->next;
			i++;
		}
		nodo->next = nodop->next;
		free(nodop);
		return (1);
	}
	return (-1);
}
