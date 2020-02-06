#include <stdio.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
char ch = 'a';
char f = 'A';
int i, o;
i = 0;
while (i != 26)
{
putchar (ch);
i++;
ch++;
}
while (o != 26)
{
putchar (f);
o++;
f++;
}
if (o == 26)
putchar ('\n');
return (0);
}
