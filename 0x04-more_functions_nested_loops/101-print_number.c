#include "holberton.h"
/**
 * print_number - do something
 *@n: do something
 * Return: something
 */
void print_number(int n)
{
unsigned int numero = n;
if (n < 0)
{
_putchar('-');
numero = numero * (-1);
}
if (numero / 10)
print_number(numero / 10);
_putchar((numero % 10) + '0');
}
