#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - adds positive numbers.
 *@argc: number of arguments passed.
 *@argv: pointer array which points to each argument passed.
 *Return: return 0 if all its good or if argc < 2
 *and 1 if not receive digit arguments.
 */
int main(int argc, char *argv[])
{
  int a = 0, i, o;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]) != 0)
{
for (o = 0; argv[i][o] != '\0'; o++)
{
if(isdigit(argv[i][o]) == 0)
{
printf("Error\n");
return (1);
}
}
a = a + atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", a);
return (0);
}
