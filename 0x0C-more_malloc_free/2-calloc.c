#include "holberton.h"
#include <stdlib.h>
void *_memset(char *s, int b, unsigned int n);

/**
 **_calloc - allocates memory for an array using malloc.
 *@nmemb: size.
 *@size: byte size.
 *Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *v;

	if (nmemb == 0 || size == 0)
		return (NULL);
	v = malloc(nmemb * size);
	_memset(v, 0, nmemb);
	if (v == NULL)
	{
		return (NULL);
	}
	return (v);
}

/**
 **_memset - fills memory with a constant byte.
 *Return: the function returns a char.
 *@s: This is a pointer to the block of memory to fill.
 *@b: This is the value to be set.
 *@n: This is the number of bytes to be set to the value.
 */
void *_memset(char *s, int b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r != n; r++)
	{
		s[r] = b;
	}
	return (s);
}
