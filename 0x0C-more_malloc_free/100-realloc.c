#include "holberton.h"
#include <stdlib.h>
/**
 **_realloc - reallocates memory using malloc.
 *@ptr: pointer to allocate memory block.
 *@old_size: old size.
 *@new_size: new size.
 *Return: pointer to the reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p2 = ptr, *p1 = ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	p1 = malloc(new_size);
	if (p1 == NULL)
	{
		return (NULL);
	}
	if (ptr == 0)
	{
		return (p1);
	}
	for (i = 0; i < new_size && i < old_size; i++)
	{
		p1[i] = p2[i];
	}
	free(ptr);
	return (p1);
}
