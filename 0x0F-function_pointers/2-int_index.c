#include "function_pointers.h"
/**
 *int_index - searches for an integer.
 *@array: int array.
 *@size: size of array.
 *@cmp: verification function.
 *Return: returns the index of the first element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, o = 0;

	if (!(array && cmp))
	{
		return 0;
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size && o != 1; i++)
	{
		o = (*cmp) (array[i]);
	}
	i--;

	if (o == 0)
	{
		return (-1);
	}
	return (i);
}
