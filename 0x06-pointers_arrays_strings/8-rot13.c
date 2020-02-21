#include "holberton.h"
/**
 **rot13 - do something
 *@s: do somerhing
 *Return: something
 */
char *rot13(char *s)
{
int i, x = 0;
char v[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char v2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
for (i = 0; s[i] != '\0'; i++)
{
x = 0;
while (!(v2[x] == s[i]) && x < 53)
{
x++;
}
if (v2[x] == s[i])
s[i] = v[x];
}
return (s);
}
