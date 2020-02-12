#include "holberton.h"
#include <stdio.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
long int t1, t2, tf, c, suman;
t1 = 1;
t2 = 2;
suman = 0;
for (c = 0; c < 48; c++)
{
tf = t1 + t2;
t1 = t2;
t2 = tf;
if (tf < 4000000)
{
if ((tf % 2) == 0)
{
suman = suman + tf;
}
}
}
suman = suman + 2;
printf("%ld\n", suman);
return (0);
}
