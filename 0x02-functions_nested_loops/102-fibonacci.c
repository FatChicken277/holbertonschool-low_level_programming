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
printf("%ld\n", t1);
printf("%ld\n", t2);
for (c = 0; c < 49; c++)
{
tf = t1 + t2;
printf("%ld\n", tf);
t1 = t2;
t2 = tf;
}
return (0);
}
