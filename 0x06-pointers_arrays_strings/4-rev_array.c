#include "holberton.h"
/**
 *reverse_array - do something
 *@a: do something
 *@n: do something
 *Return: something
 */
void reverse_array(int *a, int n)
{
int i, x;
int v[1024];
int k;
k = n - 1;
for (i = 0; i < n; i++)
{
v[i] = a[k];
k--;
}
for (x = 0; x < n; x++)
{
a[x] = v[x];
}
}
