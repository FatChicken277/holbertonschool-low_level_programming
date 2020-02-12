#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
unsigned long int t1, t2, tf, c;
t1 = 1;
t2 = 2;
printf("%lu, ", t1);
printf("%lu, ", t2);
for (c = 0; c < 98; c++)
{
tf = t1 + t2;
printf("%lu", tf);
if (!(c == 47))
printf(", ");
t1 = t2;
t2 = tf;
}
printf("\n");
return (0);
}
