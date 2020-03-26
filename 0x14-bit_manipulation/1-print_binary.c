#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	int c, a, l;
	unsigned long int x = n;

	for (l = 0; x; l++)
	{
		x = x >> 1;
	}
	l--;
	for (c = l; c >= 0; c--)
	{
		a = n >> c;
		if (a & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	if (l == -1)
	{
		a = n >> c;
		if (a & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
