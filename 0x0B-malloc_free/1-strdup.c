#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - copy of the string given.
 *@str: string.
 *Return: a pointer to the array, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *v;
	unsigned int i, size = 1;

	if (str == '\0')
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	v = malloc(size * sizeof(char));

	if (v == '\0')
	{
		return ('\0');
	}

	i = 0;

	for (i = 0; i < size; i++)
	{
		v[i] = str[i];
	}

	v[i] = '\0';

	return (v);
}
