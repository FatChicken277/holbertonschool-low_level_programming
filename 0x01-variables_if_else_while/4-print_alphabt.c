#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
char ch = 'a';
int i;
i = 0;
while (i != 24)
{
if (ch == 'e')
{
ch++;
}
if (ch == 'q')
{
ch++;
}
putchar (ch);
i++;
ch++;
if (i == 24)
putchar ('\n');
}
return (0);
}
