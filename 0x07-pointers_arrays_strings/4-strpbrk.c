#include "holberton.h"
/**
 **_strpbrk - searches a string for any of a set of bytes.
 *Return: the function returns a char.
 *@s:  string to be scanned.
 *@accept: containing the characters to match.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, a;
for (i = 0; s[i] != '\0'; i++)
{
a = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
a = 1;
break;
}
}
if (a == 1)
break;
}
if (a == 1)
{
return (&s[i]);
}
else
{
return ('\0');
}
}
