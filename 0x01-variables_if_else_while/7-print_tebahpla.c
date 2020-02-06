#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n;
for (n = 0; n <= 0 && n > -26; n--)
{
putchar((char)(n + 122));
if (n == -25)
putchar('\n');
}
return (0);
}
