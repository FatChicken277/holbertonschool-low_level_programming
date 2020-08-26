#include <stdio.h>

/**
 * binary_search - Searches for a value in an array (Binary search)
 * @array: int array.
 * @size: size of array.
 * @value: value to search in the array.
 * Return: index of occurrence or -1 if not found or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1, left = 0, mid, i;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
