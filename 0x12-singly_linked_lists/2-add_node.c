#include "lists.h"
/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head: pointer to head.
 *@str: string.
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;
	int i;
	char *p;

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
	nn->next = *head;

	*head = nn;
	return (*head);
}
