#include "holberton.h"
#include <stdlib.h>
/**
 **string_nconcat - concatenates two strings.
 *@s1: string 1.
 *@s2: string 2.
 *@n: n bytes of string 2.
 *Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *v;
	unsigned int i, size = 0, size2 = 0, size3 = 0, c = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		size++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		if (i < n)
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
