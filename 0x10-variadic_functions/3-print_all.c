#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - print n strings;
 *@n: number of strings
 *@separator: char separator;
 */

void operacion(void *a)
{
	printf("%c", *(char *)a);
}

void operacion2(void *a)
{
	printf("%d", *(int *)a);
}

void operacion3(void *a)
{
	printf("%f", *(float *)a);
}

void operacion4(void *a)
{
	printf("%s", *(char **)a);
}

typedef struct op
{
    char *op;
    void (*f)(void *);
} formato;

void print_all(const char * const format, ...)
{
    va_list list;
    int i = 0, j = 0;
	void *x;

    formato ops[] = {
    {"c", operacion},
    {"i", operacion2},
    {"f", operacion3},
    {"s", operacion4},
    {"\0", operacion},
    {NULL, NULL}
    };

    va_start(list, format);

    while (format[i] != '\0')
    {
        j = 0;

        while ((format[i] != ops[j].op[0]) && (ops[j].op[0] != '\0'))
        {
            j++;
        }

        if (format[i] == ops[j].op[0])
        {
			x = va_arg(list, void *);
            ops[j].f(&x);

			if (format[i+1] == '\0')
			{
				printf("\n");
				break;
			}

			printf(", ");

        }

        i++;
    }

    va_end(list);

}
