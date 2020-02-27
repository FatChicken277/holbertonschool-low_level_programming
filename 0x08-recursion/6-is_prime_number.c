#include "holberton.h"
int _funaux(int n, int x);
/**
 *is_prime_number - returns 1 if n is a prime number.
 *@n: number.
 *Return: returns 1 if n is a prime number and 0 else not.
 */
int is_prime_number(int n)
{
if (n <= 0)
return (0);
else
return (_funaux(n, n - 1));
}
/**
 *_funaux - returns a value to is_prime_number function.
 *@n: number.
 *@x: auxiliary variable.
 *Return: returns a value to is_prime_number function.
 */
int _funaux(int n, int x)
{
if (x == 2)
return (1);
if (x <= 1)
return (0);
if (n % x == 0)
return (0);
else
return (_funaux(n, x - 1));
}
