#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n;
for (n = 0; n >= 0 && n < 10; n++)
{
printf("%d", n);
if (n == 9)
printf("\n");
}
return (0);
}
