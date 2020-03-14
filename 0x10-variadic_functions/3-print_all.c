#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_all - print n types;
 *@format: format;
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 1;
	char *p;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'i':
		printf("%d", va_arg(list, int));
			break;
		case 'c':
		printf("%c", va_arg(list, int));
			break;
		case 'f':
		printf("%f", va_arg(list, double));
			break;
		case 's':
		p = va_arg(list, char *);
		if (p != NULL)
		{
			printf("%s", p);
			break;
		}
			printf("(nil)");
			break;
		default:
		j = 0;
		}
		if (format[i + 1] != '\0' && j)
			printf(", ");
		i++;
		j++;
	}
	printf("\n");
	va_end(list);
}
