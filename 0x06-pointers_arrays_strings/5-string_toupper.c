#include "holberton.h"
/**
 **string_toupper - do something
 *@s: do somerhing
 *Return: something
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
}
return (s);
}
