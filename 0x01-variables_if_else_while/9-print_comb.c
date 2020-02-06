#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n;
char *text,*esp;
text = ",";
esp = " ";
for (n = 0; n >= 0 && n < 10; n++)
{
putchar((char)(n + 48));
if (n < 9)
{
putchar(*text);
putchar(*esp);
}
if (n == 9)
{
putchar('\n');
}
}
return (0);
}
