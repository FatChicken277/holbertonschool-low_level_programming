#include "holberton.h"
/**
 **_strpbrk - searches a string for any of a set of bytes.
 *Return: the function returns a char.
 *@s:  string to be scanned.
 *@accept: containing the characters to match.
 */
char *_strpbrk(char *s, char *accept)
{
int i, ca, x = 0;
for (ca = 0; accept[ca] != '\0'; ca++)
;
for (i = 0; s[i] != '\0'; i++)
{
x = 0;
while (!(accept[x] == s[i]) && x < ca)
{
x++;
}
if (accept[x] == s[i])
{
return (&s[x - 1]);
}
}
return ('\0');
}
