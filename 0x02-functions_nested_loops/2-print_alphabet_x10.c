#include "holberton.h"
/**
 *print_alphabet_x10 - Do something
 *Return: Return something
 */
void print_alphabet_x10(void)
{
char alp = 'a';
int c;
for (c = 0; c < 10; c++)
{
while (alp <= 'z')
{
_putchar(alp);
alp++;
}
alp = 'a';
_putchar('\n');
}
}
