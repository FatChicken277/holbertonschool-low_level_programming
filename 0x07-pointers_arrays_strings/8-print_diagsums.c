#include "holberton.h"
#include "stdio.h"
/**
 *print_diagsums - prints the sum of the two diagonals.
 *@a: pointer to matrix.
 *@size: size of matrix.
 */
void print_diagsums(int *a, int size)
{
int f = 0, c = 0;
int acump = 0, acums = 0;
for (f = 0; f < size; f++)
for (c = 0; c < size ; c++)
if (f == c)
acump = acump + a[f * size + c];
for (f = 0; f < size; f++)
for (c = 0; c < size ; c++)
if (f + c == size - 1)
acums = acums + a[f * size + c];
printf("%d, %d\n", acump, acums);
}
