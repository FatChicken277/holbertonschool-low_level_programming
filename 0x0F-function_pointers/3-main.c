#include "3-calc.h"
/**
 *main - program that performs simple operations.
 *@argv: args.
 *@argc: number of args.
 *Return: result as int.
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc == 4)
	{
		if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*'
		&& *argv[2] != '/' && *argv[2] != '%') || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}

		if ((*argv[2] == '/' && *argv[3] == '0')
		|| (*argv[2] == '%' && *argv[3] == '0'))
		{
			printf("Error\n");
			exit(100);
		}

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		printf("%d\n", (*get_op_func(argv[2]))(a, b));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
