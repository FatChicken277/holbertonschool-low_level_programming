#include <stdio.h>

/**
 * linear_search - Searches for a value in an array (Linear search)
 * @array: int array.
 * @size: size of array.
 * @value: value to search in the array.
 * Return: index of occurrence or -1 if not found or array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
