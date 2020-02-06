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
while (i != 26)
{
putchar (ch);
i++;
ch++;
if (i == 26)
putchar ('\n');
}
return (0);
}
