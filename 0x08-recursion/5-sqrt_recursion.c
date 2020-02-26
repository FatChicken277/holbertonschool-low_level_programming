#include "holberton.h"
int _funaux(int n, int x);
/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number.
 *Return: square root of n.
 */
int _sqrt_recursion(int n)
{
int x = 1;
return (_funaux(n, x));
}
/**
 *_funaux - returns a value to _sqrt_recursion function.
 *@n: number.
 *@x: auxiliary variable.
 *Return: returns a value to _sqrt_recursion function.
 */
int _funaux(int n, int x)
{
if (x > n)
{
return (-1);
}
if (x * x == n)
{
return (x);
}
else
{
return (_funaux(n, x + 1));
}
}
