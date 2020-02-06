#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n, o;
for (o = 0; o < 10; o++)
{
for (n = 0; n < 10; n++)
{
putchar((char)(o + 48));
putchar((char)(n + 48));
if (!(n == 9 && o == 9))
{
putchar(44);
putchar(32);
}
else
{
putchar('\n');
}
}
}
return (0);
}
