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
