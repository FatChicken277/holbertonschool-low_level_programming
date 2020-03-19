#include "lists.h"

/**
 *add_node -  adds a new node at the end of a list_t list.
 *@head: pointer to head.
 *@str: string.
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *p;
	int i;
	list_t *nn  = NULL, *aux = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	nn = malloc(sizeof(list_t));
	if (nn == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	p = strdup(str);
	nn->str = p;
	nn->len = i;
	nn->next = NULL;
	if (*head == NULL)
	{
		*head = nn;
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = nn;
	return (*head);
}
