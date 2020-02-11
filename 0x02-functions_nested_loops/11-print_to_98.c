#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - Do something
 *Return: Return something
 *@n: return something
 */
void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n > 98)
{
putchar(44);
putchar(32);
}
n--;
}
printf("\n");
}
else
{
while (n <= 98)
{
printf("%d", n);
if (n < 98)
{
putchar(44);
putchar(32);
}
n++;
}
printf("\n");
}
}
