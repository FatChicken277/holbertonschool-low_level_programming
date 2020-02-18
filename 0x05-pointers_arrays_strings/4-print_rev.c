#include "holberton.h"
/**
 *print_rev - do something
 *@s: do something
 *Return: something
 */
void print_rev(char *s)
{
int c, i;
i = 0;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (c = i; c != -1; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
