#include "holberton.h"
#include <stdio.h>
/**
 *print_array - do something
 *@a: do something
 *@n: do something
 *Return: something
 */
void print_array(int *a, int n)
{
int x, r;
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
