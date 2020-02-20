#include "holberton.h"
/**
 **_strcat - do something
 *@dest: do something
 *@src: do something
 *Return: something
 */
char *_strcat(char *dest, char *src)
{
int c, i, j, m;
m = 0;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
;
for (c = i; c < i + j; c++)
{
dest[c] = src[m];
m++;
}
dest[c] = '\0';
return (dest);
}
