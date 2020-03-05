#include "holberton.h"
#include <stdlib.h>
/**
 **_calloc - allocates memory for an array using malloc.
 *@nmemb: size.
 *@size: byte size.
 *Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *v;
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	v = malloc(nmemb * size);
	if (v == NULL)
	{
		return (NULL);
	}
	x = v;
	for (i = 0; i < nmemb; i++)
	{
		x[i] = 0;
	}
	return (v);
}
