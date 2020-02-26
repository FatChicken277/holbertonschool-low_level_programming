#include "holberton.h"
/**
 *factorial - factorial of a given number.
 *@n: number.
 *Return: factorial of n.
 */
int factorial(int n)
{
int i = 1;
if (n == 0)
return (1);
else if (n < 0)
return (-1);
if (n > 0)
i = n * factorial(n - 1);
return (i);
}
