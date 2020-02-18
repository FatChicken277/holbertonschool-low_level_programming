#include "holberton.h"
/**
 *rev_string - do something
 *@s: do something
 *Return: something
 */
void rev_string(char *s)
{
int c, i, x, m;
char v[1024];
m = 0;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (c = i; c > -1; c--)
{
v[m] = s[c];
m++;
}
for (x = 0; x <= i; x++)
{
s[x] = v[x];
}
}



