#include "3-calc.h"

/**
 *op_add - add 2 numbers.
 *@a: first 1.
 *@b: second number.
 *Return: result as int.
 */
int op_add(int a, int b)
{
	int result_add = a + b;

	return (result_add);
}

/**
 *op_sub - subtract 2 numbers.
 *@a: first number.
 *@b: second number.
 *Return: result as int.
 */
int op_sub(int a, int b)
{
	int result_sub = a - b;

	return (result_sub);
}

/**
 *op_mul - multiply 2 numbers.
 *@a: first number.
 *@b: second number.
 *Return: result as int.
 */
int op_mul(int a, int b)
{
	int result_mul = a * b;

	return (result_mul);
}

/**
 *op_div - divide 2 numbers.
 *@a: first number.
 *@b: second number.
 *Return: result as int.
 */
int op_div(int a, int b)
{
	int result_div = a / b;

	return (result_div);
}

/**
 *op_mod - modulus 2 numbers.
 *@a: first number.
 *@b: second number.
 *Return: result as int.
 */
int op_mod(int a, int b)
{
	int result_mod = a % b;

	return (result_mod);
}
