#include "holberton.h"
#include <stdlib.h>
/**
 **array_range - creates an array of integers.
 *@min: min int.
 *@max: max int.
 *Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, re;

	re = max + 1 - min;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(re * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < re; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
