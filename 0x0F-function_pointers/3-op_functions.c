#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition function
 * @a: first operand
 * @b: second operand
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: first operand
 * @b: second operand
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product function
 * @a: first operand
 * @b: second operand
 * Return: product a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first operand
 * @b: second operand
 * Return: a over b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - modulus function
 * @a: first operand
 * @b: second operand
 * Return: a mod b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
