#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers.
 *@argc: number of arguments passed.
 *@argv: pointer array which points to each argument passed.
 *Return: return 0 if all its good and 1 if not receive two arguments.
 */
int main(int argc, char *argv[])
{
int b = 0, a = 0, c = 0;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a *b;
printf("%d\n", c);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
