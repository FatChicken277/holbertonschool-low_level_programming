#include "holberton.h"
/**
 *print_sign - Do something
 *Return: Return something
 *@n: do something
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
