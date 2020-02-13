#include "holberton.h"
/**
 *print_most_numbers - Do something
 *Return: Return something
 */
void print_most_numbers(void)
{
int cont;
for (cont = 0; cont < 10; cont++)
{
if (!(cont == 2 || cont == 4))
_putchar(cont + 48);
}
_putchar('\n');
}
