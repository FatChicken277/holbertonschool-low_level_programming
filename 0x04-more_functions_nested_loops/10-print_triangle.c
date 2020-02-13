#include "holberton.h"
/**
 *print_triangle - Do something
 *Return: Return something
 *@size: do something
 */
void print_triangle(int size)
{
int contador, contador2, contador3;
if (size <= 0)
_putchar('\n');
for (contador = size; contador > 0; contador--)
{
for (contador2 = 1; contador2 < contador; contador2++)
{
_putchar(' ');
}
for (contador3 = size; contador3 >= contador; contador3--)
{
_putchar('#');
}
_putchar('\n');
}
}
