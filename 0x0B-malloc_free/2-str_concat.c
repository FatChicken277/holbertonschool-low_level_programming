#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings.
 *@s1: string.
 *@s2: string2.
 *Return: a pointer to the array, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *v;
	unsigned int i, size = 0, size2 = 0, size3 = 1, c = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		size++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		size2++;
	}

	size3 += size + size2;

	v = malloc(size3 * sizeof(char));

	if (v == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < size3; i++)
	{
		if (i < size)
		{
			v[i] = s1[i];
		}
		else
		{
			v[i] = s2[c];
			c++;
		}
	}

	v[i] = '\0';

	return (v);
}
