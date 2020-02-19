#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - do something
 *Return: something
 */
int main(void)
{
char r;
int a = 2772;
srand(time(NULL));
while (a > 90)
{
r = (rand() % (90 - 65)) + 65;
a = a - r;
printf("%c", r);
}
printf("%c", a);
return (0);
}
