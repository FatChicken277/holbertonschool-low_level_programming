#include "hash_tables.h"
int add_node(hash_node_t *head, const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: array.
 * @key: key.
 * @value: value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (add_node(ht->array[idx], key, value) == 0)
		return (0);
	return (1);
}

/**
 * add_node - adds a new node.
 * @head: head.
 * @key: key.
 * @value: value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *new, *aux = head;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = (char *)key;
	new->value = (char *)value;
	new->next = NULL;

	if (!head)
	{
		head = new;
		return (1);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;

	return (1);
}
