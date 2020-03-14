#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - print n strings;
 *@n: number of strings
 *@separator: char separator;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;
	char *p;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(list, char *);

		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");

	va_end(list);
}
