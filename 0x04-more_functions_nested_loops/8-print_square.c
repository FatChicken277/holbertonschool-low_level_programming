#include "holberton.h"
/**
 *print_square - Do something
 *Return: Return something
 *@n: do something
 */
void print_square(int n)
{
int c, c2;
if (n <= 0)
{
_putchar('\n');
}
for (c = 0; c < n; c++)
{
for (c2 = 0; c2 < n; c2++)
{
_putchar('#');
}
_putchar('\n');
}
}
