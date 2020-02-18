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
int r;
for (r = 0; r < n; r++)
{
if (r < n - 1)
printf("%d, ", a[r]);
else
printf("%d", a[r]);
}
printf("\n");
}
