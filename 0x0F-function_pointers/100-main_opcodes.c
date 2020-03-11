#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the opcodes of its own main function.
 *@argc: number of args.
 *@argv: pointer to args.
 *Return: int.
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *p;
		int i, j = 0;

		p = (char *)main;
		j = atoi(argv[1]);
		if (j < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < j; i++)
		{
			if (i < j - 1)
				printf("%hhx ", p[i]);
			else
				printf("%hhx\n", p[i]);
		}
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
