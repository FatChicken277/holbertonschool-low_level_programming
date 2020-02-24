#include "holberton.h"
/**
 **_strchr - locates a character in a string.
 *Return: the function returns a char.
 *@s: This is the string to be scanned
 *@c: This is the character to be searched in str.
 */
char *_strchr(char *s, char c)
{
int r;
for (r = 0; s[r] != '\0'; r++)
{
if (s[r] == c)
{
return (s + r);
}
}
return ('\0');
}
