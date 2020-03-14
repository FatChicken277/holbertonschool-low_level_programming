#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - print n strings;
 *@n: number of strings
 *@separator: char separator;
 */


void print_all(const char * const format, ...)
{
	va_list list;
	va_list list2;
	va_list list3;
	va_list list4;


	int i = 0, j = 0;

	va_start(list, format);
	va_start(list2, format);
	va_start(list3, format);
	va_start(list4, format);

while (format[j] != '\0')
{
	j++;
}
j--;

printf("%d", j);

	while (format[i] != '\0')
	{
		if (i < j)
		{

			switch (format[i])
			{
			case 'i': printf("%d, ", va_arg(list, int));
				break;
			case 'c': printf("%c, ", va_arg(list2, int));
				break;
			case 'f': printf("%f, ", va_arg(list3, double));
				break;
			case 's': printf("%s, ", va_arg(list4, char *));
				break;
			}
		}

		if (i == j)
		{
			switch (format[i])
			{
			case 'i': printf("%d", va_arg(list, int));
				break;
			case 'c': printf("%c", va_arg(list2, int));
				break;
			case 'f': printf("%f", va_arg(list3, double));
				break;
			case 's': printf("%s", va_arg(list4, char *));
				break;
			}
		}

		
		i++;
	}
	printf("\n");
	va_end(list);
	va_end(list2);
	va_end(list3);
	va_end(list4);

}

