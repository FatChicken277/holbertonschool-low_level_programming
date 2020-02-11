#include "holberton.h"
/**
 *print_last_digit - Do something
 *Return: Return something
 *@n: do something
 */
int print_last_digit(int n)
{
int mod;
mod = (n % 10);
if (mod < 0)
{
mod = mod * (-1);
_putchar((char)(mod + 48));
}
else
{
_putchar((char)(mod + 48));
}
return (mod);
}
