#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
long int numero, f;
f = 2;
numero = 612852475143;
while (numero != 1)
{
if (numero % f == 0)
{
numero = numero / f;
}
else
{
f++;
}
}
printf("%ld\n", f);
return (0);
}
