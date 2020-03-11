#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - given as a parameter on each element of an array.
 *@array: int array.
 *@size: size of array.
 *@action: function to print.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && size && array)
	{
		for (i = 0; i < size; i++)
		{
			(*action) (array[i]);
		}
	}
}
