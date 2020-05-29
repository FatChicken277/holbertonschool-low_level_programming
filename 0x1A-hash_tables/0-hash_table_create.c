#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size > 0)
	{
		new = malloc(sizeof(hash_table_t));
		if (!new)
			return (NULL);

		new->size = size;
		new->array = malloc(sizeof(hash_node_t *) * new->size);
		if (!new->array)
		{
			free(new);
			return (NULL);
		}
		return (new);
	}
	return (NULL);
}
