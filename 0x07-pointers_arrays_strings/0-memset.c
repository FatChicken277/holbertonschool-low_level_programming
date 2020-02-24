#include "holberton.h"
/**
 **_memset - fills memory with a constant byte.
 *Return: the function returns a char.
 *@s: This is a pointer to the block of memory to fill.
 *@b: This is the value to be set.
 *@n: This is the number of bytes to be set to the value.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int r;
for (r = 0; r != n; r++)
{
s[r] = b;
}
return (s);
}
