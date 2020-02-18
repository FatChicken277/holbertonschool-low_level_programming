#include "holberton.h"
/**
 *puts_half - do something
 *@str: do something
 *Return: something
 */
void puts_half(char *str)
{
int r, i, x;
x = 0;
for (i = 0; str[i] != '\0'; i++)
{
}
if (i % 2 == 0)
x = i / 2;
else
x = (i - 1) / 2;
for (r = x; r < i; r++)
{
_putchar(str[r]);
}
_putchar('\n');
}
