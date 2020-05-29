#include "hash_tables.h"

/**
 * hash_table_print - that prints a hash table.
 * @ht: hash table.
 * Return: if ht is NULL, don’t print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j;
	hash_node_t *aux;
	char *sep = "";

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (i == 0)
			printf("{");
		aux = ht->array[i];
		for (j = 0; aux; j++)
		{
			if (aux->key)
			{
				printf("%s'%s': '%s'", sep, aux->key, aux->value);
				sep = ", ";
			}
			aux = aux->next;
		}
	}
	printf("}\n");
}
