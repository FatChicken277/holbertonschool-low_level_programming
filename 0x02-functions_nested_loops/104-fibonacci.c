#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
float t1, t2, tf;
int c;
t1 = 1;
t2 = 2;
printf("%.f, ", t1);
printf("%.f, ", t2);
for (c = 0; c < 96; c++)
{
tf = t1 + t2;
t1 = t2;
t2 = tf;
printf("%.f", tf);
if (c != 95)
printf(", ");
}
printf("\n");
return (0);
}
