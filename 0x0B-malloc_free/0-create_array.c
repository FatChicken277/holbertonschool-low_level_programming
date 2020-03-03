#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars.
 *@size: size of array.
 *@c: char.
 *Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	v = malloc(size * sizeof(char));

	if (v == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		v[i] = c;
	}

	return (v);
}
