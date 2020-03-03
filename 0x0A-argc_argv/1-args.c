#include <stdio.h>
/**
 *main - prints the number of arguments passed into it.
 *@argc: number of arguments passed.
 *@argv: pointer array which points to each argument passed.
 *Return: return 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d", argc - 1);
printf("\n");
return (0);
}
