#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
long double t1, t2, tf;
int c;
t1 = 1;
t2 = 2;
printf("%.Lf, ", t1);
printf("%.Lf, ", t2);
for (c = 0; c < 96; c++)
{
tf = t1 + t2;
t1 = t2;
t2 = tf;
printf("%.Lf", tf);
if (c != 95)
printf(", ");
}
printf("\n");
return (0);
}
