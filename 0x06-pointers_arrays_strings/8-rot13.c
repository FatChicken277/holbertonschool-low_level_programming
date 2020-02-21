#include "holberton.h"
/**
 **rot13 - do something
 *@s: do somerhing
 *Return: something
 */
char *rot13(char *s)
{
int i, x = 0;
char v[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
char v4[] = "nopqrstuvwxyzabcdefghijklm";
char v2[] = "abcdefghijklmnopqrstuvwxyz";
char v3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; s[i] != '\0'; i++)
{
x = 0;
while (!(v2[x] == s[i] || v3[x] == s[i]) && x < 27)
{
x++;
}
if (v2[x] == s[i])
s[i] = v4[x];
else if (v3[x] == s[i])
s[i] = v[x];
}
return (s);
}
