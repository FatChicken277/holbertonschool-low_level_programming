#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n, o, m, p;
for (o = 0; o < 10; o++)
{
for (n = 0; n < 10; n++)
{
for (p = 0; p < 10; p++)
{
for (m = 0; m < 10; m++)
{
if (n <= m)
{
putchar((char)(o + 48));
putchar((char)(n + 48));
putchar(32);
putchar((char)(p + 48));
putchar((char)(m + 48));
if (!((m == 9 && p == 9) && (o == 9 && n == 8)))
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
}
}
}
return (0);
}
