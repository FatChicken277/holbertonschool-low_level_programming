#include "hash_tables.h"

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
	hash_node_t *new;

	if (strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);

	if (ht->array[idx] != NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		ht->array[idx]->key = (char *)key;
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = ht->array[idx];
		ht->array[idx] = new;

		return (1);
	}

	ht->array[idx] = malloc(sizeof(hash_node_t));
	if (!ht->array[idx])
		return (0);

	ht->array[idx]->key = (char *)key;
	ht->array[idx]->value = strdup(value);
	ht->array[idx]->next = NULL;

	return (1);
}
