#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - print n numbers;
 *@n: number of args
 *@separator: char separator;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));

		if (i < n - 1)
			if (separator != NULL)
			{
				printf("%s", separator);
			}

		else
			printf("\n");
	}

	va_end(list);
}
