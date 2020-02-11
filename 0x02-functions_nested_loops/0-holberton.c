#include "holberton.h"
/**
 *main - Do something
 *Return: Return something
 */
int main(void)
{
char *hola = "Holberton";
int a;
a = 0;
while (a < 9)
{
_putchar(*hola);
hola++;
a++;
}
_putchar('\n');
return (0);
}
