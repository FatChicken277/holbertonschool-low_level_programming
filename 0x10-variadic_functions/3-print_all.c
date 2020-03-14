#include "variadic_functions.h"
#include <stdio.h>
void funaux(int j);
/**
 *print_all - print n types;
 *@format: format;
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *p;

	va_start(list, format);
	while (format && format[j])
		j++;
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
		if (p == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", p);
			break;
		}
		i++;
		if (i != j)
			printf(", ");
	}
	funaux(j);
	va_end(list);
}

/**
 *funaux - print new line;
 *@j: size of format;
 */
void funaux(int j)
{
	switch (j != 0)
	{
	case 1:
	printf("\n");
		break;
	}
}
