#include "holberton.h"
/**
 **_strspn - gets the length of a prefix substring.
 *Return: the function returns a u-int.
 *@s:  string to be scanned.
 *@accept: containing the list of characters to match.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, ca, x = 0, count = 0;
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
count++;
}
else
{
if (count != 0)
return (count);
else
return ('\0');
}
}
return (count);
}
