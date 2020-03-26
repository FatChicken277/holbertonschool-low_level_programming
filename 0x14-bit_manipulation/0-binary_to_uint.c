#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a, x, j = 0, z = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
		;
		x--;
	for (i = x; i >= 0; i--)
	{
		if ((b[i] != '1' && b[i] != '0'))
		{
			return (0);
		}
		else
		{
			if (b[i] == '1')
			{
				a = 1;
				a <<= j;
				z += a;
			}
			if (b[i] == '0')
			{
				a = 0;
				a <<= j;
			}
		}
		j++;
	}
	return (z);
}
