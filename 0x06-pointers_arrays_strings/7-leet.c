#include "holberton.h"
/**
 **leet - do something
 *@s: do somerhing
 *Return: something
 */
char *leet(char *s)
{
int i, x = 0;
char v[] = "43071";
char v2[] = "aeotl";
char v3[] = "AEOTL";
for (i = 0; s[i] != '\0'; i++)
{
x = 0;
while (!(v2[x] == s[i] || v3[x] == s[i]) && x < 6)
{
x++;
}
if (v2[x] == s[i] || v3[x] == s[i])
s[i] = v[x];
}
return (s);
}
