#include "holberton.h"
#include <stdlib.h>
/**
 **malloc_checked - allocates memory using malloc.
 *@b: malloc size.
 *Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *v;

	v = malloc(b);
	if (v == NULL)
	{
		exit(98);
	}
	return (v);
}
