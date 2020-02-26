#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y.
 *@x: This is the base value.
 *@y: This is the power value.
 *Return: pow.
 */
int _pow_recursion(int x, int y)
{
int i;
if (y > 0)
{
i = x * _pow_recursion(x, y - 1);
}
else if (y == 0)
return (1);
else
return (-1);
return (i);
}
