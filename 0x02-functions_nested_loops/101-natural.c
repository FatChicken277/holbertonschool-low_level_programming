#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
int suma, c, c2, suma3, sf;
suma = 0;
suma3 = 0;
c = 5;
c2 = 3;
while (c < 1024)
{
suma = suma + c;
c = c + 5;
}
while (c2 < 1024)
{
if (((c2 % 10) == 5) || ((c2 % 10) == 0))
suma3 = suma3;
else
suma3 = suma3 + c2;
c2 = c2 + 3;
}
sf = suma + suma3;
printf("%d\n", sf);
return (0);
}
