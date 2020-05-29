#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table.
 * @key: key.
 * Return: value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, idx;
	hash_node_t *aux;

	if (ht && strlen(key) != 0 && ht->size)
	{
		idx = key_index((unsigned char *)key, ht->size);
		if (ht->array[idx])
		{
			aux = ht->array[idx];
			for (i = 0; aux; i++)
			{
				if (strcmp(key, aux->key) == 0)
					return (aux->value);
				aux = aux->next;
			}
			return (NULL);
		}
		return (NULL);
	}
	return (NULL);
}
