#include "holberton.h"
/**
 **_strcpy - do something
 *@src: do something
 *@dest: do something
 *Return: something
 */
char *_strcpy(char *dest, char *src)
{
int c, i, m;
m = 0;
i = 0;
for (i = 0; src[i] != '\0'; i++)
;
for (c = 0; c < i; c++)
{
dest[m] = src[c];
m++;
}
m++;
return (dest);
}



