#include "holberton.h"
#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments.
 *@ac: number of arguments passed.
 *@av: pointer array which points to each argument passed.
 *Return: a pointer to the array, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, c = 0;
	char *v;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	v = malloc(ac * sizeof(char *) + 1);
	if (v == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			v[c] = av[i][j];
			c++;
		}
		v[c] = '\n';
		c++;
	}
	return (v);
}
