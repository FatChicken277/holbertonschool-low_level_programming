#include "holberton.h"
/**
 **_memcpy -copies memory area.
 *Return: the function returns a char.
 *@dest: This is pointer to where the content is to be copied.
 *@src: This is pointer to the source of data to be copied.
 *@n: This is the number of bytes to be copied.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int r;
for (r = 0; r < n; r++)
{
dest[r] = src[r];
}
return (dest);
}
