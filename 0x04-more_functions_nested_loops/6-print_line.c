#include "holberton.h"
/**
 *print_line - Do something
 *Return: Return something
 *@n: do something
 */
void print_line(int n)
{
int c;
for (c = 0; c < n ; c++)
{
if (n <= 0)
_putchar('\n');
if (n > 0)
_putchar('_');
}
_putchar('\n');
}
