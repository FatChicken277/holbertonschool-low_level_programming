#include "holberton.h"
/**
 *times_table - Do something
 *Return: Return something
 */
void times_table(void)
{
int c, n, op, c2;
n = 0;
c = 0;
for (c2 = 0; c2 < 10; c2++)
{
for (c = 0; c < 10; c++)
{
op = (n *c);
if (op > 9)
{
_putchar(44);
_putchar(32);
_putchar((char)((op / 10) + '0'));
_putchar((char)((op % 10) + '0'));
}
else
{
if (c > 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar((char)(op + '0'));
}
}
_putchar('\n');
c = 0;
n++;
}
}
