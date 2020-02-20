#include "holberton.h"
/**
 **_strncat - do something
 *@dest: do something
 *@src: do something
 *@n: do something
 *Return: something
 */
char *_strncat(char *dest, char *src, int n)
{
int c, i, j, m;
m = 0;
for (i = 0; dest[i] != '\0'; i++)
;
c = i;
for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
{
dest[c] = src[m];
m++;
c++;
}
}
return (dest);
}
