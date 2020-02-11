#include "holberton.h"
/**
 *print_last_digit - Do something
 *Return: Return something
 *@n: do something
 */
int print_last_digit(int n)
{
int mod;
if (n < 0)
{
n = (n * (-1));
}
mod = (n % 10);
_putchar(mod + 48);
return (mod);
}
