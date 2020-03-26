#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c = 0, a, l;
	unsigned long int x = n;

	if (index == 0)
	{
		a = n >> c;
		if (a & 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (-1);
	}
	for (l = 0; x; l++)
	{
		x = x >> 1;
	}
	l--;
	if (index > l)
	{
		return (-1);
	}
	for (c = l; c >= index; c--)
	{
		a = n >> c;
	}
	if (a & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
