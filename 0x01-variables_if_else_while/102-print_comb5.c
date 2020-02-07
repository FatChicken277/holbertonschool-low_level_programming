#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n, o, m, p, s, d;
for (o = 0; o < 10; o++)
{
for (n = 0; n < 10; n++)
{
s = o;
d = n;
for (p = s; p < 10; p++)
{
m = d + 1;
while (m < 10)
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
m++;
}
d = -1; 
}
if (o == 9 && n == 8)
break;
}
}
putchar('\n');
return (0);
}
