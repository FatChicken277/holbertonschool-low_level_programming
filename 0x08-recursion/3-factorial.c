#include "holberton.h"
/**
 *factorial - factorial of a given number.
 *@n: number.
 *Return: factorial of n.
 */
int factorial(int n)
{
int i = 0;
if (n > 0)
{
i = n * factorial(n - 1);
}
else if (n == 0)
return (1);
else
return (i);
}
