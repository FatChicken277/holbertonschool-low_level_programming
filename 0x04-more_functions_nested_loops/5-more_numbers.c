#include "holberton.h"
/**
 *more_numbers - Do something
 *Return: Return something
 */
void more_numbers(void)
{
int cont, cont2;
for (cont2 = 0; cont2 < 11; cont2++)
{
for (cont = 0; cont < 15; cont++)
{
if (cont > 9)
{
_putchar((cont / 10) + 48);
}
_putchar((cont % 10) + 48);
}
_putchar('\n');
}
}
