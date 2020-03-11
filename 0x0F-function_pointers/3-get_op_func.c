#include "3-calc.h"

/**
 *get_op_func - selects the correct function to perform the operation asked.
 *@s: char.
 *Return: result as int.
 */

int (*get_op_func(char *s))(int a, int b)
{

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

	int i = 0;

	while (ops[i].op[0] != 0)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
