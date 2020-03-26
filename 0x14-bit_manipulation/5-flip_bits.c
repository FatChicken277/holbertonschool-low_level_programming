#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need.
 * @n: number.
 * @m: is the index, starting from 0 of the bit you want to set.
 * Return: the number of bits you would need.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0;
	unsigned long int i;

	for (i = 0; i <= ((sizeof(n) * 8) - 1); i++)
	{
		if (((n ^ m) >> i) & 1)
			cont++;
	}

	return (cont);
}
