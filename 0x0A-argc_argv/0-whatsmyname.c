#include <stdio.h>
/**
 *main - prints program name, followed by a new line.
 *@argc: number of arguments passed.
 *@argv: pointer array which points to each argument passed.
 *Return: return 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s", argv[0]);
printf("\n");
return (0);
}
