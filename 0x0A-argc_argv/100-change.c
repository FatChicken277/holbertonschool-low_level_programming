#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int funaux(int i);
/**
 *main -  prints the minimum number of coins to make change.
 *@argc: number of arguments passed.
 *@argv: pointer array which points to each argument passed.
 *Return: return 0 if all its good and 1 if not receive two arguments.
 */
int main(int argc, char *argv[])
{
int i;
if (argc == 2)
{
i = atoi(argv[1]);
if (i < 0)
{
printf("0\n");
}
else
{
printf("%d\n", funaux(i));
}
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
/**
 *funaux - coins counter.
 *@i: money.
 *Return: coin number.
 */
int funaux(int i)
{
int c, mc = 0;
int monedas[] = {25, 10, 5, 2, 1};
for (c = 0; i != 0;)
{
fun:;
if (i - monedas[c] >= 0)
{
i = i - monedas[c];
mc++;
}
else
{
if (i > 0)
{
c++;
goto fun;
}
c++;
}
}
return (mc);
}
