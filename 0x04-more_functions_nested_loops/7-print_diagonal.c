#include "holberton.h"
/**
 *print_diagonal - Do something
 *Return: Return something
 *@n: do something
 */
void print_diagonal(int n)
{
int c, c2;
if (n <= 0)
{
_putchar('\n');
}
for (c = 0; c < n; c++)
{
for (c2 = 0; c2 < c; c2++)
{
_putchar(' ');
}
if (n > 0)
{
_putchar(92);
_putchar('\n');
}
}
}
