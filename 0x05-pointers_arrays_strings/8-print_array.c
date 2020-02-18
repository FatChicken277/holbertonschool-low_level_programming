#include "holberton.h"
#include <stdio.h>
/**
 *puts_half - do something
 *@str: do something
 *Return: something
 */
void print_array(int *a, int n)
{
int x, r;
n = 6;
x = n;
for (r = 0; r != x; r++)
{
if (!(r == x - 1))
printf("%d, ", a[r]);
else
printf("%d", a[r]);
}
printf("\n");
}
