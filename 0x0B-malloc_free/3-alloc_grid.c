#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width.
 *@height: height.
 *Return: a pointer to the array, or NULL if it fails.
 */
int **alloc_grid(int width, int height)
{
	int **v;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	v = malloc(height * sizeof(int *));
	if (v == '\0')
	{
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		v[i] = malloc(width * sizeof(int));
		if (v[i] == '\0')
		{
			for (j = 0; j < i; j++)
			{
				free(v[j]);
			}
			free(v);
			return ('\0');
		}
		for (j = 0; j < width; j++)
		{
			v[i][j] = 0;
		}
	}
	return (v);
}
