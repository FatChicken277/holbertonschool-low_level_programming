#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *aux;

	if (!ht)
		return;
	if (!ht->array || !ht->size)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			aux = ht->array[i];
			while (aux)
			{
				tmp = aux->next;
				if (aux->key)
					free(aux->key);
				if (aux->value)
					free(aux->value);
				free(aux);
				aux = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
