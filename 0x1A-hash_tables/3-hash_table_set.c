#include "hash_tables.h"
int node_create(hash_table_t *ht, unsigned long int idx,
const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: array.
 * @key: key.
 * @value: value.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0, a;
	hash_node_t *aux = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[idx];
	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
		{
			if (aux->value != NULL)
				free(aux->value);
			aux->value = strdup(value);
			if (aux->value == NULL)
				return (0);
			return (1);
		}
		aux = aux->next;
	}
	a = node_create(ht, idx, key, value);
	if (a == 0)
		return (0);
	return (1);
}

int node_create(hash_table_t *ht, unsigned long int idx,
const char *key, const char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	if (ht->array[idx] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
