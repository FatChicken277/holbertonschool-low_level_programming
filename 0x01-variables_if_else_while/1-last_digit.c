#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - print a negative, positive and zero
 *Return: something
 */
int main(void)
{
int n, lastDigit;
char *text;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
text = "and is greater than 5";
}
else if (lastDigit < 6 && lastDigit != 0)
{
text = "and is less than 6 and not 0";
}
else
{
text = "and is 0";
}
printf("Last digit of %d is %d %s \n", n, lastDigit, text);
return (0);
}
