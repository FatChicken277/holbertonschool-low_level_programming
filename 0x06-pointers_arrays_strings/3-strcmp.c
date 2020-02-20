#include "holberton.h"
/**
 **_strncmp - do something
 *@s1: do something
 *@s2: do something
 *Return: something
 */
int _strcmp(char *s1, char *s2)
{
int i, j;
for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (i > j || j < i)
return (15);
else if (i < j || j > i)
return (-15);
else
return (0);
}
