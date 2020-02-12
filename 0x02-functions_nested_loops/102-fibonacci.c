#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
long int t1, t2, tf, c;
t1 = 1;
t2 = 2;
printf("%ld, ", t1);
printf("%ld, ", t2);
for (c = 0; c < 48; c++)
{
tf = t1 + t2;
printf("%ld", tf);
if (!(c == 47))
printf(", ");
t1 = t2;
t2 = tf;
}
printf("\n");
return (0);
}
