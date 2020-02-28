#include <stdio.h>
/**
 *main - prints all arguments it receives.
 *@argc: number of arguments passed.
 *@argv: pointer array which points to each argument passed.
 *Return: return 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
printf("\n");
}
return (0);
}
